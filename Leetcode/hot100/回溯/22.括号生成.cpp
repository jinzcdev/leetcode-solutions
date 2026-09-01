/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 *
 * https://leetcode.cn/problems/generate-parentheses/description/
 *
 * algorithms
 * Medium (79.04%)
 * Likes:    4141
 * Dislikes: 0
 * Total Accepted:    1.3M
 * Total Submissions: 1.7M
 * Testcase Example:  '3'
 *
 * 数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：n = 3
 * 输出：["((()))","(()())","(())()","()(())","()()()"]
 *
 *
 * 示例 2：
 *
 *
 * 输入：n = 1
 * 输出：["()"]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= n <= 8
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
   private:
    vector<string> ans;
    void dfs(string& path, int sum, int i, int n) {
        if (sum > (n >> 1)) {
            return;
        }
        if (i == n) {
            if (sum == 0) {
                ans.push_back(path);
            }
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

// @lc code=end
