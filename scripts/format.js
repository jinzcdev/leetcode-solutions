#!/usr/bin/env node
/**
 * Unified formatter:
 * - Prettier: md / html / json / yaml / java（独立 .java 文件）
 * - clang-format (npm): 独立 C/C++ 文件
 * - Markdown 内 ```cpp / ```c / ```java 代码块：分别用 clang-format / Prettier 格式化
 *
 * 语法错误的 Java（文件或代码块）会跳过并告警。
 */
const { spawnSync } = require("child_process");
const { readdirSync, statSync, readFileSync, writeFileSync } = require("fs");
const { join, relative } = require("path");

const root = join(__dirname, "..");
const checkOnly = process.argv.includes("--check");
const mdOnly = process.argv.includes("--md-fences");

function run(cmd, args, opts = {}) {
  return spawnSync(cmd, args, {
    cwd: root,
    encoding: "utf8",
    stdio: opts.stdio || "pipe",
    input: opts.input,
    shell: false,
  });
}

function walk(dir, pred, out = []) {
  for (const name of readdirSync(dir)) {
    if (name === ".git" || name === "node_modules" || name === ".codegraph" || name === ".idea") {
      continue;
    }
    const p = join(dir, name);
    let st;
    try {
      st = statSync(p);
    } catch {
      continue;
    }
    if (st.isDirectory()) walk(p, pred, out);
    else if (pred(p)) out.push(p);
  }
  return out;
}

const bin = (name) => join(root, "node_modules", ".bin", name);

function normalizeFenceCode(code) {
  // clang-format / prettier 常带末尾换行；代码块内保持单行末尾换行即可
  return code.replace(/\s+$/, "") + "\n";
}

function formatCppSnippet(code) {
  const r = run(
    bin("clang-format"),
    ["--style=file", `--assume-filename=${join(root, "_snippet.cpp")}`],
    { input: code }
  );
  if (r.status !== 0) {
    return { ok: false, error: (r.stderr || r.stdout || "clang-format failed").trim() };
  }
  return { ok: true, code: normalizeFenceCode(r.stdout) };
}

function formatJavaSnippet(code) {
  const r = run(bin("prettier"), ["--stdin-filepath", "_snippet.java"], { input: code });
  if (r.status !== 0) {
    return { ok: false, error: (r.stderr || r.stdout || "prettier failed").trim().split("\n")[0] };
  }
  return { ok: true, code: normalizeFenceCode(r.stdout) };
}

/** Format ```cpp|c|c++|java fenced blocks inside Markdown files. */
function formatMarkdownFences(files) {
  console.log(`==> Markdown code fences (cpp/java)${checkOnly ? " [check]" : ""}`);
  let changedFiles = 0;
  let blockOk = 0;
  let blockSkip = 0;

  for (const file of files) {
    const rel = relative(root, file);
    const src = readFileSync(file, "utf8");
    // 仅匹配行首的围栏，避免误伤行内内容
    const fenceRe = /^```(cpp|c\+\+|c|java)[^\n]*\n([\s\S]*?)^```/gm;
    let out = "";
    let last = 0;
    let fileChanged = false;
    let m;
    while ((m = fenceRe.exec(src)) !== null) {
      const lang = m[1].toLowerCase();
      const body = m[2];
      const start = m.index;
      const end = m.index + m[0].length;
      out += src.slice(last, start);

      let result;
      if (lang === "java") {
        result = formatJavaSnippet(body);
      } else {
        result = formatCppSnippet(body);
      }

      if (!result.ok) {
        blockSkip++;
        console.warn(`    skip ${rel} (${lang}): ${result.error}`);
        out += m[0];
      } else {
        const formatted = result.code;
        if (formatted !== body) {
          fileChanged = true;
          if (checkOnly) {
            console.warn(`    would reformat fence in ${rel} (${lang})`);
          }
        }
        blockOk++;
        out += "```" + m[1] + "\n" + formatted + "```";
      }
      last = end;
    }
    out += src.slice(last);

    if (fileChanged) {
      changedFiles++;
      if (!checkOnly) writeFileSync(file, out, "utf8");
    }
  }

  console.log(`    fences ok=${blockOk} skipped=${blockSkip}; files changed=${changedFiles}`);
  if (checkOnly && changedFiles > 0) {
    console.error("    Markdown code fences differ from formatter output");
    process.exit(1);
  }
}

const mdFiles = () => walk(root, (p) => p.endsWith(".md")).sort();

if (mdOnly) {
  const { isAbsolute } = require("path");
  const args = process.argv.slice(2).filter((a) => a.endsWith(".md") && !a.startsWith("-"));
  const targets =
    args.length > 0 ? args.map((p) => (isAbsolute(p) ? p : join(root, p))) : mdFiles();
  formatMarkdownFences(targets);
  console.log("Done.");
  process.exit(0);
}

console.log(`==> Prettier (docs)${checkOnly ? " [check]" : ""}`);
{
  const args = [
    checkOnly ? "--check" : "--write",
    "**/*.{md,html,json,yml,yaml,css,js}",
    "--ignore-path",
    ".prettierignore",
  ];
  const r = run(bin("prettier"), args, { stdio: "inherit" });
  if (r.status !== 0) process.exit(r.status || 1);
}

formatMarkdownFences(mdFiles());

console.log(`==> Prettier (Java files)${checkOnly ? " [check]" : ""}`);
{
  const javas = walk(root, (p) => p.endsWith(".java")).sort();
  let ok = 0;
  let fail = 0;
  for (const file of javas) {
    const rel = relative(root, file);
    const r = run(bin("prettier"), [checkOnly ? "--check" : "--write", rel]);
    if (r.status === 0) {
      ok++;
      if (r.stdout) process.stdout.write(r.stdout);
    } else {
      fail++;
      const msg = (r.stderr || r.stdout || "").split("\n")[0];
      console.warn(`    skip ${rel}: ${msg || "parse/format error"}`);
    }
  }
  console.log(`    java ok=${ok} skipped=${fail}`);
}

console.log(`==> clang-format (C/C++ files)${checkOnly ? " [check]" : ""}`);
{
  const cpps = walk(root, (p) => /\.(c|h|cc|cpp|cxx|hpp)$/.test(p)).sort();
  if (cpps.length === 0) {
    console.log("    no C/C++ files");
  } else if (checkOnly) {
    const r = run(
      bin("clang-format"),
      ["--dry-run", "--Werror", ...cpps.map((p) => relative(root, p))],
      { stdio: "inherit" }
    );
    if (r.status !== 0) {
      console.error("    C/C++ formatting differs from .clang-format");
      process.exit(r.status || 1);
    }
    console.log(`    checked ${cpps.length} file(s)`);
  } else {
    const r = run(
      bin("clang-format"),
      ["-i", "--style=file", ...cpps.map((p) => relative(root, p))],
      { stdio: "inherit" }
    );
    if (r.status !== 0) process.exit(r.status || 1);
    console.log(`    formatted ${cpps.length} file(s)`);
  }
}

console.log("Done.");
