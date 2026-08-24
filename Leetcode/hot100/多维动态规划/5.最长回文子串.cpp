/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 *
 * https://leetcode.cn/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (40.97%)
 * Likes:    8142
 * Dislikes: 0
 * Total Accepted:    2.4M
 * Total Submissions: 5.9M
 * Testcase Example:  '"babad"'
 *
 * 给你一个字符串 s，找到 s 中最长的 回文 子串。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：s = "babad"
 * 输出："bab"
 * 解释："aba" 同样是符合题意的答案。
 *
 *
 * 示例 2：
 *
 *
 * 输入：s = "cbbd"
 * 输出："bb"
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= s.length <= 1000
 * s 仅由数字和英文字母组成
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
   public:
    int start, maxLen = 1;
    void solve(string &s, int left, int right) {
        int l = left, r = right;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        if (r - l - 1 > maxLen) {
            maxLen = r - l - 1;
            start = l + 1;
        }
    }
    string longestPalindrome(string s) {
        if (s.empty()) {
            return "";
        }
        for (int i = 0; i < s.size(); i++) {
            solve(s, i, i + 1);
            solve(s, i, i);
        }
        return s.substr(start, maxLen);
    }
};
// @lc code=end
