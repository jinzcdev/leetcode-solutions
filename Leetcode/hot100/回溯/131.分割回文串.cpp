/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 *
 * https://leetcode.cn/problems/palindrome-partitioning/description/
 *
 * algorithms
 * Medium (75.15%)
 * Likes:    2201
 * Dislikes: 0
 * Total Accepted:    768.4K
 * Total Submissions: 1M
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

// @lc code=start
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
// @lc code=end

