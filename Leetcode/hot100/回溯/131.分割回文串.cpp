/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 *
 * https://leetcode.cn/problems/palindrome-partitioning/description/
 *
 * algorithms
 * Medium (75.07%)
 * Likes:    2253
 * Dislikes: 0
 * Total Accepted:    836K
 * Total Submissions: 1.1M
 * Testcase Example:  '"aab"'
 *
 * 给你一个字符串 s，请你将 s 分割成一些 子串，使每个子串都是 回文串 。返回 s 所有可能的分割方案。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：s = "aab"
 * 输出：[["a","a","b"],["aa","b"]]
 *
 *
 * 示例 2：
 *
 *
 * 输入：s = "a"
 * 输出：[["a"]]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= s.length <= 16
 * s 仅由小写英文字母组成
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
   public:
    vector<vector<string>> ans;
    vector<string> path;
    bool isPali(string &s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    void dfs(string &s, int i) {
        if (i == s.size()) {
            ans.push_back(path);
            return;
        }
        for (int j = i; j < s.size(); j++) {
            if (isPali(s, i, j)) {
                path.push_back(s.substr(i, j - i + 1));
                dfs(s, j + 1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        dfs(s, 0);
        return ans;
    }
};
// @lc code=end
