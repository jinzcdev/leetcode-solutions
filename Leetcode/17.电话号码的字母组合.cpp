/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 *
 * https://leetcode.cn/problems/letter-combinations-of-a-phone-number/description/
 *
 * algorithms
 * Medium (63.67%)
 * Likes:    3276
 * Dislikes: 0
 * Total Accepted:    1.4M
 * Total Submissions: 2.2M
 * Testcase Example:  '"23"'
 *
 * 给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按
 * 任意顺序 返回。
 *
 * 给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。
 *
 *
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：digits = "23"
 * 输出：["ad","ae","af","bd","be","bf","cd","ce","cf"]
 *
 *
 * 示例 2：
 *
 *
 * 输入：digits = "2"
 * 输出：["a","b","c"]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= digits.length <= 4
 * digits[i] 是范围 ['2', '9'] 的一个数字。
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
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
// @lc code=end
