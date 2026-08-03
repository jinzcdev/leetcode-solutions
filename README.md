# LeetCode Solutions

个人 LeetCode 题解仓库，主要使用 C++（C++17），部分 Java。

## 在线文档

通过 GitHub Pages 可在线阅读题解文档：

**https://jinzcdev.github.io/leetcode-solutions/**

- [LeetCode Hot 100 题解（C++）](https://jinzcdev.github.io/leetcode-solutions/#/Leetcode/LeetCode-Hot100-CPP)

> 首次启用：仓库 Settings → Pages → Build and deployment → Source 选择 **GitHub Actions**，合并配置后 workflow 会自动部署。

## 目录结构

```
├── Leetcode/
│   ├── hot100/              # Hot 100 按知识点分类的代码
│   ├── LeetCode-Hot100-CPP.md
│   ├── top-100.json
│   └── *.cpp / *.java       # 其他 LeetCode 题解
├── index.html               # Docsify 文档站点入口
└── _sidebar.md
```

## 编译与运行

```bash
g++ -std=c++17 -o /tmp/a.out Leetcode/path/to/problem.cpp && /tmp/a.out
```
