# AGENTS.md

This file provides guidance to AI coding agents when working with code in this repository.

## 概述

个人 LeetCode 题解仓库，主要使用 C++（C++17），部分 Java。

## 仓库结构

```
├── Leetcode/                    # LeetCode 题解
│   ├── hot100/                  # Hot 100 按知识点分类
│   ├── LeetCode-Hot100-CPP.md   # Hot 100 题解汇总
│   └── top-100.json             # Hot 100 题目索引
├── index.html                   # Docsify 文档站点入口（含 darklight-theme 夜间模式）
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
npx docsify serve .
```

站点使用 `docsify-darklight-theme` 插件提供夜间模式切换，通过 `window.$docsify.darklightTheme` 配置。

## 文件命名规则

- **LeetCode**: `{题号}.{题目英文slug}.{后缀}`（如 `3.无重复字符的最长子串.cpp`）
- 文件头部通常有注释块 `/* @lc app=leetcode.cn id={题号} lang=cpp ... */`
