# AGENTS.md

该文件提供了AI编程助手在处理该仓库代码时的指导。

## 概述

个人 LeetCode 题解仓库，主要使用 C++（C++17），部分 Java。

## 仓库结构

```
├── Leetcode/                    # LeetCode 题解
│   ├── hot100/                  # Hot 100 按知识点分类
│   ├── LeetCode-Hot100-CPP.md   # Hot 100 题解汇总
│   └── top-100.json             # Hot 100 题目索引
├── index.html                   # Docsify v5 文档站点入口
├── _sidebar.md                  # 文档侧边栏
├── README.md                    # 项目说明（含本地启动指南）
└── .github/workflows/pages.yml  # GitHub Pages 自动部署
```

## 构建与运行

每个 C++ 文件是独立的单文件解答，无构建系统。编译和运行：

```bash
g++ -std=c++17 -o /tmp/a.out path/to/problem.cpp && /tmp/a.out
```

VS Code 配置使用 Homebrew 安装的 GCC-14（macOS ARM64）：`/opt/homebrew/bin/gcc-14`。C++17 标准。

## 文档站点

本地启动 Docsify 预览：

```bash
npx docsify-cli serve .
```

- Docsify **v5**：`core` 主题 + `core-dark` 插件（`prefers-color-scheme` 跟随系统深浅色）
- 代码高亮：官方 [`prism-themes`](https://github.com/PrismJS/prism-themes)（在 `index.html` 中替换 CSS 文件名即可换主题）
- 语言包：`prism-c` / `prism-cpp` / `prism-java` / `prism-python`（须在 docsify 脚本之后加载）

## 代码格式化

统一入口：`npm run format`（`scripts/format.js`）。

| 类型                          | 工具                                | 配置                  |
| ----------------------------- | ----------------------------------- | --------------------- |
| Markdown / HTML / JSON / YAML | Prettier                            | `.prettierrc.json`    |
| Java                          | Prettier + `prettier-plugin-java`   | 同上（`tabWidth: 4`） |
| C/C++                         | `clang-format`（npm，无需本机安装） | `.clang-format`       |
| 通用缩进                      | EditorConfig                        | `.editorconfig`       |

```bash
npm install      # 首次
npm run format   # 格式化全仓库
```

- 保存时：Prettier（含 Java）+ clang-format 扩展（C/C++），见 `.vscode/settings.json`
- **提交时**：Husky `pre-commit` → lint-staged（按扩展名调用对应工具）
- Markdown 里的 ` ```cpp ` / ` ```java ` 代码块会在 `npm run format`（及提交 md 时）用对应工具格式化；编辑器保存 `.md` 时 Prettier **不会**改代码块内语言
- 语法错误的 Java 在全量 format 时跳过并告警；若提交暂存了坏文件，Prettier 会失败以提示修复

## 文件命名规则

- **LeetCode**: `{题号}.{题目英文slug}.{后缀}`（如 `3.无重复字符的最长子串.cpp`）
- 文件头部通常有注释块 `/* @lc app=leetcode.cn id={题号} lang=cpp ... */`
