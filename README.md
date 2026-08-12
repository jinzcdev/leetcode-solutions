# LeetCode Solutions

个人 LeetCode 题解仓库，主要使用 C++（C++17），部分 Java。

## 在线文档

通过 GitHub Pages 可在线阅读题解文档：

<https://jinzcdev.github.io/leetcode-solutions/>

- [LeetCode Hot 100 题解（C++）](https://jinzcdev.github.io/leetcode-solutions/#/Leetcode/LeetCode-Hot100-CPP)

> 首次启用：仓库 Settings → Pages → Build and deployment → Source 选择 **GitHub Actions**，合并配置后 workflow 会自动部署。

## 本地运行

### 文档站点

需要 Node.js 环境。在项目根目录执行：

```bash
npx docsify-cli serve .
```

默认在 `http://localhost:3000` 启动，支持热更新——修改 Markdown 文件后浏览器自动刷新。

站点功能（Docsify v5）：

- 全文搜索（内置 `search` 插件）
- 代码一键复制（`docsify-copy-code`）
- 上一篇/下一篇导航（`docsify-pagination`）
- 深色/浅色模式跟随系统（`core-dark` + `prefers-color-scheme`）
- 语法高亮主题（官方 [`prism-themes`](https://github.com/PrismJS/prism-themes)：浅色 `prism-one-light`，深色 `prism-vsc-dark-plus`）

更换代码高亮主题：编辑 `index.html` 中两处 `prism-themes` 的 CSS 文件名即可（注释里列有常用主题）。

### 编译运行 C++ 题解

每个 C++ 文件是独立的单文件解答，可直接编译运行：

```bash
g++ -std=c++17 -o /tmp/a.out Leetcode/path/to/problem.cpp && /tmp/a.out
```

## 目录结构

```text
├── Leetcode/
│   ├── hot100/              # Hot 100 按知识点分类的代码
│   ├── LeetCode-Hot100-CPP.md
│   ├── top-100.json
│   └── *.cpp / *.java       # 其他 LeetCode 题解
├── index.html               # Docsify 文档站点入口
├── _sidebar.md              # 文档侧边栏
├── README.md                # 项目说明
├── AGENTS.md                # AI 编码助手指引
└── .github/workflows/       # GitHub Actions 自动部署
```
