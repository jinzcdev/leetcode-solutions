# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 概述

个人算法竞赛（ACM/蓝桥杯/PAT 等）刷题仓库，主要使用 C++（C++17），部分 Java、Python、C。覆盖多个 OJ 平台。

## 构建与运行

每个 C++ 文件是独立的单文件解答，无构建系统。编译和运行：

```bash
g++ -std=c++17 -o /tmp/a.out path/to/problem.cpp && /tmp/a.out
```

VS Code 配置使用 Homebrew 安装的 GCC-14（macOS ARM64）：`/opt/homebrew/bin/gcc-14`。C++17 标准，C17 标准。

## 仓库结构

```
├── Leetcode/          # LeetCode 题解（主要刷题方向）
│   ├── LeetCode-Hot100-CPP.md  # Hot 100 题解汇总，含代码、思路、复杂度分析
│   └── top-100.json            # Hot 100 题目索引，按知识点分类
├── PAT/               # PAT 浙大计算机程序设计能力考试题解
│   ├── Advanced/      # 甲级，按算法专题分类（图论、树、DP、贪心等）
│   ├── Basic/         # 乙级（B1001-B1099）
│   └── PAT_AlgoNote_Solution/  # 《算法笔记》配套题解（A1001-A1099）
├── AlgorithmNote/     # 算法笔记各专题实现（排序、搜索、树、并查集等）
├── Codeup/            # Codeup 平台题解
├── Dotcpp/            # Dotcpp 平台题解
├── HDU/               # 杭电 OJ 题解
├── LanQiao/           # 蓝桥杯竞赛题解
├── MOOC/              # 浙大数据结构 MOOC 习题
└── Others/            # 杂项算法实现
    └── Sort/          # 各类排序算法实现
```

## 文件命名规则

- **LeetCode**: `{题号}.{题目英文slug}.{后缀}`（如 `3.无重复字符的最长子串.cpp`）
- **PAT 乙级**: `B{题号} {题目名}.cpp`（如 `B1001 害死人不偿命的(3n+1)猜想.cpp`）
- **PAT 甲级**: `A{题号} {题目名}.cpp`（如 `A1003 Emergency.cpp`）
- LeetCode 文件头部通常有注释块 `/* @lc app=leetcode.cn id={题号} lang=cpp ... */`

## LeetCode MCP Server

`.mcp.json` 中配置了 LeetCode 中国站（`leetcode.cn`）的 MCP Server，提供获取题目、提交代码、运行测试、查看提交记录等工具。处理 LeetCode 相关任务时可直接使用。

## 关键说明

- 所有解答均为自包含文件，通过 `main()` 函数或 `Solution` 类从标准输入读取、输出到标准输出
- `LeetCode-Hot100-CPP.md` 是主要文档资产，按哈希、双指针、滑动窗口、二叉树、动态规划等专题整理了 79 道 Hot 100 题解
- `top-100.json` 按知识点分类映射了 LeetCode 题目 slug 和标签
- 部分题目存在多种解法的不同实现（如 DFS vs BFS、Dijkstra vs Dijkstra+DFS）