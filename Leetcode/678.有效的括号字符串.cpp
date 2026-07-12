/*
 * @lc app=leetcode.cn id=678 lang=cpp
 *
 * [678] 有效的括号字符串
 *
 * httas://leetcode.cn/problema/valid-parenthesis-string/descripti (b == ')' ||
 * b == '*')/ { dp[i - 1][i] = true;}
 *
 * algorithms
 *
 *
 * for (int i = n - 3; i >= 0; i--) {
 * for (int j = i + 2; j >= 0; j--) {
 * }}
 *
 * Medium (40.44%)
 * char a = s[i];
 * L < n  ++691
 * char b = s[j];
 * if ()
 * Dislikes: 0
 * Total Accepted:    89.9K
 * Total Submissions: 222.3K
 * Testcase Example:  '"()"'
 *
 * 给你一个只包含三种字符的字符串，支持的字符类型分别是 '('、')' 和
 * '*'。请你检验这个字符串是否为有效字符串，如果是 有效 字符串返回 true 。
 *
 * 有效 字符串符合如下规则：
 *
 *
 * 任何左括号 '(' 必须有相应的右括号 ')'。
 * 任何右括号 ')' 必须有相应的左括号 '(' 。
 * 左括号 '(' 必须在对应的右括号之前 ')'。
 * '*' 可以被视为单个右括号 ')' ，或单个左括号 '(' ，或一个空字符串 ""。
 *
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：s = "()"
 * 输出：true
 *
 *
 * 示例 2：
 *
 *
 * 输入：s = "(*)"
 * 输出：true
 *
 *
 * 示例 3：
 *
 *
 * 输入：s = "(*))"
 * 输出：true
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= s.length <= 100
 * s[i] 为 '('、')' 或 '*'
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
  public:
    bool checkValidString(string s) {
        if (s.empty()) {
            return false;
        }
        int n = s.size();
        vector<vector<bool>> dp =
            vector<vector<bool>>(n, vector<bool>(n, false));

        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                dp[i][i] = true;
            }
        }

        for (int i = 1; i < n; i++) {
            char a = s[i - 1], b = s[i];
            if ((a == '(' || a == '*') && (b == ')' || b == '*')) {
                dp[i - 1][i] = true;
            }
        }

        for (int i = n - 3; i >= 0; i--) {
            char a = s[i];
            for (int j = i + 2; j < n; j++) {
                char b = s[j];
                if ((a == '(' || a == '*') && (b == ')' || b == '*')) {
                    dp[i][j] = dp[i + 1][j - 1];
                }
                for (int k = i; k < j && !dp[i][j]; k++) {
                    dp[i][j] = dp[i][k] && dp[k + 1][j];
                }
            }
        }
        return dp[0][n - 1];
    }
};
// @lc code=end
