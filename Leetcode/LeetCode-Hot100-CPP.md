# LeetCode Hot 100 题解（C++）

> 共收录 Hot 100 全部 **100** 道题目（已 AC **81** 道，未 AC **19** 道参考题解）。
> 按 `top-100.json` 知识点分类；未 AC 题目在标题与目录中标注，代码为参考实现。
> 每题包含：题目描述、C++ 代码、时空复杂度、核心考点、核心思路、易错点。

---

## 目录

- [哈希](#哈希)
  - [两数之和](#1-两数之和)
  - [字母异位词分组](#2-字母异位词分组)
  - [最长连续序列](#3-最长连续序列)

- [双指针](#双指针)
  - [移动零](#1-移动零)
  - [盛最多水的容器](#2-盛最多水的容器)
  - [三数之和](#3-三数之和)
  - [接雨水](#4-接雨水)

- [滑动窗口](#滑动窗口)
  - [无重复字符的最长子串](#1-无重复字符的最长子串)
  - [找到字符串中所有字母异位词](#2-找到字符串中所有字母异位词)

- [子串](#子串)
  - [和为 K 的子数组](#1-和为-k-的子数组)
  - [滑动窗口最大值](#2-滑动窗口最大值)
  - [最小覆盖子串](#3-最小覆盖子串)

- [普通数组](#普通数组)
  - [最大子数组和](#1-最大子数组和)
  - [合并区间](#2-合并区间)
  - [轮转数组](#3-轮转数组)
  - [除自身以外数组的乘积](#4-除自身以外数组的乘积)
  - [缺失的第一个正数](#5-缺失的第一个正数)

- [矩阵](#矩阵)
  - [矩阵置零](#1-矩阵置零)
  - [螺旋矩阵](#2-螺旋矩阵)
  - [旋转图像](#3-旋转图像)
  - [搜索二维矩阵 II](#4-搜索二维矩阵-ii)

- [链表](#链表)
  - [相交链表](#1-相交链表)
  - [反转链表](#2-反转链表)
  - [回文链表](#3-回文链表)
  - [环形链表](#4-环形链表)
  - [环形链表 II](#5-环形链表-ii)
  - [合并两个有序链表](#6-合并两个有序链表)
  - [两数相加](#7-两数相加)
  - [删除链表的倒数第 N 个结点](#8-删除链表的倒数第-n-个结点)
  - [两两交换链表中的节点](#9-两两交换链表中的节点)
  - [K 个一组翻转链表](#10-k-个一组翻转链表)
  - [随机链表的复制](#11-随机链表的复制)
  - [排序链表](#12-排序链表)
  - [合并 K 个升序链表](#13-合并-k-个升序链表)
  - [LRU 缓存](#14-lru-缓存)

- [二叉树](#二叉树)
  - [二叉树的中序遍历](#1-二叉树的中序遍历)
  - [二叉树的最大深度](#2-二叉树的最大深度)
  - [翻转二叉树](#3-翻转二叉树)
  - [对称二叉树](#4-对称二叉树)
  - [二叉树的直径](#5-二叉树的直径)
  - [二叉树的层序遍历](#6-二叉树的层序遍历)
  - [将有序数组转换为二叉搜索树](#7-将有序数组转换为二叉搜索树)
  - [验证二叉搜索树](#8-验证二叉搜索树)
  - [二叉搜索树中第 K 小的元素](#9-二叉搜索树中第-k-小的元素)
  - [二叉树的右视图](#10-二叉树的右视图)
  - [二叉树展开为链表](#11-二叉树展开为链表)
  - [从前序与中序遍历序列构造二叉树](#12-从前序与中序遍历序列构造二叉树)
  - [路径总和 III](#13-路径总和-iii)
  - [二叉树的最近公共祖先](#14-二叉树的最近公共祖先)
  - [二叉树中的最大路径和](#15-二叉树中的最大路径和)

- [图论](#图论)
  - [岛屿数量](#1-岛屿数量)
  - [腐烂的橘子](#2-腐烂的橘子)
  - [课程表](#3-课程表)
  - [实现 Trie (前缀树)](#4-实现-trie-前缀树)

- [回溯](#回溯)
  - [全排列](#1-全排列)
  - [子集](#2-子集)
  - [电话号码的字母组合](#3-电话号码的字母组合)
  - [组合总和](#4-组合总和)
  - [括号生成](#5-括号生成)
  - [单词搜索](#6-单词搜索)
  - [分割回文串](#7-分割回文串)
  - [N 皇后（未 AC）](#8-n-皇后)

- [二分查找](#二分查找)
  - [搜索插入位置](#1-搜索插入位置)
  - [搜索二维矩阵](#2-搜索二维矩阵)
  - [在排序数组中查找元素的第一个和最后一个位置](#3-在排序数组中查找元素的第一个和最后一个位置)
  - [搜索旋转排序数组](#4-搜索旋转排序数组)
  - [寻找旋转排序数组中的最小值](#5-寻找旋转排序数组中的最小值)
  - [寻找两个正序数组的中位数（未 AC）](#6-寻找两个正序数组的中位数)

- [栈](#栈)
  - [有效的括号](#1-有效的括号)
  - [最小栈（未 AC）](#2-最小栈)
  - [字符串解码（未 AC）](#3-字符串解码)
  - [每日温度（未 AC）](#4-每日温度)
  - [柱状图中最大的矩形（未 AC）](#5-柱状图中最大的矩形)

- [堆](#堆)
  - [数组中的第K个最大元素](#1-数组中的第k个最大元素)
  - [前 K 个高频元素](#2-前-k-个高频元素)
  - [数据流的中位数（未 AC）](#3-数据流的中位数)

- [贪心算法](#贪心算法)
  - [买卖股票的最佳时机](#1-买卖股票的最佳时机)
  - [跳跃游戏](#2-跳跃游戏)
  - [跳跃游戏 II（未 AC）](#3-跳跃游戏-ii)
  - [划分字母区间（未 AC）](#4-划分字母区间)

- [动态规划](#动态规划)
  - [爬楼梯](#1-爬楼梯)
  - [杨辉三角](#2-杨辉三角)
  - [打家劫舍](#3-打家劫舍)
  - [完全平方数（未 AC）](#4-完全平方数)
  - [零钱兑换](#5-零钱兑换)
  - [单词拆分（未 AC）](#6-单词拆分)
  - [最长递增子序列](#7-最长递增子序列)
  - [乘积最大子数组](#8-乘积最大子数组)
  - [分割等和子集](#9-分割等和子集)
  - [最长有效括号（未 AC）](#10-最长有效括号)

- [多维动态规划](#多维动态规划)
  - [不同路径（未 AC）](#1-不同路径)
  - [最小路径和](#2-最小路径和)
  - [最长回文子串（未 AC）](#3-最长回文子串)
  - [最长公共子序列（未 AC）](#4-最长公共子序列)
  - [编辑距离（未 AC）](#5-编辑距离)

- [技巧](#技巧)
  - [只出现一次的数字](#1-只出现一次的数字)
  - [多数元素](#2-多数元素)
  - [颜色分类（未 AC）](#3-颜色分类)
  - [下一个排列（未 AC）](#4-下一个排列)
  - [寻找重复数（未 AC）](#5-寻找重复数)

---

## 哈希

### 1. 两数之和

[🔗 LeetCode 原题](https://leetcode.cn/problems/two-sum/) | 🟢 简单

**题目描述：** 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出和为目标值 target 的那两个整数，并返回它们的数组下标。

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int t = target - nums[i];
            if (hash.find(t) != hash.end()) {
                return {hash[t], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
```

**核心思路：** 哈希表存储已遍历元素的值→索引映射，遍历时查找 target - nums[i] 是否已存在。

**易错点：** 返回的是下标而非值；一个元素不能使用两次，需要先查找再插入。

---

### 2. 字母异位词分组

[🔗 LeetCode 原题](https://leetcode.cn/problems/group-anagrams/) | 🟡 中等

**题目描述：** 给你一个字符串数组，请你将字母异位词组合在一起。可以按任意顺序返回结果列表。字母异位词是由重新排列源单词的所有字母得到的一个新单词。

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (auto it : strs) {
            string s = it;
            sort(s.begin(), s.end());
            mp[s].push_back(it);
        }
        for (auto [k, v] : mp) {
            ans.push_back(v);
        }
        return ans;
    }
};
```

**核心思路：** 将每个单词排序后的字符串作为 key，用哈希表分组。排序后相同的单词即为字母异位词。

**易错点：** 排序是 O(k log k) 的；也可用字符计数作为 key 达到 O(k) 但实现更复杂。

---

### 3. 最长连续序列

[🔗 LeetCode 原题](https://leetcode.cn/problems/longest-consecutive-sequence/) | 🟡 中等

**题目描述：** 给定一个未排序的整数数组 nums，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。请你设计并实现时间复杂度为 O(n) 的算法。

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (auto x : nums) {
            st.insert(x);
        }
        int ans = 0;
        for (auto x : st) {
            if (st.find(x - 1) != st.end()) {
                continue;
            }
            int cnt = 0, t = x;
            while (st.find(t) != st.end()) {
                t++;
                cnt++;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
```

**核心思路：** 用哈希集合存储所有数字，遍历时只从「序列起点」（x-1 不在集合中）开始向后计数，避免重复计算。

**易错点：** 必须跳过 x-1 存在的元素，否则时间复杂度退化为 O(n²)；总体 O(n)。

---

## 双指针

### 1. 移动零

[🔗 LeetCode 原题](https://leetcode.cn/problems/move-zeroes/) | 🟢 简单

**题目描述：** 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, n = nums.size();
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                nums[i++] = nums[j];
            }
        }
        for (int j = i; j < n; j++) {
            nums[j] = 0;
        }
    }
};
```

**核心思路：** 双指针：i 指向下一个非零元素应放的位置，j 遍历数组，遇到非零就交换/覆盖到 i 位置。

**易错点：** 要保持非零元素的相对顺序；最后需要将 i 之后的元素全部置零。

---

### 2. 盛最多水的容器

[🔗 LeetCode 原题](https://leetcode.cn/problems/container-with-most-water/) | 🟡 中等

**题目描述：** 给定一个长度为 n 的整数数组 height。有 n 条垂线，第 i 条线的两个端点是 (i, 0) 和 (i, height[i])。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }
        int l = 0, r = height.size() - 1, ans = 0;
        while (l < r) {
            ans = max(ans, (r - l) * min(height[l], height[r]));
            if (height[l] < height[r]) l++;
            else r--;
        }
        return ans;
    }
};
```

**核心思路：** 双指针从两端向中间收缩，每次移动较低的一侧。面积 = 宽度 × min(左高, 右高)。

**易错点：** 移动较高的一侧只会让面积变小，所以必须移动较低的一侧；理解这个贪心策略是关键。

---

### 3. 三数之和

[🔗 LeetCode 原题](https://leetcode.cn/problems/3sum/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums，判断是否存在三元组 [nums[i], nums[j], nums[k]] 满足 i != j、i != k 且 j != k，同时还满足 nums[i] + nums[j] + nums[k] == 0。请你返回所有和为 0 且不重复的三元组。

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int r = n - 1, target = -nums[i];
            for (int l = i + 1; l < r; l++) {
                if (l > i + 1 && nums[l] == nums[l - 1]) {
                    continue;
                }
                int sum;
                while (l < r && (sum = nums[l] + nums[r]) > target) {
                    r--;
                }
                if (sum == target) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                }
            }
        }
        return ans;
    }
};
```

**核心思路：** 排序 + 固定一个数 + 双指针找另外两个数。注意去重：跳过相同的已固定值和相同的左右指针值。

**易错点：** 去重是难点：固定值去重（i > 0 && nums[i] == nums[i-1]），左右指针去重（l > i+1 && nums[l] == nums[l-1]）；还要注意答案可能不止一个。

---

### 4. 接雨水

[🔗 LeetCode 原题](https://leetcode.cn/problems/trapping-rain-water/) | 🔴 困难

**题目描述：** 给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。

```cpp
class Solution {
public:
    int trap(vector<int> &height) {
        int n = height.size();
        vector<int> leftMax(n), rightMax(n);
        leftMax[0] = height[0];
        rightMax[n - 1] = height[n - 1];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
            rightMax[n - i - 1] = max(rightMax[n - i], height[n - i - 1]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(leftMax[i], rightMax[i]) - height[i];
        }
        return ans;
    }
};
```

**核心思路：** 预处理每个位置左右两侧的最大高度 leftMax[i] 和 rightMax[i]，每个位置的积水量 = min(leftMax[i], rightMax[i]) - height[i]。

**易错点：** 双指针法可不使用额外空间；注意边界柱子不能积水；min 操作是核心。

---

## 滑动窗口

### 1. 无重复字符的最长子串

[🔗 LeetCode 原题](https://leetcode.cn/problems/longest-substring-without-repeating-characters/) | 🟡 中等

**题目描述：** 给定一个字符串 s ，请你找出其中不含有重复字符的 最长 子串 的长度。
示例 1:
输入: s = "abcabcbb"
输出: 3
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。注意 "bca" 和 "cab"
也是正确答案。
示例 2:
输入: s = "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:
输入: s = "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
提示：
0 <= s.length <= 5 \* 10^4
s 由英文字母、数字、符号和空格组成

```cpp
class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1) {
            return s.size();
        }
        unordered_set<char> seen;
        int ans = 1, l = 0, n = s.size();
        for (int r = 0; r < n; r++) {
            char ch = s[r];
            while (l < r && seen.find(ch) != seen.end()) {
                seen.erase(s[l++]);
            }
            seen.insert(s[r]);
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
```

**核心思路：** 滑动窗口 + 哈希集合：右指针扩展窗口，遇到重复字符时左指针收缩直到重复字符被移除。

**易错点：** 窗口大小动态变化；注意左指针收缩时 erase 的是 s[l] 而非 ch；ans 在每次插入后更新。

---

### 2. 找到字符串中所有字母异位词

[🔗 LeetCode 原题](https://leetcode.cn/problems/find-all-anagrams-in-a-string/) | 🟡 中等

**题目描述：** 给定两个字符串 s 和
p，找到 s 中所有 p 的 异位词 的子串，返回这些子串的起始索引。不考虑答案输出的顺序。
示例 1:
输入: s = "cbaebabacd", p = "abc"
输出: [0,6]
解释:
起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。
示例 2:
输入: s = "abab", p = "ab"
输出: [0,1,2]
解释:
起始索引等于 0 的子串是 "ab", 它是 "ab" 的异位词。
起始索引等于 1 的子串是 "ba", 它是 "ab" 的异位词。
起始索引等于 2 的子串是 "ab", 它是 "ab" 的异位词。
提示:
1 <= s.length, p.length <= 3 \* 10^4
s 和 p 仅包含小写字母

```cpp
class Solution {
  public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.size() > s.size()) {
            return ans;
        }
        vector<int> cnt_s(26), cnt_p(26);
        int l = 0, r = 0;
        while (r < p.size()) {
            cnt_s[s[r] - 'a']++;
            cnt_p[p[r++] - 'a']++;
        }
        if (cnt_s == cnt_p) {
            ans.push_back(0);
        }
        for (; r < s.size(); r++) {
            cnt_s[s[r] - 'a']++;
            cnt_s[s[l++] - 'a']--;
            if (cnt_s == cnt_p) {
                ans.push_back(l);
            }
        }
        return ans;
    }
};
```

**核心思路：** 固定窗口滑动 + 计数数组比较：维护 s 中长度为 p.size() 的窗口的字符计数，与 p 的计数比较。

**易错点：** vector 可直接比较相等（重载了 ==）；窗口滑动时先增后减。

---

## 子串

### 1. 和为 K 的子数组

[🔗 LeetCode 原题](https://leetcode.cn/problems/subarray-sum-equals-k/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums 和一个整数 k，请你统计并返回该数组中和为 k 的子数组的个数。子数组是数组中元素的连续非空序列。

```cpp
class Solution {
public:
    int subarraySum(vector<int> &nums, int k) {
        unordered_map<int, int> hash;
        int n = nums.size(), prefixSum = 0, ans = 0;
        hash[0] = 1;
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            ans += hash[prefixSum - k];
            hash[prefixSum]++;
        }
        return ans;
    }
};
```

**核心思路：** 前缀和 + 哈希表：hash[prefixSum] 记录前缀和出现的次数，遍历时 ans += hash[prefixSum - k]。

**易错点：** hash[0] = 1 的初始化很关键，代表空前缀；前缀和可能为负数，不能用滑动窗口。

---

### 2. 滑动窗口最大值

[🔗 LeetCode 原题](https://leetcode.cn/problems/sliding-window-maximum/) | 🔴 困难

**题目描述：** 给你一个整数数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 k 个数字。滑动窗口每次只向右移动一位。返回滑动窗口中的最大值。

```cpp
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> heap;
        for (int i = 0; i < k; i++) {
            heap.emplace(nums[i], i);
        }
        vector<int> ans;
        ans.push_back(heap.top().first);
        for (int i = k; i < nums.size(); i++) {
            heap.emplace(nums[i], i);
            while (heap.top().second <= i - k) {
                heap.pop();
            }
            ans.push_back(heap.top().first);
        }
        return ans;
    }
};
```

**核心思路：** 大顶堆存储 (值, 下标)，每次移动窗口后弹出堆顶直到堆顶下标在窗口范围内。也可用单调队列 O(n)。

**易错点：** 堆中可能堆积大量过期元素；判断堆顶是否在窗口内的条件是 top.second <= i - k。

---

### 3. 最小覆盖子串

[🔗 LeetCode 原题](https://leetcode.cn/problems/minimum-window-substring/) | 🔴 困难

**题目描述：** 给定两个字符串 s 和 t，长度分别是 m 和 n，返回 s 中的 最短窗口
子串，使得该子串包含 t
中的每一个字符（包括重复字符）。如果没有这样的子串，返回空字符串 ""。
测试用例保证答案唯一。
示例 1：
输入：s = "ADOBECODEBANC", t = "ABC"
输出："BANC"
解释：最小覆盖子串 "BANC" 包含来自字符串 t 的 'A'、'B' 和 'C'。
示例 2：
输入：s = "a", t = "a"
输出："a"
解释：整个字符串 s 是最小覆盖子串。
示例 3:
输入: s = "a", t = "aa"
输出: ""
解释: t 中两个字符 'a' 均应包含在 s 的子串中，
因此没有符合条件的子字符串，返回空字符串。
提示：
m == s.length
n == t.length
1 <= m, n <= 10^5
s 和 t 由英文字母组成
进阶：你能设计一个在 O(m + n) 时间内解决此问题的算法吗？

```cpp
class Solution {
  public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) {
            return "";
        }
        int m = s.size(), n = t.size();
        int cntS[128] = {0}, cntT[128] = {0};
        for (auto ch : t) {
            cntT[ch]++;
        }
        int cnt = 0, start = 0, minLen = INT_MAX;
        for (int l = 0, r = 0; r < m; r++) {
            char ch = s[r];
            if (cntT[ch] > 0 && ++cntS[ch] <= cntT[ch]) {
                cnt++;
            }
            if (cnt < n) {
                continue;
            }
            while (l <= r && cnt == n) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }
                ch = s[l];
                if (cntT[ch] > 0 && cntS[ch]-- <= cntT[ch]) {
                    cnt--;
                }
                l++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
```

**核心思路：** 滑动窗口 + 计数：右指针扩展直到覆盖所有 t 的字符，然后左指针收缩找最小窗口。cnt 记录已匹配的字符数。

**易错点：** cntS 和 cntT 用数组而非哈希表更高效；收缩时 cntS[ch]-- <= cntT[ch] 的条件判断是否失去有效覆盖。

---

## 普通数组

### 1. 最大子数组和

[🔗 LeetCode 原题](https://leetcode.cn/problems/maximum-subarray/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), ans = nums[0];
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        for (int i = 1; i < n; i++) {
            if (dp[i - 1] > 0) {
                dp[i] = dp[i - 1] + nums[i];
            } else {
                dp[i] = nums[i];
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
```

**核心思路：** 动态规划：dp[i] = max(dp[i-1] + nums[i], nums[i])，即以 i 结尾的最大子数组和。可优化为 O(1) 空间。

**易错点：** dp[i] 的定义是「以 i 结尾」而非「前 i 个」；ans 初始化为 nums[0] 而非 0（处理全负数）。

---

### 2. 合并区间

[🔗 LeetCode 原题](https://leetcode.cn/problems/merge-intervals/) | 🟡 中等

**题目描述：** 以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti,
endi]
。请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。
示例 1：
输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
输出：[[1,6],[8,10],[15,18]]
解释：区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
示例 2：
输入：intervals = [[1,4],[4,5]]
输出：[[1,5]]
解释：区间 [1,4] 和 [4,5] 可被视为重叠区间。
示例 3：
输入：intervals = [[4,7],[1,4]]
输出：[[1,7]]
解释：区间 [1,4] 和 [4,7] 可被视为重叠区间。
提示：
1 <= intervals.length <= 10^4
intervals[i].length == 2
0 <= starti <= endi <= 10^4

```cpp
class Solution {
  public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        if (intervals.size() <= 1) {
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans;
        int left = intervals[0][0], right = intervals[0][1];
        for (int i = 1; i < n; i++) {
            if (right >= intervals[i][0]) {
                right = max(right, intervals[i][1]);
                continue;
            }
            ans.push_back({left, right});
            left = intervals[i][0];
            right = intervals[i][1];
        }
        ans.push_back({left, right});
        return ans;
    }
};
```

**核心思路：** 按左端点排序后遍历，用 left/right 记录当前合并区间，遇到重叠则扩展 right，否则输出。

**易错点：** 排序后区间左端点有序；重叠条件是 right >= intervals[i][0]；最后需要把最后一个区间加入结果。

---

### 3. 轮转数组

[🔗 LeetCode 原题](https://leetcode.cn/problems/rotate-array/) | 🟡 中等

**题目描述：** 给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int t = nums.size() - (k % nums.size());
        reverse(nums.begin(), nums.begin() + t);
        reverse(nums.begin() + t, nums.end());
        reverse(nums.begin(), nums.end());
    }
};
```

**核心思路：** 三次反转：反转前 n-k 个，反转后 k 个，再整体反转。k %= n 处理 k > n 的情况。

**易错点：** k 可能大于 n，需要取模；三次反转的顺序要注意。

---

### 4. 除自身以外数组的乘积

[🔗 LeetCode 原题](https://leetcode.cn/problems/product-of-array-except-self/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums，返回数组 answer，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。不要使用除法，且在 O(n) 时间复杂度内完成。

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cntZero = 0, prod = 1, n = nums.size();
        for (auto x : nums) {
            if (x == 0) {
                cntZero++;
            } else {
                prod *= x;
            }
        }
        for (int i = 0; i < n; i++) {
            if (cntZero > 1) {
                nums[i] = 0;
                continue;
            }
            if (cntZero == 1) {
                nums[i] = (nums[i] == 0) ? prod : 0;
            } else {
                nums[i] = prod / nums[i];
            }
        }
        return nums;
    }
};
```

**核心思路：** 统计零的个数：0 个零用总乘积除以自身；1 个零只有该位置为非零；超过 1 个零全为零。

**易错点：** 除零问题；进阶要求不用除法，可用左右乘积列表。

---

### 5. 缺失的第一个正数

[🔗 LeetCode 原题](https://leetcode.cn/problems/first-missing-positive/) | 🔴 困难

**题目描述：** 给你一个未排序的整数数组 nums，请你找出其中没有出现的最小的正整数。请你实现时间复杂度为 O(n) 并且只使用常数级别额外空间的解决方案。

```cpp
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            while (nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                int t = nums[nums[i] - 1];
                nums[nums[i] - 1] = nums[i];
                nums[i] = t;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
};
```

**核心思路：** 原地哈希：将 nums[i] 放到 nums[nums[i]-1] 的位置（当 1 <= nums[i] <= n 时），然后遍历找第一个 nums[i] != i+1。

**易错点：** while 循环而非 if，因为交换后新换来的数可能也需要归位；时间复杂度 O(n)，每个数最多被交换一次。

---

## 矩阵

### 1. 矩阵置零

[🔗 LeetCode 原题](https://leetcode.cn/problems/set-matrix-zeroes/) | 🟡 中等

**题目描述：** 给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。

```cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool hasZeroRow = false, hasZeroCol = false;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = matrix[0][j] = 0;
                    if (i == 0) hasZeroRow = true;
                    if (j == 0) hasZeroCol = true;
                }
            }
        }
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (i == 0) {
                    if (hasZeroRow) matrix[i][j] = 0;
                } else if (j == 0) {
                    if (hasZeroCol) matrix[i][j] = 0;
                } else if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
```

**核心思路：** 用第一行和第一列作为标记，但需要用两个额外变量记录第一行/列本身是否原本有零。

**易错点：** 遍历顺序有讲究：标记时正序，清零时逆序（避免覆盖标记）；第一行/列需要特殊处理。

---

### 2. 螺旋矩阵

[🔗 LeetCode 原题](https://leetcode.cn/problems/spiral-matrix/) | 🟡 中等

**题目描述：** 给你一个 m 行 n 列的矩阵 matrix，请按照顺时针螺旋顺序，返回矩阵中的所有元素。

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), d = 0;
        int border[] = {n - 1, m - 1, 0, 1}, num = m * n;
        int x = 0, y = -1, i = 0;
        vector<int> ans(num);
        while (i < num) {
            if (d == 0 && ++y == border[d]) { border[d]--; d = 1; }
            else if (d == 1 && ++x == border[d]) { border[d]--; d = 2; }
            else if (d == 2 && --y == border[d]) { border[d]++; d = 3; }
            else if (d == 3 && --x == border[d]) { border[d]++; d = 0; }
            ans[i++] = matrix[x][y];
        }
        return ans;
    }
};
```

**核心思路：** 用四个边界变量控制螺旋方向，每走完一个方向收缩对应边界。d 表示当前方向（0 右 1 下 2 左 3 上）。

**易错点：** 边界收缩的时机：走到边界时收缩；方向切换逻辑要清晰；while 循环条件是已收集元素数 < 总数。

---

### 3. 旋转图像

[🔗 LeetCode 原题](https://leetcode.cn/problems/rotate-image/) | 🟡 中等

**题目描述：** 给定一个 n × n 的二维矩阵 matrix 表示一个图像。请你将图像顺时针旋转 90 度。你必须在原地旋转图像。

```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
```

**核心思路：** 先转置（对角线翻转），再每行反转。原地操作，顺时针 90° = 转置 + 水平翻转。

**易错点：** 转置只需遍历上三角（j = i+1）；逆时针 90° 是转置 + 垂直翻转。

---

### 4. 搜索二维矩阵 II

[🔗 LeetCode 原题](https://leetcode.cn/problems/search-a-2d-matrix-ii/) | 🟡 中等

**题目描述：** 编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target。每行的元素从左到右升序排列，每列的元素从上到下升序排列。

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int x = 0, y = n - 1;
        while (x < m && y >= 0) {
            if (matrix[x][y] == target) return true;
            if (target < matrix[x][y]) y--;
            else x++;
        }
        return false;
    }
};
```

**核心思路：** 从右上角开始搜索：如果 target < 当前值，左移；如果 target > 当前值，下移。类似二叉搜索树的搜索。

**易错点：** 从右上角或左下角开始都可以；不能从左上角开始；时间复杂度 O(m+n)。

---

## 链表

### 1. 相交链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/intersection-of-two-linked-lists/) | 🟢 简单

**题目描述：** 给你两个单链表的头节点 headA 和 headB，请你找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 null。

```cpp
class Solution {
  public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA, *q = headB;
        while (p != q) {
            p = p ? p->next : headB;
            q = q ? q->next : headA;
        }
        return p;
    }
};
```

**核心思路：** 双指针分别从 A 和 B 出发，走到末尾后切换到另一条链表的头部。两指针相遇时即为交点（或都为 null）。

**易错点：** 核心是消除长度差：pA 走 A+B，pB 走 B+A，路径长度相同；即使没有交点也会在 null 处相遇。

---

### 2. 反转链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/reverse-linked-list/) | 🟢 简单

**题目描述：** 给你单链表的头节点 head，请你反转链表，并返回反转后的链表。

```cpp
class Solution {
  public:
    ListNode *reverseList(ListNode *head) {
        ListNode *pre = nullptr, *p = head;
        while (p != nullptr) {
            ListNode *q = p;
            p = p->next;
            q->next = pre;
            pre = q;
        }
        return pre;
    }
};
```

**核心思路：** 迭代：pre 指向已反转部分，p 指向当前节点，每次将 p 的 next 指向 pre 然后前进。

**易错点：** 需要保存 p->next 再修改指针；循环结束时 pre 是新头节点。

---

### 3. 回文链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/palindrome-linked-list/) | 🟢 简单

**题目描述：** 给你一个单链表的头节点 head，请你判断该链表是否为回文链表。如果是，返回 true；否则，返回 false。

```cpp
class Solution {
  public:
    ListNode *reverseList(ListNode *head) {
        ListNode *pre = nullptr, *p = head;
        while (p != nullptr) {
            ListNode *q = p;
            p = p->next;
            q->next = pre;
            pre = q;
        }
        return pre;
    }

    bool isPalindrome(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode *slow = head, *fast = head;
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
            if (fast != nullptr) {
                fast = fast->next;
            }
        }
        ListNode *p = head, *q = reverseList(slow);
        while (q != nullptr) {
            if (p->val != q->val) {
                return false;
            }
            p = p->next;
            q = q->next;
        }
        return true;
    }
};
```

**核心思路：** 快慢指针找中点 + 反转后半部分 + 逐节点比较。O(n) 时间，O(1) 空间。

**易错点：** 找中点时注意奇偶长度；比较完后可以恢复链表（可选）。

---

### 4. 环形链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/linked-list-cycle/) | 🟢 简单

**题目描述：** 给你一个链表的头节点 head，判断链表中是否有环。

```cpp
class Solution {
  public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode *slow = head, *fast = head->next;
        while (fast != nullptr) {
            if (slow == fast) {
                return true;
            }
            slow = slow->next;
            fast = fast->next;
            if (fast != nullptr) {
                fast = fast->next;
            }
        }
        return false;
    }
};
```

**核心思路：** 快慢指针：slow 走一步，fast 走两步。如果有环，快慢指针必定相遇。

**易错点：** fast 初始为 head->next 可以简化判断；也可以初始都为 head，但循环条件要调整。

---

### 5. 环形链表 II

[🔗 LeetCode 原题](https://leetcode.cn/problems/linked-list-cycle-ii/) | 🟡 中等

**题目描述：** 给定一个链表的头节点 head，返回链表开始入环的第一个节点。如果链表无环，则返回 null。

```cpp
class Solution {
  public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode *slow = head, *fast = head;
        while (fast != nullptr) {
            slow = slow->next;
            if (fast->next == nullptr) {
                return nullptr;
            }
            fast = fast->next->next;
            if (slow == fast) {
                ListNode *p = head;
                while (p != slow) {
                    p = p->next;
                    slow = slow->next;
                }
                return p;
            }
        }
        return nullptr;
    }
};
```

**核心思路：** 快慢指针找相遇点，然后一个从头、一个从相遇点同步走，相遇处即为环入口。

**易错点：** 数学推导：头到环入口 = 相遇点到环入口；需要先判断无环的情况。

---

### 6. 合并两个有序链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/merge-two-sorted-lists/) | 🟢 简单

**题目描述：** 将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

```cpp
class Solution {
  public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (list1 == nullptr || list2 == nullptr) {
            return list1 == nullptr ? list2 : list1;
        }
        ListNode *dummyHead = new ListNode(), *r = dummyHead;
        ListNode *p = list1, *q = list2;
        while (p != nullptr && q != nullptr) {
            if (p->val <= q->val) {
                r->next = p;
                p = p->next;
            } else {
                r->next = q;
                q = q->next;
            }
            r = r->next;
        }
        r->next = p ? p : q;
        return dummyHead->next;
    }
};
```

**核心思路：** 双指针遍历两个链表，每次取较小节点接到结果链表尾部。使用虚拟头节点简化操作。

**易错点：** 最后需要把剩余的链表直接接上；虚拟头节点避免空链表判断。

---

### 7. 两数相加

[🔗 LeetCode 原题](https://leetcode.cn/problems/add-two-numbers/) | 🟡 中等

**题目描述：** 给你两个非空的链表，表示两个非负的整数。它们每位数字都是按照逆序的方式存储的，并且每个节点只能存储一位数字。请你将两个数相加，并以相同形式返回一个表示和的链表。

```cpp
class Solution {
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if (!l1 || !l2) {
            return l1 ? l1 : l2;
        }
        ListNode *p = l1, *q = l2;
        int carry = 0, sum = 0;
        ListNode *dummyHead = new ListNode(), *r = dummyHead;
        while (p || q) {
            if (p && q) {
                sum = p->val + q->val + carry;
                p = p->next;
                q = q->next;
            } else if (p) {
                sum = p->val + carry;
                p = p->next;
            } else {
                sum = q->val + carry;
                q = q->next;
            }
            ListNode *node = new ListNode(sum % 10);
            r->next = node;
            r = node;
            carry = sum / 10;
        }
        if (carry) {
            r->next = new ListNode(carry);
        }
        return dummyHead->next;
    }
};
```

**核心思路：** 模拟加法：同时遍历两个链表，逐位相加，维护进位 carry。注意链表可能不等长。

**易错点：** 链表是逆序存储的（从低位到高位），所以直接从头加即可；最后可能还有进位需要新建节点。

---

### 8. 删除链表的倒数第 N 个结点

[🔗 LeetCode 原题](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/) | 🟡 中等

**题目描述：** 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

```cpp
class Solution {
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if (head == nullptr || n <= 0) {
            return nullptr;
        }
        ListNode *fast = head;
        for (int i = 0; i < n && fast != nullptr; i++) {
            fast = fast->next;
        }
        if (fast == nullptr) {
            /*
            p 为空说明删除的是倒数第 n
            个节点（也就是第一个节点），也可能是删除了倒数第 n + m (m > 0)
            个节点
            */
            return head->next;
        }
        ListNode *slow = head;
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
```

**核心思路：** 快慢指针：fast 先走 n 步，然后 fast 和 slow 一起走，fast 到末尾时 slow 指向倒数第 n 个节点的前驱。

**易错点：** 删除的是头节点时（fast 先走 n 步后为 null），直接返回 head->next。

---

### 9. 两两交换链表中的节点

[🔗 LeetCode 原题](https://leetcode.cn/problems/swap-nodes-in-pairs/) | 🟡 中等

**题目描述：** 给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题。

```cpp
class Solution {
  public:
    ListNode *swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *p = head, *q = head->next;
        p->next = swapPairs(q->next);
        q->next = p;
        return q;
    }
};
```

**核心思路：** 递归：交换前两个节点，递归处理剩余链表。head->next = swapPairs(head->next->next)。

**易错点：** 递归写法简洁；迭代写法需要维护前驱指针。

---

### 10. K 个一组翻转链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/reverse-nodes-in-k-group/) | 🔴 困难

**题目描述：** 给你链表的头节点 head，每 k 个节点一组进行翻转，请你返回修改后的链表。k 是一个正整数，它的值小于或等于链表的长度。如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序。

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        if (head == nullptr || head->next == nullptr || k <= 1) {
            return nullptr;
        }
        int len = 0;
        for (ListNode *p = head; p != nullptr; p = p->next) {
            len++;
        }
        if (len < k) {
            return head;
        }
        ListNode *dummyHead = new ListNode(0, head), *pre = dummyHead;
        for (int i = len / k; i >= 1; i--) {
            ListNode *tail = pre->next;
            for (int j = 1; j < k; j++) {
                ListNode *p = tail->next;
                tail->next = p->next;
                p->next = pre->next;
                pre->next = p;
            }
            pre = tail;
        }
        return dummyHead->next;
    }
};
```

**核心思路：** 先计算链表长度，然后每 k 个一组进行头插法翻转。pre 指向每组前驱，tail 指向每组翻转后的尾节点。

**易错点：** 不足 k 个的部分不翻转；头插法需要仔细处理指针。

---

### 11. 随机链表的复制

[🔗 LeetCode 原题](https://leetcode.cn/problems/copy-list-with-random-pointer/) | 🟡 中等

**题目描述：** 给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random，该指针可以指向链表中的任何节点或空节点。构造这个链表的深拷贝。

```cpp
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        Node *dummyHead = new Node(0), *r = dummyHead;
        for (Node* p = head; p != nullptr; p = p->next) {
            Node* node = new Node(p->val);
            mp[p] = node;
            r->next = node;
            r = r->next;
        }
        for (Node *p = head, *q = dummyHead->next; p != nullptr;
             p = p->next, q = q->next) {
            if (p->random == nullptr) {
                q->random = nullptr;
                continue;
            }
            q->random = mp[p->random];
        }
        return dummyHead->next;
    }
};
```

**核心思路：** 哈希表映射原节点 → 新节点：第一遍创建新节点并建立映射，第二遍设置 random 指针。

**易错点：** 也可用 O(1) 空间：将新节点插入原节点后面，设置 random 后再拆分。

---

### 12. 排序链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/sort-list/) | 🟡 中等

**题目描述：** 给你链表的头结点 head ，请将其按升序排列并返回排序后的链表。要求时间复杂度 O(n log n)。

```cpp
class Solution {
  public:
    ListNode *sortList(ListNode *head) {
        if (!head || !head->next) {
            return head;
        }
        // 快慢指针找中点，断开成两半
        // 注意这里 fast 不能从 head
        // 开始，而是从下一个开始（可以思考只有两个节点时的情况）
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow->next;
        slow->next = nullptr; // 断开两个链表
        return merge(sortList(head), sortList(mid));
    }
    ListNode *merge(ListNode *a, ListNode *b) {
        ListNode *dummyHead = new ListNode(), *p = dummyHead;
        while (a && b) {
            if (a->val < b->val) {
                p->next = a;
                a = a->next;
            } else {
                p->next = b;
                b = b->next;
            }
            p = p->next;
        }
        p->next = a ? a : b;
        return dummyHead->next;
    }
};
```

**时空复杂度：** 时间 O(n log n)，空间 O(log n)（递归栈）

**核心考点：** 链表、双指针、分治、排序、归并排序

**核心思路：** 链表归并排序：快慢指针找中点，断开后分别递归排序左右两半，最后合并两个有序链表。合并使用虚拟头节点简化边界处理。

**易错点：** 快慢指针初始 `fast = head->next` 才能让 slow 停在左半末尾；断开时先递归右半再断开（`slow->next = nullptr`），避免丢失右半引用；注意空链表与单节点边界。

---

### 13. 合并 K 个升序链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/merge-k-sorted-lists/) | 🔴 困难

**题目描述：** 给你一个链表数组，每个链表都已经按升序排列。请你将所有链表合并到一个升序链表中，返回合并后的链表。

```cpp
class Solution {
  public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        int n = lists.size();
        ListNode *dummyHead = new ListNode(), *r = dummyHead;
        auto cmp = [](ListNode *a, ListNode *b) { return a->val > b->val; };
        priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> minHeap(
            cmp);
        for (int i = 0; i < n; i++) {
            minHeap.push(lists[i]);
            lists[i] = lists[i]->next;
        }
        while (!minHeap.empty()) {
            ListNode *top = minHeap.top();
            minHeap.pop();
            r->next = top;
            r = r->next;
            if (top->next != nullptr) {
                minHeap.push(top->next);
            }
        }
        return dummyHead->next;
    }
};
```

**核心思路：** 用小顶堆（优先队列）维护每个链表的当前头节点，每次弹出最小值并加入其下一个节点。

**易错点：** 堆中元素为 ListNode\*，需要自定义比较函数（按 val 升序）；注意空链表不要入堆。

---

### 14. LRU 缓存

[🔗 LeetCode 原题](https://leetcode.cn/problems/lru-cache/) | 🟡 中等

**题目描述：** 请你设计并实现一个满足 LRU (最近最少使用) 缓存约束的数据结构。实现 LRUCache 类。

```cpp
class LRUCache {
private:
    struct Node {
        Node *left, *right;
        int key, val;
        Node() {}
        Node(int key, int val) : key(key), val(val) {}
    };
    Node *head, *tail;
    int size = 0, capacity;
    unordered_map<int, Node*> hash;

    void insertHead(Node* node) {
        node->right = head->right;
        head->right->left = node;
        node->left = head;
        head->right = node;
        size++;
        hash[node->key] = node;
    }
    Node* removeNode(Node* node) {
        node->left->right = node->right;
        node->right->left = node->left;
        size--;
        hash.erase(node->key);
        return node;
    }
public:
    LRUCache(int capacity) {
        head = new Node(); tail = new Node();
        head->right = tail; tail->left = head;
        this->capacity = capacity;
    }
    int get(int key) {
        Node* node = hash[key];
        if (!node) return -1;
        removeNode(node);
        insertHead(node);
        return node->val;
    }
    void put(int key, int value) {
        Node* node = hash[key];
        if (!node) {
            if (size == capacity) {
                Node* last = tail->left;
                removeNode(last);
                delete last;
            }
            node = new Node(key, value);
            insertHead(node);
            return;
        }
        removeNode(node);
        node->val = value;
        insertHead(node);
    }
};
```

**核心思路：** 双向链表 + 哈希表：链表维护访问顺序（最近使用的在头部），哈希表实现 O(1) 查找。get 和 put 都需要将访问节点移到头部。

**易错点：** put 时如果 key 已存在，需要更新值并移到头部（不是新建）；容量满时删除尾部节点；注意删除时要同时从哈希表中移除。

---

## 二叉树

### 1. 二叉树的中序遍历

[🔗 LeetCode 原题](https://leetcode.cn/problems/binary-tree-inorder-traversal/) | 🟢 简单

**题目描述：** 给定一个二叉树的根节点 root，返回它的中序遍历。

```cpp
class Solution {
public:
    vector<int> ans;
    void inorder(TreeNode* root) {
        if (root != nullptr) {
            inorder(root->left);
            ans.push_back(root->val);
            inorder(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
```

**核心思路：** 递归：左 → 根 → 右。迭代：用栈模拟，先一路向左入栈，弹出访问，再转向右子树。

**易错点：** 递归写法更简单；迭代需要理解栈的使用。

---

### 2. 二叉树的最大深度

[🔗 LeetCode 原题](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) | 🟢 简单

**题目描述：** 给定一个二叉树 root，返回其最大深度。二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

```cpp
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
```

**核心思路：** 递归：maxDepth(root) = max(maxDepth(left), maxDepth(right)) + 1。空节点返回 0。

**易错点：** BFS 层序遍历也可；递归的终止条件是 root == nullptr。

---

### 3. 翻转二叉树

[🔗 LeetCode 原题](https://leetcode.cn/problems/invert-binary-tree/) | 🟢 简单

**题目描述：** 给你一棵二叉树的根节点 root，翻转这棵二叉树，并返回其根节点。

```cpp
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr ||
            (root->left == nullptr && root->right == nullptr)) {
            return root;
        }
        TreeNode* left = root->left;
        root->left = root->right;
        root->right = left;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
```

**核心思路：** 递归：交换左右子树，然后递归翻转左右子树。

**易错点：** 先交换再递归或先递归再交换都可以；注意空节点和叶子节点的处理。

---

### 4. 对称二叉树

[🔗 LeetCode 原题](https://leetcode.cn/problems/symmetric-tree/) | 🟢 简单

**题目描述：** 给你一个二叉树的根节点 root，检查它是否轴对称。

```cpp
class Solution {
public:
    bool isSymmetric(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr && root2 == nullptr) return true;
        if (root1 == nullptr || root2 == nullptr || root1->val != root2->val)
            return false;
        return isSymmetric(root1->left, root2->right) &&
               isSymmetric(root1->right, root2->left);
    }
    bool isSymmetric(TreeNode* root) { return isSymmetric(root, root); }
};
```

**核心思路：** 递归比较左右子树：左子树的左 vs 右子树的右，左子树的右 vs 右子树的左。

**易错点：** 镜像对称的判断条件：两个节点值相等且子树交叉对称。

---

### 5. 二叉树的直径

[🔗 LeetCode 原题](https://leetcode.cn/problems/diameter-of-binary-tree/) | 🟢 简单

**题目描述：** 给你一棵二叉树的根节点，返回该树的直径。二叉树的直径是指树中任意两个节点之间最长路径的长度。这条路径可能经过也可能不经过根节点 root。

```cpp
class Solution {
public:
    int ans = 0;
    int getHeight(TreeNode* root) {
        if (root == nullptr) return 0;
        int leftH = getHeight(root->left);
        int rightH = getHeight(root->right);
        ans = max(ans, leftH + rightH);
        return max(leftH, rightH) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;
        getHeight(root);
        return ans;
    }
};
```

**核心思路：** 后序遍历求每个节点的左右子树高度，直径 = 左高 + 右高，全局更新最大值。

**易错点：** 直径是边数而非节点数；路径不一定经过根节点。

---

### 6. 二叉树的层序遍历

[🔗 LeetCode 原题](https://leetcode.cn/problems/binary-tree-level-order-traversal/) | 🟡 中等

> 本题用户已 AC（Java），此处给出等价 C++ 实现。

**题目描述：** 给你二叉树的根节点 root ，返回其节点值的层序遍历（即逐层地，从左到右访问所有节点）。

```cpp
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> level;
            // 一次处理当前层全部节点
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front(); q.pop();
                level.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.push_back(level);
        }
        return res;
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(n)

**核心考点：** 树、广度优先搜索、二叉树

**核心思路：** BFS 按层遍历：每轮用队列当前 size 固定本层节点数。

**易错点：** 忘记用 size 定层会导致无法分层；空树直接返回空数组。

---

### 7. 将有序数组转换为二叉搜索树

[🔗 LeetCode 原题](https://leetcode.cn/problems/convert-sorted-array-to-binary-search-tree/) | 🟢 简单

**题目描述：** 给你一个整数数组 nums，其中元素已经按升序排列，请你将其转换为一棵平衡二叉搜索树。

```cpp
class Solution {
public:
    TreeNode* dfs(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;
        if (left == right) return new TreeNode(nums[left]);
        int mid = (left + right) >> 1;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = dfs(nums, left, mid - 1);
        root->right = dfs(nums, mid + 1, right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(nums, 0, nums.size() - 1);
    }
};
```

**核心思路：** 递归：取数组中间元素作为根节点，左半部分递归构建左子树，右半部分递归构建右子树。

**易错点：** 二分取中点保证平衡；mid = (left + right) >> 1。

---

### 8. 验证二叉搜索树

[🔗 LeetCode 原题](https://leetcode.cn/problems/validate-binary-search-tree/) | 🟡 中等

**题目描述：** 给你一个二叉树的根节点 root，判断其是否是一个有效的二叉搜索树。

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
   public:
    bool solve(TreeNode* root, long low, long high) {
        if (root == NULL) return true;
        if (root->val <= low || root->val >= high) return false;
        return solve(root->left, low, root->val) &&
               solve(root->right, root->val, high);
    }
    bool isValidBST(TreeNode* root) { return solve(root, LONG_MIN, LONG_MAX); }
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* p = root;
        long preValue = LONG_MIN;
        while (!s.empty() || p != NULL) {
            for (; p != NULL; p = p->left) s.push(p);
            p = s.top();
            s.pop();
            if (p->val <= preValue) return false;
            preValue = p->val;
            p = p->right;
        }
        return true;
    }

    bool isValidBST(TreeNode* root) {
        if (root == NULL) return true;
        TreeNode* p = root->left;
        if (p) {
            while (p->right) p = p->right;
            if (root->val <= p->val) return false;
        }
        p = root->right;
        if (p) {
            while (p->left) p = p->left;
            if (root->val >= p->val) return false;
        }
        return isValidBST(root->left) && isValidBST(root->right);
    }
};
```

**核心思路：** 递归传递上下界：左子树所有节点值必须 < root->val，右子树所有节点值必须 > root->val。

**易错点：** 不能只比较当前节点和左右子节点，必须传递上下界；注意用 long long 避免 INT_MIN/INT_MAX 边界问题。

---

### 9. 二叉搜索树中第 K 小的元素

[🔗 LeetCode 原题](https://leetcode.cn/problems/kth-smallest-element-in-a-bst/) | 🟡 中等

**题目描述：** 给定一个二叉搜索树的根节点 root，和一个整数 k，请你设计一个算法查找其中第 k 小的元素（从 1 开始计数）。

```cpp
class Solution {
  public:
    int kthSmallest(TreeNode *root, int k) {
        stack<TreeNode *> st;
        TreeNode *p = root;
        while (!st.empty() || p) {
            if (p) {
                st.push(p);
                p = p->left;
            } else {
                if (--k == 0) {
                    return st.top()->val;
                }
                p = st.top()->right;
                st.pop();
            }
        }
        return -1;
    }
};
```

**核心思路：** BST 的中序遍历是递增序列，遍历到第 k 个节点即可。用栈实现迭代中序遍历。

**易错点：** 迭代中序遍历：向左走到底，弹出访问计数，转向右子树。

---

### 10. 二叉树的右视图

[🔗 LeetCode 原题](https://leetcode.cn/problems/binary-tree-right-side-view/) | 🟡 中等

**题目描述：** 给定一个二叉树的根节点 root，想象自己站在它的右侧，按照从顶部到底部的顺序，返回从右侧所能看到的节点值。

```cpp
class Solution {
public:
    vector<int> ans;
    void dfs(TreeNode* root, int depth) {
        if (root == nullptr) return;
        if (ans.size() <= depth) {
            ans.push_back(root->val);
        } else {
            ans[depth] = root->val;
        }
        dfs(root->left, depth + 1);
        dfs(root->right, depth + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};
```

**核心思路：** DFS 先访问右子树再访问左子树，记录每层第一个访问的节点（即最右节点）。

**易错点：** DFS 先右后左，每层只记录第一个节点；BFS 层序遍历也可。

---

### 11. 二叉树展开为链表

[🔗 LeetCode 原题](https://leetcode.cn/problems/flatten-binary-tree-to-linked-list/) | 🟡 中等

**题目描述：** 给你二叉树的根结点 root，请你将它展开为一个单链表：展开后的单链表应该同样使用 TreeNode，其中 right 子指针指向链表中下一个结点，而左子指针始终为 null。展开后的单链表应该与二叉树先序遍历顺序相同。

```cpp
class Solution {
  public:
    void flatten(TreeNode *root) {
        if (root == nullptr) {
            return;
        }
        TreeNode *head = new TreeNode(), *r = head;
        stack<TreeNode *> st;
        TreeNode *p = root;
        while (p != nullptr || !st.empty()) {
            if (p != nullptr) {
                st.push(p);
                r->right = p;
                p = p->left;
                if (r->right != nullptr) {
                    r->right->left = nullptr;
                }
            } else {
                TreeNode *q = st.top();
                p = q->right;
            }
        }
    }
};
```

**核心思路：** 前序遍历 + 重建指针：用栈实现前序遍历，同时维护一个尾指针，将遍历到的节点接到尾指针的 right 上。

**易错点：** 展开后左指针必须置为 null；需要保存右子树再修改指针。

---

### 12. 从前序与中序遍历序列构造二叉树

[🔗 LeetCode 原题](https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | 🟡 中等

**题目描述：** 给定两个整数数组 preorder 和 inorder，其中 preorder 是二叉树的先序遍历，inorder 是同一棵树的中序遍历，请构造二叉树并返回其根节点。

```cpp
class Solution {
private:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder,
                        int prel, int prer, int inl, int inr) {
        if (prel > prer) return nullptr;
        TreeNode* root = new TreeNode(preorder[prel]);
        int k = inl;
        while (k < inr && inorder[k] != preorder[prel]) k++;
        int numLeft = k - inl;
        root->left = buildTree(preorder, inorder, prel + 1, prel + numLeft, inl, k - 1);
        root->right = buildTree(preorder, inorder, prel + numLeft + 1, prer, k + 1, inr);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return buildTree(preorder, inorder, 0, n - 1, 0, n - 1);
    }
};
```

**核心思路：** 前序遍历的第一个元素是根节点，在中序遍历中找到根节点位置，左边是左子树，右边是右子树。递归构建。

**易错点：** 在 inorder 中找根节点可用哈希表 O(1) 查找；注意数组索引的计算。

---

### 13. 路径总和 III

[🔗 LeetCode 原题](https://leetcode.cn/problems/path-sum-iii/) | 🟡 中等

**题目描述：** 给定一个二叉树的根节点 root，和一个整数 targetSum，求该二叉树里节点值之和等于 targetSum 的路径的数目。路径不需要从根节点开始，也不需要在叶子节点结束，但是路径方向必须是向下的（只能从父节点到子节点）。

```cpp
class Solution {
private:
    int dfs(TreeNode* root, long long sum) {
        if (root == nullptr) return 0;
        long long tmp = sum - root->val;
        int left = dfs(root->left, tmp);
        int right = dfs(root->right, tmp);
        return left + right + (tmp == 0 ? 1 : 0);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;
        return dfs(root, targetSum) + pathSum(root->left, targetSum) +
               pathSum(root->right, targetSum);
    }
};
```

**核心思路：** 双重递归：外层递归遍历每个节点作为起点，内层递归从该起点向下搜索路径和等于 targetSum 的路径。

**易错点：** 路径必须向下（父子关系）；可用前缀和 + 哈希表优化到 O(n)。

---

### 14. 二叉树的最近公共祖先

[🔗 LeetCode 原题](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-tree/) | 🟡 中等

**题目描述：** 给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。

```cpp
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q) {
            return root;
        }
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        // 如果左右子树都找到了 p 或 q 说明 p 和 q 分别位于 root 的左右子树
        // 说明当前 root 就是 p 和 q 的最近公共祖先
        if (left != nullptr && right != nullptr) {
            return root;
        }
        return left == nullptr ? right : left;
    }
};
```

**核心思路：** 后序遍历：如果左右子树分别包含 p 和 q，或当前节点是 p/q 且子树包含另一个，则当前节点是 LCA。

**易错点：** 返回 bool 或返回节点指针都可以；关键是理解「最近公共祖先」的定义。

---

### 15. 二叉树中的最大路径和

[🔗 LeetCode 原题](https://leetcode.cn/problems/binary-tree-maximum-path-sum/) | 🔴 困难

**题目描述：** 二叉树中的路径被定义为一条节点序列，序列中每对相邻节点之间都存在一条边。同一个节点在一条路径序列中至多出现一次。该路径至少包含一个节点，且不一定经过根节点。路径和是路径中各节点值的总和。给你一个二叉树的根节点 root，返回其最大路径和。

```cpp
class Solution {
public:
    int ans = INT_MIN;
    /*
        把 dfs 递归构建为单边的最大路径和，在递归的过程中去计算以结点为根的双边最大路径和。
        注意负数贡献应取 0，如果单侧提供的最大路径值为负数，应该丢弃。
    */
    int dfs(TreeNode* root) {
        if (!root) return 0;
        int left = max(dfs(root->left), 0);
        int right = max(dfs(root->right), 0);
        ans = max(ans, root->val + left + right);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
```

**核心思路：** 后序遍历求每个节点向下延伸的最大路径和，同时更新全局最大值（左 + 根 + 右）。注意负数贡献应取 0。

**易错点：** max(dfs(root->left), 0) 是关键——负数路径不选；答案初始化为 INT_MIN。

---

## 图论

### 1. 岛屿数量

[🔗 LeetCode 原题](https://leetcode.cn/problems/number-of-islands/) | 🟡 中等

**题目描述：** 给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。岛屿总是被水包围，并且每座岛屿只能由水平方向和/或竖直方向上相邻的陆地连接形成。

```cpp
class Solution {
  public:
    vector<vector<bool>> vis;
    int m, n;
    bool isValid(int x, int y) { return x >= 0 && x < m && y >= 0 && y < n; }
    void dfs(vector<vector<char>> &grid, int x, int y) {
        if (!isValid(x, y) || vis[x][y] || grid[x][y] == '0') {
            return;
        }
        vis[x][y] = true;
        dfs(grid, x + 1, y);
        dfs(grid, x - 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x, y - 1);
    }
    int numIslands(vector<vector<char>> &grid) {
        if (grid.empty()) {
            return 0;
        }
        m = grid.size();
        n = grid[0].size();
        vis.resize(m, vector<bool>(n));

        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    dfs(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
```

**核心思路：** DFS 遍历网格：用 `vector<vector<bool>> vis` 标记已访问的陆地，遇到未访问的 '1' 就启动 DFS 将相连陆地全部标记，岛屿计数 +1。vis 在 `numIslands` 中动态 `resize` 适配网格大小。

**易错点：** DFS 可能导致栈溢出（岛屿很大时），可用 BFS 或并查集；`vis` 必须在遍历前 resize 否则访问越界；注意 `isValid` 边界检查的四个条件。

---

### 2. 腐烂的橘子

[🔗 LeetCode 原题](https://leetcode.cn/problems/rotting-oranges/) | 🟡 中等

**题目描述：** 在给定的 m x n 网格 grid 中，每个单元格可以有以下三个值之一：值 0 代表空单元格；值 1 代表新鲜橘子；值 2 代表腐烂的橘子。每分钟，腐烂的橘子周围 4 个方向上相邻的新鲜橘子都会腐烂。返回直到单元格中没有新鲜橘子为止所必须经过的最小分钟数。如果不可能，返回 -1。

```cpp
class Solution {
  public:
    int orangesRotting(vector<vector<int>> &grid) {
        if (grid.empty()) {
            return 0;
        }
        queue<pair<int, int>> q;
        int m = grid.size(), n = grid[0].size();
        int freshCnt = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    freshCnt++;
                } else if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        if (freshCnt == 0) {
            return 0;
        }
        int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        int step = 0;
        while (!q.empty() && freshCnt != 0) {
            int k = q.size();
            for (int i = 0; i < k; i++) {
                auto [x, y] = q.front();
                q.pop();
                for (int j = 0; j < 4; j++) {
                    int newX = x + d[j][0];
                    int newY = y + d[j][1];
                    if (newX >= 0 && newX < m && newY >= 0 && newY < n &&
                        grid[newX][newY] == 1) {
                        freshCnt--;
                        grid[newX][newY] = 2;
                        q.push({newX, newY});
                    }
                }
            }
            step++;
        }
        return freshCnt <= 0 ? step : -1;
    }
};
```

**核心思路：** BFS 层序遍历：先将所有腐烂橘子（值为 2）入队，统计新鲜橘子数量。每轮 BFS 处理当前队列中所有腐烂橘子，向四个方向扩散感染新鲜橘子，`freshCnt--` 并标记为腐烂。每轮结束 `step++`，直到没有新鲜橘子或队列为空。

**易错点：** 必须先检查 `grid.empty()`；每轮 BFS 需要用 `k = q.size()` 固定当前层大小，否则 step 计数不准；初始没有新鲜橘子直接返回 0；最后 `freshCnt > 0` 返回 -1。

---

### 3. 课程表

[🔗 LeetCode 原题](https://leetcode.cn/problems/course-schedule/) | 🟡 中等

**题目描述：** 你这个学期必须选修 numCourses 门课程，记为 0 到 numCourses - 1。在选修某些课程之前需要一些先修课程。先修课程按数组 prerequisites 给出，其中 prerequisites[i] = [ai, bi]，表示如果要学习课程 ai 则必须先学习课程 bi。请你判断是否可能完成所有课程的学习。

```cpp
class Solution {
  public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
        vector<vector<int>> e(numCourses);
        vector<int> ind(numCourses);
        for (const auto &it : prerequisites) {
            e[it[1]].push_back(it[0]);
            ind[it[0]]++;
        }
        queue<int> q;
        int cnt = 0;
        for (int i = 0; i < numCourses; i++) {
            if (ind[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int now = q.front();
            q.pop();
            cnt++;
            for (auto it : e[now]) {
                if (--ind[it] == 0) {
                    q.push(it);
                }
            }
        }
        return cnt == numCourses;
    }
};
```

**核心思路：** 拓扑排序（BFS Kahn 算法）：构建邻接表 `vector<vector<int>> e` 和入度数组 `ind`。先将所有入度为 0 的节点入队，BFS 过程中每弹出一个节点 `cnt++`，遍历其邻接节点并将入度减 1，入度变为 0 时入队。最后 `cnt == numCourses` 说明无环可完成。

**易错点：** `prerequisites[i] = [ai, bi]` 表示 bi → ai（先修 bi 才能学 ai），建图时方向不能反；用 `cnt` 计数器比 `unordered_set` 更简洁高效；注意 `const auto &` 遍历避免拷贝。

---

### 4. 实现 Trie (前缀树)

[🔗 LeetCode 原题](https://leetcode.cn/problems/implement-trie-prefix-tree/) | 🟡 中等

**题目描述：** Trie（发音类似 "try"）或者说前缀树是一种树形数据结构，用于高效地存储和检索字符串数据集中的键。这一数据结构有相当多的应用情景，例如自动补全和拼写检查。请你实现 Trie 类。

```cpp
class Trie {
  public:
    unordered_map<char, Trie *> children;
    bool isWord;
    Trie() { this->isWord = false; }

    void insert(string word) {
        Trie *node = this;
        for (auto ch : word) {
            if (node->children[ch] == nullptr) {
                node->children[ch] = new Trie();
            }
            node = node->children[ch];
        }
        node->isWord = true;
    }

    bool search(string word) {
        Trie *node = this;
        for (auto ch : word) {
            if (node->children[ch] == nullptr) {
                return false;
            }
            node = node->children[ch];
        }
        return node != nullptr && node->isWord;
    }

    bool startsWith(string prefix) {
        Trie *node = this;
        for (auto ch : prefix) {
            if (node->children[ch] == nullptr) {
                return false;
            }
            node = node->children[ch];
        }
        return node != nullptr;
    }
};
```

**核心思路：** 每个节点包含 `unordered_map<char, Trie*> children` 和一个 `isWord` 标志。`insert` 沿路径创建节点，末尾设 `isWord = true`；`search` 沿路径检查，最后需验证 `isWord`；`startsWith` 只需检查路径是否存在即可。

**易错点：** `search` 和 `startsWith` 的区别：`search` 需要检查末尾节点的 `isWord` 标志，`startsWith` 不需要；使用 `unordered_map` 代替固定 26 大小的数组，更节省空间但需注意指针判空；`insert` 时 `node->children[ch]` 不存在才创建新节点。

---

## 回溯

### 1. 全排列

[🔗 LeetCode 原题](https://leetcode.cn/problems/permutations/) | 🟡 中等

**题目描述：** 给定一个不含重复数字的数组 nums，返回其所有可能的全排列。你可以按任意顺序返回答案。

```cpp
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums, 0);
        return res;
    }
private:
    vector<vector<int>> res;
    void dfs(vector<int> nums, int x) {
        if (x == nums.size() - 1) {
            res.push_back(nums);
            return;
        }
        for (int i = x; i < nums.size(); i++) {
            swap(nums[i], nums[x]);
            dfs(nums, x + 1);
            swap(nums[i], nums[x]);
        }
    }
};
```

**核心思路：** 回溯：swap 法，固定第 x 位，依次将后面的元素交换到 x 位置，递归处理 x+1，然后恢复交换。

**易错点：** 需要恢复交换（回溯）；也可以使用 visited 数组的方式。

---

### 2. 子集

[🔗 LeetCode 原题](https://leetcode.cn/problems/subsets/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums，数组中的元素互不相同。返回该数组所有可能的子集（幂集）。解集不能包含重复的子集。

```cpp
class Solution {
  public:
    vector<vector<int>> ans;
    void dfs(int start, int n, vector<int> &nums, vector<int> &path) {
        if (start >= n) {
            ans.push_back(path);
            return;
        }
        ans.push_back(path);
        for (int i = start; i < n; i++) {
            path.push_back(nums[i]);
            dfs(i + 1, n, nums, path);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        if (nums.empty()) {
            return {};
        }
        vector<int> path;
        dfs(0, nums.size(), nums, path);
        return ans;
    }
};
```

**核心思路：** 回溯：每个元素选或不选。遍历时，每次进入递归都先把当前 path 加入结果。

**易错点：** 子集元素个数从 0 到 n；注意 path 的 push 和 pop 时机。

---

### 3. 电话号码的字母组合

[🔗 LeetCode 原题](https://leetcode.cn/problems/letter-combinations-of-a-phone-number/) | 🟡 中等

**题目描述：** 给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按任意顺序返回。给出数字到字母的映射如下（与电话按键相同）。

```cpp
class Solution {
  public:
    unordered_map<int, string> mp{{2, "abc"}, {3, "def"}, {4, "ghi"},
                                  {5, "jkl"}, {6, "mno"}, {7, "pqrs"},
                                  {8, "tuv"}, {9, "wxyz"}};
    vector<string> ans;
    string path;
    void dfs(string digits, int i) {
        if (i >= digits.size()) {
            ans.push_back(path);
            return;
        }
        string s = mp[digits[i] - '0'];
        for (char ch : s) {
            path.push_back(ch);
            dfs(digits, i + 1);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }
        dfs(digits, 0);
        return ans;
    }
};
```

**核心思路：** 回溯：建立数字到字母的映射表，DFS 遍历每个数字对应的所有字母。

**易错点：** digits 为空时返回空列表（不是包含空字符串的列表）。

---

### 4. 组合总和

[🔗 LeetCode 原题](https://leetcode.cn/problems/combination-sum/) | 🟡 中等

**题目描述：** 给你一个无重复元素的整数数组 candidates 和一个目标整数 target，找出 candidates 中可以使数字和为目标数 target 的所有不同组合，并以列表形式返回。candidates 中的同一个数字可以无限制重复被选取。

```cpp
class Solution {
  public:
    vector<vector<int>> ans;
    vector<int> path;
    void dfs(int start, vector<int> &candidates, int target) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }
        if (target < 0 || start >= candidates.size()) {
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            path.push_back(candidates[i]);
            dfs(i, candidates, target - candidates[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        if (candidates.empty()) {
            return {};
        }
        dfs(0, candidates, target);
        return ans;
    }
};
```

**核心思路：** 回溯：从 start 开始遍历，避免重复组合。每次可以选择当前元素（不移动 start）或跳过（移动 start）。

**易错点：** 元素可重复选取，所以递归时 start 不变；target < 0 时剪枝。

---

### 5. 括号生成

[🔗 LeetCode 原题](https://leetcode.cn/problems/generate-parentheses/) | 🟡 中等

**题目描述：** 数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且有效的括号组合。

```cpp
class Solution {
private:
    vector<string> ans;
    void dfs(string &path, int sum, int i, int n) {
        if (sum > (n >> 1)) return;
        if (i == n) {
            if (sum == 0) ans.push_back(path);
            return;
        }
        path[i] = '(';
        dfs(path, sum + 1, i + 1, n);
        if (sum > 0) {
            path[i] = ')';
            dfs(path, sum - 1, i + 1, n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string path(n * 2, ' ');
        dfs(path, 0, 0, n * 2);
        return ans;
    }
};
```

**核心思路：** 回溯：维护当前左括号数 sum。左括号数 < n 时可加 '('，sum > 0 时可加 ')'。最终 sum == 0 时得到有效组合。

**易错点：** sum 同时表示未匹配的左括号数；条件 sum > (n>>1) 可提前剪枝。

---

### 6. 单词搜索

[🔗 LeetCode 原题](https://leetcode.cn/problems/word-search/) | 🟡 中等

**题目描述：** 给定一个 m x n 二维字符网格 board 和一个字符串单词 word。如果 word 存在于网格中，返回 true；否则，返回 false。单词必须按照字母顺序，通过相邻的单元格内的字母构成。

```cpp
class Solution {
  public:
    int m, n, d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isValid(int x, int y) { return x >= 0 && x < m && y >= 0 && y < n; }
    bool dfs(vector<vector<char>> &board, string word, int x, int y, int i,
             vector<vector<bool>> &vis) {
        if (!isValid(x, y) || (i < word.size() && board[x][y] != word[i])) {
            return false;
        }
        if (i >= word.size() - 1) {
            return true;
        }
        vis[x][y] = true;
        bool flag = false;
        for (int j = 0; j < 4; j++) {
            int newX = x + d[j][0], newY = y + d[j][1];
            if (isValid(newX, newY) && !vis[newX][newY] &&
                (flag = dfs(board, word, newX, newY, i + 1, vis))) {
                // 这里不能直接 return, 因为要恢复当前 (x, y) 的可访问性，dfs
                // 的链路并不是单一链路，要支持回溯后二次搜索
                break;
            }
        }
        vis[x][y] = false;
        return flag;
    }
    bool exist(vector<vector<char>> &board, string word) {
        if (board.empty()) {
            return false;
        }
        m = board.size();
        n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0]) {
                    vector<vector<bool>> vis(m, vector<bool>(n));
                    if (dfs(board, word, i, j, 0, vis)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
```

**核心思路：** DFS + 回溯：遍历每个格子作为起点，向四个方向搜索。使用 visited 数组或原地修改 board 标记已访问。

**易错点：** 找到一条路径后可直接返回，但要用 break 而非直接 return（需要恢复 visited）；回溯时需要恢复标记。

---

### 7. 分割回文串

[🔗 LeetCode 原题](https://leetcode.cn/problems/palindrome-partitioning/) | 🟡 中等

**题目描述：** 给你一个字符串 s，请你将 s 分割成一些子串，使每个子串都是回文串。返回 s 所有可能的分割方案。

```cpp
class Solution {
public:

    bool memo[20][20];
    vector<vector<string>> ans;

    bool isPali(string s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }

    void dfs(string& s, int start, vector<string> path) {
        if (start >= s.size()) {
            ans.push_back(path);
            return;
        }
        for (int i = start; i < s.size(); i++) {
            if (memo[start][i] || isPali(s, start, i)) {
                path.push_back(s.substr(start, i - start + 1));
                memo[start][i] = true;
                dfs(s, i + 1, path);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        dfs(s, 0, vector<string>());
        return ans;
    }
};
```

**核心思路：** 回溯 + 回文判断：从 start 开始，枚举所有可能的回文子串 [start, i]，递归处理 i+1 起。使用 memo 优化回文判断。

**易错点：** 回文判断可以用 DP 预处理 O(n²) 做到 O(1) 查询；memo[start][i] 缓存回文判断结果。

---

### 8. N 皇后

[🔗 LeetCode 原题](https://leetcode.cn/problems/n-queens/) | 🔴 困难 | ⚠️ **未 AC**（参考题解）

**题目描述：** 按照国际象棋的规则，皇后可以攻击与之处在同一行或同一列或同一斜线上的棋子。n 皇后问题 研究的是如何将 n 个皇后放置在 n×n 的棋盘上，并且使皇后彼此之间不能相互攻击。给你一个整数 n ，返回所有不同的 n 皇后问题 的解决方案。

```cpp
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        vector<int> col(n), d1(2*n), d2(2*n); // 列、主对角、副对角占用
        function<void(int)> dfs = [&](int r) {
            if (r == n) { ans.push_back(board); return; }
            for (int c = 0; c < n; c++) {
                if (col[c] || d1[r-c+n] || d2[r+c]) continue;
                // 放置皇后并标记冲突线
                board[r][c] = 'Q';
                col[c] = d1[r-c+n] = d2[r+c] = 1;
                dfs(r + 1);
                board[r][c] = '.';
                col[c] = d1[r-c+n] = d2[r+c] = 0;
            }
        };
        dfs(0);
        return ans;
    }
};
```

**时空复杂度：** 时间 O(n!)，空间 O(n)

**核心考点：** 数组、回溯

**核心思路：** 按行放置，用三个数组标记列与两条对角线是否被占用，回溯搜索。

**易错点：** 对角线下标映射易错：r-c 需加偏移；回溯时务必撤销标记。

---

## 二分查找

### 1. 搜索插入位置

[🔗 LeetCode 原题](https://leetcode.cn/problems/search-insert-position/) | 🟢 简单

**题目描述：** 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

```cpp
class Solution {
  public:
    // 找到第一个大于等于 target 的元素下标
    int searchInsert(vector<int> &nums, int target) {
        int n = nums.size(), l = 0, r = n - 1;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (target <= nums[mid]) {
                r = mid;
            } else if (target > nums[mid]) {
                l = mid + 1;
            }
        }
        // l < r 的情况，需要对循环结束的结果做特判。
        // 因为循环时没有对 nums[l] 做判定
        return nums[l] >= target ? l : l + 1;
    }
};
```

**核心思路：** 二分查找第一个 >= target 的位置。while (l < r) 模式，注意循环结束后特判。

**易错点：** 循环结束后 l == r，需要判断 nums[l] 与 target 的大小关系。

---

### 2. 搜索二维矩阵

[🔗 LeetCode 原题](https://leetcode.cn/problems/search-a-2d-matrix/) | 🟡 中等

**题目描述：** 给你一个满足下述两条属性的 m x n 整数矩阵：每行中的整数从左到右按非严格递增顺序排列；每行的第一个整数大于前一行的最后一个整数。给你一个整数 target，如果 target 在矩阵中，返回 true；否则，返回 false。

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) {
            return false;
        }
        int row = 0, m = matrix.size(), n = matrix[0].size();
        while (row < m && matrix[row][n - 1] < target) {
            row++;
        }
        if (row == m) {
            return false;
        }
        int l = 0, r = n - 1, mid;
        while (l <= r) {
            mid = (l + r) >> 1;
            if (matrix[row][mid] == target) {
                return true;
            }
            if (matrix[row][mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }
};
```

**核心思路：** 先确定目标行（每行最后一个元素 < target 则跳过），再在该行内二分查找。

**易错点：** 将二维矩阵视为一维有序数组也可以（二分索引转换）。

---

### 3. 在排序数组中查找元素的第一个和最后一个位置

[🔗 LeetCode 原题](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/) | 🟡 中等

**题目描述：** 给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。如果数组中不存在目标值 target，返回 [-1, -1]。

```cpp
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) return {-1, -1};
        int l = 0, r = nums.size() - 1, mid, start;
        while (l < r) {
            mid = (l + r) >> 1;
            if (target < nums[mid]) r = mid - 1;
            else if (target > nums[mid]) l = mid + 1;
            else r = mid;
        }
        if (nums[l] != target) return {-1, -1};
        start = l;
        l = 0, r = nums.size() - 1;
        while (l < r) {
            mid = (l + r + 1) >> 1;
            if (target < nums[mid]) r = mid - 1;
            else if (target > nums[mid]) l = mid + 1;
            else l = mid;
        }
        return {start, l};
    }
};
```

**核心思路：** 两次二分：第一次找第一个 >= target 的位置（左边界），第二次找最后一个 <= target 的位置（右边界）。

**易错点：** 找左边界时 mid = (l+r)>>1，右边界时 mid = (l+r+1)>>1（避免死循环）；需要先判断 target 是否存在。

---

### 4. 搜索旋转排序数组

[🔗 LeetCode 原题](https://leetcode.cn/problems/search-in-rotated-sorted-array/) | 🟡 中等

**题目描述：** 整数数组 nums 按升序排列，数组中的值互不相同。在传递给函数之前，nums 在预先未知的某个下标 k 上进行了旋转。给你旋转后的数组 nums 和一个整数 target，如果 nums 中存在这个目标值 target，则返回它的下标，否则返回 -1。

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;
        while (l <= r) {
            mid = (l + r) >> 1;
            if (nums[mid] == target) return mid;
            if (nums[mid] >= nums[0]) {
                if (target > nums[mid] || target < nums[0]) l = mid + 1;
                else r = mid - 1;
            } else {
                if (target <= nums[mid] || target > nums.back()) r = mid - 1;
                else l = mid + 1;
            }
        }
        return -1;
    }
};
```

**核心思路：** 二分查找：判断 mid 在左半有序段还是右半有序段，根据 target 与 nums[mid] 和 nums[0]/nums.back() 的关系决定搜索方向。

**易错点：** 判断 mid 属于哪一侧：nums[mid] >= nums[0] 则在左半段；注意 target 的比较逻辑需要分四种情况。

---

### 5. 寻找旋转排序数组中的最小值

[🔗 LeetCode 原题](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/) | 🟡 中等

**题目描述：** 已知一个长度为 n 的数组，预先按照升序排列，经由 1 到 n 次旋转后，得到输入数组。给你一个元素值互不相同的数组 nums，它原来是一个升序排列的数组，并按上述情形进行了多次旋转。请你找出并返回数组中的最小元素。

```cpp
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, mid;
        if (nums[r] >= nums[0]) return nums[0];
        while (l < r) {
            mid = (l + r) >> 1;
            if (nums[mid] >= nums[0]) l = mid + 1;
            else r = mid;
        }
        return nums[l];
    }
};
```

**核心思路：** 二分查找：如果 nums[r] >= nums[0] 说明数组未旋转，返回 nums[0]；否则在 nums[mid] >= nums[0] 时 l = mid+1，否则 r = mid。

**易错点：** 需要先判断是否完全有序（未旋转的情况）；while 条件是 l < r。

---

### 6. 寻找两个正序数组的中位数

[🔗 LeetCode 原题](https://leetcode.cn/problems/median-of-two-sorted-arrays/) | 🔴 困难 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的中位数。算法的时间复杂度应该为 O(log (m+n)) 。

```cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        if (A.size() > B.size()) return findMedianSortedArrays(B, A);
        int m = A.size(), n = B.size(), lo = 0, hi = m;
        while (lo <= hi) {
            int i = (lo + hi) / 2;          // A 左半长度
            int j = (m + n + 1) / 2 - i;   // B 左半长度，使左半总长 = 右半或右半+1
            int Aleft = i ? A[i-1] : INT_MIN, Aright = i < m ? A[i] : INT_MAX;
            int Bleft = j ? B[j-1] : INT_MIN, Bright = j < n ? B[j] : INT_MAX;
            if (Aleft <= Bright && Bleft <= Aright) {
                if ((m + n) % 2) return max(Aleft, Bleft);
                return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
            } else if (Aleft > Bright) hi = i - 1;
            else lo = i + 1;
        }
        return 0;
    }
};
```

**时空复杂度：** 时间 O(log(min(m,n)))，空间 O(1)

**核心考点：** 数组、二分查找、分治

**核心思路：** 在较短数组上二分划分点，使左右两部分满足有序中位数条件。

**易错点：** 必须保证在较短数组上二分；边界用 ±INF；奇偶长度中位数取值不同。

---

## 栈

### 1. 有效的括号

[🔗 LeetCode 原题](https://leetcode.cn/problems/valid-parentheses/) | 🟢 简单

**题目描述：** 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s，判断字符串是否有效。有效字符串需满足：左括号必须用相同类型的右括号闭合；左括号必须以正确的顺序闭合。

```cpp
class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        stack<char> st;
        for (auto ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if (st.empty() || mp[st.top()] != ch) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
```

**核心思路：** 栈：遇到左括号入栈，遇到右括号检查栈顶是否匹配。最后检查栈是否为空。

**易错点：** unordered_map 用于括号匹配；注意右括号时栈可能为空的情况。

---

### 2. 最小栈

[🔗 LeetCode 原题](https://leetcode.cn/problems/min-stack/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。实现 MinStack 类：MinStack() 初始化堆栈对象；void push(int val) 将元素 val 推入堆栈；void pop() 删除堆栈顶部的元素；int top() 获取堆栈顶部的元素；int getMin() 获取堆栈中的最小元素。

```cpp
class MinStack {
    stack<int> st, mn;
public:
    MinStack() {}
    void push(int val) {
        st.push(val);
        // 同步维护最小值栈
        mn.push(mn.empty() ? val : min(mn.top(), val));
    }
    void pop() { st.pop(); mn.pop(); }
    int top() { return st.top(); }
    int getMin() { return mn.top(); }
};
```

**时空复杂度：** 时间 O(1) 每操作，空间 O(n)

**核心考点：** 栈、设计

**核心思路：** 辅助栈同步记录每个状态下的当前最小值。

**易错点：** pop 时两个栈都要弹；push 时最小值取 min(当前, 新值)。

---

### 3. 字符串解码

[🔗 LeetCode 原题](https://leetcode.cn/problems/decode-string/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定一个经过编码的字符串，返回它解码后的字符串。编码规则为: k[encoded_string]，表示其中方括号内部的 encoded_string 正好重复 k 次。注意 k 保证为正整数。你可以认为输入字符串总是有效的。

```cpp
class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;
        string cur; int num = 0;
        for (char c : s) {
            if (isdigit(c)) num = num * 10 + (c - '0');
            else if (c == '[') {
                nums.push(num); strs.push(cur);
                num = 0; cur.clear();
            } else if (c == ']') {
                // 弹出倍数与前缀，拼接重复段
                string t = strs.top(); strs.pop();
                int k = nums.top(); nums.pop();
                while (k--) t += cur;
                cur = t;
            } else cur += c;
        }
        return cur;
    }
};
```

**时空复杂度：** 时间 O(输出长度)，空间 O(嵌套深度)

**核心考点：** 栈、递归、字符串

**核心思路：** 栈处理嵌套：遇 '[' 压入当前数字与字符串，遇 ']' 弹出拼接。

**易错点：** 数字可能多位需累乘；']' 时先拼再赋回 cur。

---

### 4. 每日温度

[🔗 LeetCode 原题](https://leetcode.cn/problems/daily-temperatures/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定一个整数数组 temperatures ，表示每天的温度，返回一个数组 answer ，其中 answer[i] 是指对于第 i 天，下一个更高温度出现在几天后。如果气温在这之后都不会升高，请在该位置用 0 来代替。

```cpp
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<int> st; // 存下标，栈内温度单调递减
        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int j = st.top(); st.pop();
                ans[j] = i - j; // 下一个更高温度的距离
            }
            st.push(i);
        }
        return ans;
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(n)

**核心考点：** 栈、数组、单调栈

**核心思路：** 单调递减栈存下标，当前温度更高时弹出并计算等待天数。

**易错点：** 栈存下标而非值；没有更高温的位置保持 0。

---

### 5. 柱状图中最大的矩形

[🔗 LeetCode 原题](https://leetcode.cn/problems/largest-rectangle-in-histogram/) | 🔴 困难 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。求在该柱状图中，能够勾勒出来的矩形的最大面积。

```cpp
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0); // 哨兵强制结算
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < (int)heights.size(); i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int h = heights[st.top()]; st.pop();
                // 宽度 = 右边界 i - 左边界 - 1
                int L = st.empty() ? -1 : st.top();
                ans = max(ans, h * (i - L - 1));
            }
            st.push(i);
        }
        return ans;
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(n)

**核心考点：** 栈、数组、单调栈

**核心思路：** 单调递增栈找每个柱子左右第一个更矮柱，以该高度为矩形高计算面积。

**易错点：** 末尾加 0 哨兵；宽度计算时左边界取栈顶或 -1。

---

## 堆

### 1. 数组中的第K个最大元素

[🔗 LeetCode 原题](https://leetcode.cn/problems/kth-largest-element-in-an-array/) | 🟡 中等

**题目描述：** 给定整数数组 nums 和整数 k，请返回数组中第 k 个最大的元素。你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。

```cpp
class Solution {
  public:
    int findKthLargest(vector<int> &nums, int k, int left, int right) {
        if (left >= right) {
            return nums[left];
        }
        int index = left + rand() % (right - left + 1);
        swap(nums[left], nums[index]);
        int l = left, r = right, pivot = nums[left];
        while (l < r) {
            while (l < r && nums[r] >= pivot) r--;
            nums[l] = nums[r];
            while (l < r && nums[l] <= pivot) l++;
            nums[r] = nums[l];
        }
        nums[l] = pivot;
        if (l == k) {
            return pivot;
        }
        return l < k ? findKthLargest(nums, k, l + 1, right)
                     : findKthLargest(nums, k, left, l - 1);
    }
    int findKthLargest(vector<int> &nums, int k) {
        if (nums.size() < k) {
            return 0;
        }
        int n = nums.size();
        return findKthLargest(nums, n - k, 0, n - 1);
    }
};
```

**核心思路：** 快速选择：基于快排的 partition，每次确定 pivot 的最终位置。如果 pivot 位置 == k，返回；否则在左或右半部分继续。

**易错点：** 第 k 大 = 第 n-k 小（从 0 开始）；随机选择 pivot 避免最坏情况；partition 写法要正确。

---

### 2. 前 K 个高频元素

[🔗 LeetCode 原题](https://leetcode.cn/problems/top-k-frequent-elements/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums 和一个整数 k，请你返回其中出现频率前 k 高的元素。你可以按任意顺序返回答案。

```cpp
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (auto it : nums) count[it]++;
        auto cmp = [](pair<int, int>& m, pair<int, int>& n) {
            return m.second > n.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)>
            heap(cmp);
        for (auto& [num, cnt] : count) {
            if (heap.size() >= k) {
                if (cnt > heap.top().second) {
                    heap.pop();
                    heap.emplace(num, cnt);
                }
            } else {
                heap.emplace(num, cnt);
            }
        }
        vector<int> ans;
        while (!heap.empty()) {
            ans.push_back(heap.top().first);
            heap.pop();
        }
        return ans;
    }
};
```

**核心思路：** 哈希表统计频率 + 小顶堆维护前 k 大。堆大小超过 k 时弹出堆顶。

**易错点：** 小顶堆的比较函数要按频率升序；最后结果可以是任意顺序。

---

### 3. 数据流的中位数

[🔗 LeetCode 原题](https://leetcode.cn/problems/find-median-from-data-stream/) | 🔴 困难 | ⚠️ **未 AC**（参考题解）

**题目描述：** 中位数是有序整数列表中的中间值。如果列表的大小是偶数，则没有中间值，中位数是两个中间值的平均值。实现 MedianFinder 类：MedianFinder() 初始化；void addNum(int num) 将数据流中的整数 num 添加到数据结构中；double findMedian() 返回目前所有元素的中位数。

```cpp
class MedianFinder {
    priority_queue<int> lo; // 大根堆：较小一半
    priority_queue<int, vector<int>, greater<int>> hi; // 小根堆：较大一半
public:
    MedianFinder() {}
    void addNum(int num) {
        lo.push(num);
        hi.push(lo.top()); lo.pop();
        if (hi.size() > lo.size()) { lo.push(hi.top()); hi.pop(); }
    }
    double findMedian() {
        // 奇数时中位数在 lo.top()
        return lo.size() > hi.size() ? lo.top() : (lo.top() + hi.top()) / 2.0;
    }
};
```

**时空复杂度：** 时间 addNum O(log n)，findMedian O(1)；空间 O(n)

**核心考点：** 设计、双指针、数据流、排序、堆（优先队列）

**核心思路：** 对顶堆：大根堆存较小半，小根堆存较大半，保持 size 相差不超过 1。

**易错点：** 先入 lo 再平衡到 hi；始终保证 lo.size() >= hi.size()。

---

## 贪心算法

### 1. 买卖股票的最佳时机

[🔗 LeetCode 原题](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/) | 🟢 简单

**题目描述：** 给定一个数组 prices，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。你只能选择某一天买入这只股票，并选择在未来的某一个不同的日子卖出该股票。设计一个算法来计算你所能获取的最大利润。

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        int n = prices.size(), ans = 0;
        int rightMax = prices[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax = max(rightMax, prices[i]);
            ans = max(ans, rightMax - prices[i]);
        }
        return ans;
    }
};
```

**核心思路：** 从右向左遍历，维护右侧最大值 rightMax，更新最大利润 = max(ans, rightMax - prices[i])。

**易错点：** 只能买卖一次，所以是找最大差值；也可以从左到右维护最小买入价。

---

### 2. 跳跃游戏

[🔗 LeetCode 原题](https://leetcode.cn/problems/jump-game/) | 🟡 中等

**题目描述：** 给你一个非负整数数组 nums，你最初位于数组的第一个下标。数组中的每个元素代表你在该位置可以跳跃的最大长度。判断你是否能够到达最后一个下标。

```cpp
class Solution {
  public:
    bool canJump(vector<int> &nums) {
        if (nums.size() <= 1) {
            return true;
        }
        int maxIndex = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i <= maxIndex) {
                maxIndex = max(maxIndex, i + nums[i]);
            }
            if (maxIndex >= n - 1) {
                return true;
            }
        }
        return false;
    }
};
```

**核心思路：** 贪心：维护当前能到达的最远位置 maxIndex，遍历时如果 i <= maxIndex 则更新 maxIndex。

**易错点：** 条件 i <= maxIndex 意味着当前位置可达；如果 maxIndex >= n-1 提前返回 true。

---

### 3. 跳跃游戏 II

[🔗 LeetCode 原题](https://leetcode.cn/problems/jump-game-ii/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定一个长度为 n 的 0 索引整数数组 nums。初始位置为 nums[0]。每个元素 nums[i] 表示从索引 i 向前跳转的最大长度。返回到达 nums[n - 1] 的最小跳跃次数。测试用例保证可以到达 n - 1。

```cpp
class Solution {
public:
    int jump(vector<int>& nums) {
        int end = 0, farthest = 0, steps = 0;
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            if (i == end) { // 到达当前跳跃覆盖的边界
                steps++;
                end = farthest;
            }
        }
        return steps;
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(1)

**核心考点：** 贪心、数组、动态规划

**核心思路：** 贪心：在当前跳跃可达范围内选择能延伸最远的位置作为下次边界。

**易错点：** 循环到 n-2 即可；不要在到达终点后再加步数。

---

### 4. 划分字母区间

[🔗 LeetCode 原题](https://leetcode.cn/problems/partition-labels/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给你一个字符串 s 。我们要把这个字符串划分为尽可能多的片段，同一字母最多出现在一个片段中。注意，划分结果需要满足：将所有分割后的片段连接起来，结果字符串仍然是 s 。返回一个表示每个字符串片段的长度的列表。

```cpp
class Solution {
public:
    vector<int> partitionLabels(string s) {
        if (s.empty()) {
            return {};
        }
        int last[128] = {0};
        for (int i = 0; i < s.size(); i++) {
            last[s[i]] = i;
        }
        int start = 0, end = 0;
        vector<int> ans;
        for (int i = 0; i < s.size(); i++) {
            end = max(end, last[s[i]]); // 不断扩展最大右区间
            if (end == i) { // 直到当前字母的最大位置等于当前位置，说明已经不能扩展了
                ans.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return ans;
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(1)

**核心考点：** 贪心、哈希表、双指针、字符串

**核心思路：** 记录每个字母最后出现位置，贪心扩展当前片段直到覆盖所有已出现字母。

**易错点：** 片段结束条件是 i == end；返回的是长度不是下标。

---

## 动态规划

### 1. 爬楼梯

[🔗 LeetCode 原题](https://leetcode.cn/problems/climbing-stairs/) | 🟢 简单

**题目描述：** 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

```cpp
class Solution {
public:
    int memo[50] = {0};
    int climbStairs(int n) {
        if (n <= 2) return n;
        if (memo[n] != 0) return memo[n];
        return memo[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};
```

**核心思路：** 斐波那契数列：f(n) = f(n-1) + f(n-2)。记忆化递归或迭代 DP。

**易错点：** 和斐波那契数列的差异：n=1 时返回 1，n=2 时返回 2。

---

### 2. 杨辉三角

[🔗 LeetCode 原题](https://leetcode.cn/problems/pascals-triangle/) | 🟢 简单

**题目描述：** 给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows == 0) return ans;
        ans.push_back({1});
        for (int i = 0; i < numRows - 1; i++) {
            vector<int> preList = ans[i];
            vector<int> tmp;
            tmp.push_back(1);
            for (int j = 1; j < preList.size(); j++) {
                tmp.push_back(preList[j - 1] + preList[j]);
            }
            tmp.push_back(1);
            ans.push_back(tmp);
        }
        return ans;
    }
};
```

**核心思路：** 逐行生成：每行首尾为 1，中间元素 = 上一行相邻两元素之和。

**易错点：** 注意索引计算：ans[i][j] = ans[i-1][j-1] + ans[i-1][j]。

---

### 3. 打家劫舍

[🔗 LeetCode 原题](https://leetcode.cn/problems/house-robber/) | 🟡 中等

**题目描述：** 你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。给定一个代表每个房屋存放金额的非负整数数组，计算你不触动警报装置的情况下，一夜之内能够偷窃到的最高金额。

```cpp
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() <= 1) return nums[0];
        int n = nums.size();
        int a = nums[0], b = max(nums[0], nums[1]);
        int ans = max(a, b);
        for (int i = 2; i < n; i++) {
            int t = max(a + nums[i], b);
            ans = max(ans, t);
            a = b; b = t;
        }
        return ans;
    }
};
```

**核心思路：** DP：dp[i] = max(dp[i-1], dp[i-2] + nums[i])。可优化为 O(1) 空间用两个变量滚动。

**易错点：** 状态转移：不偷第 i 间 = dp[i-1]，偷第 i 间 = dp[i-2] + nums[i]。

---

### 4. 完全平方数

[🔗 LeetCode 原题](https://leetcode.cn/problems/perfect-squares/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给你一个整数 n ，返回和为 n 的完全平方数的最少数量。完全平方数是一个整数，其值等于另一个整数的平方。

```cpp
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                // dp[i] = 最少完全平方数个数
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        return dp[n];
    }
};
```

**时空复杂度：** 时间 O(n√n)，空间 O(n)

**核心考点：** 广度优先搜索、数学、动态规划

**核心思路：** 完全背包型 DP：dp[i] 表示凑出 i 所需最少完全平方数个数。

**易错点：** dp 初始化为 INF；内层 j\*j<=i；也可用 BFS 求最短路。

---

### 5. 零钱兑换

[🔗 LeetCode 原题](https://leetcode.cn/problems/coin-change/) | 🟡 中等

**题目描述：** 给你一个整数数组 coins，表示不同面额的硬币；以及一个整数 amount，表示总金额。计算并返回可以凑成总金额所需的最少的硬币个数。如果没有任何一种硬币组合能组成总金额，返回 -1。

```cpp
class Solution {
public:
    int dfs(int amount, vector<int> &v, int* memo) {
        if (amount == 0) return 0;
        if (amount < 0) return -1;
        if (memo[amount] != -2) return memo[amount];
        int ans = INT_MAX;
        for (int i = 0; i < v.size(); i++) {
            int t = dfs(amount - v[i], v, memo);
            if (t != -1 && t < ans) ans = t;
        }
        memo[amount] = ans == INT_MAX ? -1 : ans + 1;
        return memo[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        if (amount < 1) return 0;
        int memo[amount + 1];
        fill(memo, memo + (amount + 1), -2);
        return dfs(amount, coins, memo);
    }
};
```

**核心思路：** 记忆化搜索（自顶向下）：dfs(amount) = min(dfs(amount - coin) + 1)。注意 memo 初始化为 -2 以区分 -1（无解）。

**易错点：** memo 初始化为 -2 很关键，因为 -1 表示无解；amount 为 0 时返回 0。

---

### 6. 单词拆分

[🔗 LeetCode 原题](https://leetcode.cn/problems/word-break/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给你一个字符串 s 和一个字符串列表 wordDict 作为字典。如果可以利用字典中出现的一个或多个单词拼接出 s 则返回 true。注意：不要求字典中出现的单词全部都使用，并且字典中的单词可以重复使用。

```cpp
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        int n = s.size();
        vector<bool> dp(n + 1);
        dp[0] = true;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                // s[0..j) 可拆且 s[j..i) 在字典中
                if (dp[j] && dict.count(s.substr(j, i - j))) {
                    dp[i] = true; break;
                }
            }
        }
        return dp[n];
    }
};
```

**时空复杂度：** 时间 O(n²·L)，空间 O(n)

**核心考点：** 字典树、记忆化、数组、哈希表、字符串、动态规划

**核心思路：** dp[i] 表示前 i 个字符能否拆分；枚举分割点查字典。

**易错点：** 字典转 set 加速；注意 substr 区间是 [j, i)。

---

### 7. 最长递增子序列

[🔗 LeetCode 原题](https://leetcode.cn/problems/longest-increasing-subsequence/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums，找到其中最长严格递增子序列的长度。子序列是由数组派生而来的序列，删除（或不删除）数组中的元素而不改变其余元素的顺序。

```cpp
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), len = 1;
        if (n == 1) return 1;
        vector<int> d(n + 1);
        d[len] = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] > d[len]) {
                d[++len] = nums[i];
            } else {
                int l = 1, r = len, mid = 0;
                while (l < r) {
                    mid = (l + r) >> 1;
                    if (d[mid] >= nums[i]) r = mid;
                    else l = mid + 1;
                }
                if (d[l] > nums[i]) d[l] = nums[i];
            }
        }
        return len;
    }
};
```

**核心思路：** 贪心 + 二分：维护 tails 数组，tails[i] 表示长度为 i+1 的递增子序列的最小末尾值。遍历时如果 nums[i] > tails.back() 则扩展，否则二分查找替换。

**易错点：** tails 数组不是真正的 LIS 序列，但长度是 LIS 长度；二分查找第一个 >= nums[i] 的位置。

---

### 8. 乘积最大子数组

[🔗 LeetCode 原题](https://leetcode.cn/problems/maximum-product-subarray/) | 🟡 中等

**题目描述：** 给你一个整数数组 nums，请你找出数组中乘积最大的非空连续子数组（该子数组中至少包含一个数字），并返回该子数组所对应的乘积。

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), maxF, minF, ans;
        ans = maxF = minF = nums[0];
        for (int i = 1; i < n; i++) {
            int tMaxF = maxF, tMinF = minF;
            maxF = max(max(tMaxF * nums[i], tMinF * nums[i]), nums[i]);
            minF = min(min(tMaxF * nums[i], tMinF * nums[i]), nums[i]);
            ans = max(ans, maxF);
        }
        return ans;
    }
};
```

**核心思路：** DP 维护两个状态：以 i 结尾的最大乘积 maxF 和最小乘积 minF。因为负数乘以最小值可能变成最大值。

**易错点：** 需要同时维护最大值和最小值；遇到负数时 maxF 和 minF 会互换；初始化 ans = maxF = minF = nums[0]。

---

### 9. 分割等和子集

[🔗 LeetCode 原题](https://leetcode.cn/problems/partition-equal-subset-sum/) | 🟡 中等

**题目描述：** 给你一个只包含正整数的非空数组 nums。请你判断是否可以将这个数组分割成两个子集，使得两个子集的元素和相等。

```cpp
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto x : nums) sum += x;
        if (sum % 2 == 1) return false;
        int target = sum >> 1, len = (int)nums.size();
        vector<int> dp(target + 1, 0);
        for (int i = 0; i < len; i++) {
            for (int j = target; j >= nums[i]; j--) {
                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
            }
        }
        return dp[target] == target;
    }
};
```

**核心思路：** 01 背包问题：判断是否能选出若干元素使其和为 sum/2。dp[j] 表示容量为 j 时能装的最大价值。

**易错点：** 先判断总和是否为偶数；内层循环从 target 到 nums[i] 倒序（01 背包）；dp[target] == target 表示可以。

---

### 10. 最长有效括号

[🔗 LeetCode 原题](https://leetcode.cn/problems/longest-valid-parentheses/) | 🔴 困难 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给你一个只包含 '(' 和 ')' 的字符串，找出最长有效（格式正确且连续）括号子串的长度。

```cpp
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // 基准下标
        int ans = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '(') st.push(i);
            else {
                st.pop();
                if (st.empty()) st.push(i); // 新的无效基准
                else ans = max(ans, i - st.top());
            }
        }
        return ans;
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(n)

**核心考点：** 栈、字符串、动态规划

**核心思路：** 栈存下标：匹配时用当前下标减去栈顶得到有效长度。

**易错点：** 初始压入 -1；栈空时压入当前 ) 作为新边界。

---

## 多维动态规划

### 1. 不同路径

[🔗 LeetCode 原题](https://leetcode.cn/problems/unique-paths/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 一个机器人位于一个 m x n 网格的左上角，机器人每次只能向下或者向右移动一步，现在机器人试图达到网格的右下角。问总共有多少条不同的路径？

```cpp
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1]; // 只能从左或上来
            }
        }
        return dp[m-1][n-1];
    }
};
```

**时空复杂度：** 时间 O(mn)，空间 O(mn)（可压成 O(n)）

**核心考点：** 数学、动态规划、组合数学

**核心思路：** 网格 DP：到 (i,j) 的路径数 = 上方 + 左方。

**易错点：** 首行首列初始化为 1；注意 m/n 含义是行列数。

---

### 2. 最小路径和

[🔗 LeetCode 原题](https://leetcode.cn/problems/minimum-path-sum/) | 🟡 中等

**题目描述：** 给定一个包含非负整数的 m x n 网格 grid，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。每次只能向下或者向右移动一步。

```cpp
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; i++) dp[i][0] = dp[i-1][0] + grid[i][0];
        for (int j = 1; j < n; j++) dp[0][j] = dp[0][j-1] + grid[0][j];
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};
```

**核心思路：** 二维 DP：dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]。初始化第一行和第一列。

**易错点：** 第一行和第一列只有一种走法；可以用原数组作为 DP 数组节省空间。

---

### 3. 最长回文子串

[🔗 LeetCode 原题](https://leetcode.cn/problems/longest-palindromic-substring/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给你一个字符串 s，找到 s 中最长的回文子串。

```cpp
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(), start = 0, len = 1;
        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) { l--; r++; }
            if (r - l - 1 > len) { start = l + 1; len = r - l - 1; }
        };
        for (int i = 0; i < n; i++) {
            expand(i, i);     // 奇数中心
            expand(i, i + 1); // 偶数中心
        }
        return s.substr(start, len);
    }
};
```

**时空复杂度：** 时间 O(n²)，空间 O(1)

**核心考点：** 双指针、字符串、动态规划

**核心思路：** 中心扩展：对每个位置分别按奇/偶回文中心向两侧扩展。

**易错点：** 必须处理偶数长度中心；更新最长时记录 start 与 len。

---

### 4. 最长公共子序列

[🔗 LeetCode 原题](https://leetcode.cn/problems/longest-common-subsequence/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定两个字符串 text1 和 text2，返回这两个字符串的最长公共子序列的长度。若不存在公共子序列，返回 0。

```cpp
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (text1[i-1] == text2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1; // 字符相同则延长
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};
```

**时空复杂度：** 时间 O(mn)，空间 O(mn)

**核心考点：** 字符串、动态规划

**核心思路：** 经典 LCS DP：相等取对角线 +1，否则取左/上最大值。

**易错点：** 下标偏移 i-1；子序列不要求连续。

---

### 5. 编辑距离

[🔗 LeetCode 原题](https://leetcode.cn/problems/edit-distance/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给你两个单词 word1 和 word2，请返回将 word1 转换成 word2 所使用的最少操作数。你可以对一个单词进行如下三种操作：插入一个字符、删除一个字符、替换一个字符。

```cpp
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        for (int i = 0; i <= m; i++) dp[i][0] = i;
        for (int j = 0; j <= n; j++) dp[0][j] = j;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i-1] == word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else // 替换 / 删除 / 插入
                    dp[i][j] = 1 + min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
            }
        }
        return dp[m][n];
    }
};
```

**时空复杂度：** 时间 O(mn)，空间 O(mn)

**核心考点：** 字符串、动态规划

**核心思路：** 编辑距离 DP：相等继承，不等取替换/删/插三种操作最小值 +1。

**易错点：** 边界初始化为 i/j；三种操作对应三个子状态。

---

## 技巧

### 1. 只出现一次的数字

[🔗 LeetCode 原题](https://leetcode.cn/problems/single-number/) | 🟢 简单

**题目描述：** 给你一个非空整数数组 nums，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (auto e : nums) ret ^= e;
        return ret;
    }
};
```

**核心思路：** 异或运算：a ^ a = 0，a ^ 0 = a。所有元素异或后，成对的元素抵消，剩下的就是只出现一次的元素。

**易错点：** 异或运算满足交换律和结合律；不需要额外空间。

---

### 2. 多数元素

[🔗 LeetCode 原题](https://leetcode.cn/problems/majority-element/) | 🟢 简单

**题目描述：** 给定一个大小为 n 的数组 nums，返回其中的多数元素。多数元素是指在数组中出现次数大于 ⌊n/2⌋ 的元素。

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, pre;
        for (int x : nums) {
            if (cnt == 0) { pre = x; cnt++; }
            else if (pre == x) cnt++;
            else cnt--;
        }
        return pre;
    }
};
```

**核心思路：** Boyer-Moore 投票算法：维护候选人和计数。遇到相同元素 cnt++，不同元素 cnt--，cnt==0 时换候选人。

**易错点：** 前提是多数元素一定存在；投票算法只能找到候选，不能验证（本题不需要验证）。

---

### 3. 颜色分类

[🔗 LeetCode 原题](https://leetcode.cn/problems/sort-colors/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定一个包含红色、白色和蓝色、共 n 个元素的数组 nums ，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。我们使用整数 0、1 和 2 分别表示红色、白色和蓝色。必须在不使用库内置的 sort 函数的情况下解决这个问题。

```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, i = 0;
        while (i <= r) {
            if (nums[i] == 0) swap(nums[i++], nums[l++]); // 0 换到左边
            else if (nums[i] == 2) swap(nums[i], nums[r--]); // 2 换到右边，i 不增
            else i++;
        }
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(1)

**核心考点：** 数组、双指针、排序

**核心思路：** 三路快排/双指针：0 换到左，2 换到右，1 自然居中。

**易错点：** 遇到 2 时 i 不能自增（换来的可能是 0）；循环条件 i<=r。

---

### 4. 下一个排列

[🔗 LeetCode 原题](https://leetcode.cn/problems/next-permutation/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 整数数组的一个排列就是将其所有成员以序列或线性顺序排列。下一个排列是指其整数的下一个字典序更大的排列。如果不存在下一个更大的排列，则必须将数组重新排列为字典序最小的排列（即升序排列）。必须原地修改，只允许使用额外常数空间。

```cpp
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n - 2;
        // 从右找第一个升序对 nums[i] < nums[i+1]
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) j--;
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end()); // 后缀改为升序
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(1)

**核心考点：** 数组、双指针

**核心思路：** 找右侧第一个可增大的位置，与右侧刚好更大的数交换，再反转后缀。

**易错点：** 找不到升序对则整体反转；交换对象是「刚好大于」而非最大。

---

### 5. 寻找重复数

[🔗 LeetCode 原题](https://leetcode.cn/problems/find-the-duplicate-number/) | 🟡 中等 | ⚠️ **未 AC**（参考题解）

**题目描述：** 给定一个包含 n + 1 个整数的数组 nums ，其数字都在 [1, n] 范围内（包括 1 和 n），可知至少存在一个重复的整数。假设 nums 只有一个重复的整数，返回这个重复的数。你设计的解决方案必须不修改数组 nums 且只用常量级 O(1) 的额外空间。

```cpp
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 弗洛伊德判环：下标视为 next 指针
        int slow = 0, fast = 0;
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
```

**时空复杂度：** 时间 O(n)，空间 O(1)

**核心考点：** 位运算、数组、双指针、二分查找

**核心思路：** 把数组看成链表（i → nums[i]），重复数即环入口，用快慢指针找。

**易错点：** 不能修改数组；第一次相遇后慢指针归零再同步走。

---
