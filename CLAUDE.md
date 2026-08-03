# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 概述

个人 LeetCode 题解仓库，主要使用 C++（C++17），部分 Java。

## 构建与运行

每个 C++ 文件是独立的单文件解答，无构建系统。编译和运行：

```bash
g++ -std=c++17 -o /tmp/a.out path/to/problem.cpp && /tmp/a.out
```

VS Code 配置使用 Homebrew 安装的 GCC-14（macOS ARM64）：`/opt/homebrew/bin/gcc-14`。C++17 标准，C17 标准。

## 仓库结构

```
├── Leetcode/                    # LeetCode 题解
│   ├── hot100/                  # Hot 100 按知识点分类
│   ├── LeetCode-Hot100-CPP.md   # Hot 100 题解汇总
│   └── top-100.json             # Hot 100 题目索引
├── index.html                   # GitHub Pages（Docsify）入口
└── _sidebar.md                  # 文档侧边栏
```

## 文件命名规则

- **LeetCode**: `{题号}.{题目英文slug}.{后缀}`（如 `3.无重复字符的最长子串.cpp`）
- 文件头部通常有注释块 `/* @lc app=leetcode.cn id={题号} lang=cpp ... */`

## LeetCode MCP Server

`.mcp.json` 中配置了 LeetCode 中国站（`leetcode.cn`）的 MCP Server，提供获取题目、提交代码、运行测试、查看提交记录等工具。处理 LeetCode 相关任务时可直接使用。

## 解答说明

- 所有解答均为自包含文件，通过 `main()` 函数或 `Solution` 类从标准输入读取、输出到标准输出
- `LeetCode-Hot100-CPP.md` 是主要文档资产，按哈希、双指针、滑动窗口、二叉树、动态规划等专题整理了 Hot 100 题解
- `top-100.json` 按知识点分类映射了 LeetCode 题目 slug 和标签
- 部分题目存在多种解法的不同实现（如 DFS vs BFS）
