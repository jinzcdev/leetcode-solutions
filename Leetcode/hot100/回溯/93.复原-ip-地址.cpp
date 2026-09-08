/*
 * @lc app=leetcode.cn id=93 lang=cpp
 *
 * [93] 复原 IP 地址
 *
 * https://leetcode.cn/problems/restore-ip-addresses/description/
 *
 * algorithms
 * Medium (62.32%)
 * Likes:    1614
 * Dislikes: 0
 * Total Accepted:    599K
 * Total Submissions: 960.4K
 * Testcase Example:  '"25525511135"'
 *
 * 有效 IP 地址 正好由四个整数（每个整数位于 0 到 255 之间组成，且不能含有前导 0），整数之间用 '.' 分隔。
 *
 *
 * 例如："0.1.2.201" 和 "192.168.1.1" 是 有效 IP 地址，但是 "0.011.255.245"、"192.168.1.312"
 * 和 "192.168@1.1" 是 无效 IP 地址。
 *
 *
 * 给定一个只包含数字的字符串 s ，用以表示一个 IP 地址，返回所有可能的有效 IP 地址，这些地址可以通过在 s 中插入 '.'
 * 来形成。你 不能 重新排序或删除 s 中的任何数字。你可以按 任何 顺序返回答案。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：s = "25525511135"
 * 输出：["255.255.11.135","255.255.111.35"]
 *
 *
 * 示例 2：
 *
 *
 * 输入：s = "0000"
 * 输出：["0.0.0.0"]
 *
 *
 * 示例 3：
 *
 *
 * 输入：s = "101023"
 * 输出：["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= s.length <= 20
 * s 仅由数字组成
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
   public:
    vector<string> ans;
    void dfs(string s, int start, int cnt, vector<string>& path) {
        if (cnt <= 3 && (4 - cnt) * 3 < s.size() - start) {
            return;
        }
        if (cnt == 3) {
            string t = s.substr(start);
            if (start == s.size() || t.size() > 3 || (t.size() > 1 && t[0] == '0') || stoi(t) > 255) {
                return;
            }
            string tmp;
            for (int i = 0; i < 3; i++) {
                tmp += path[i] + ".";
            }
            tmp += s.substr(start);
            ans.push_back(tmp);
            return;
        }
        int sum = 0;
        for (int i = start, j = 1; i < s.size() && j <= 3; i++, j++) {
            if (j > 1 && s[start] == '0') {
                break;
            }
            sum = sum * 10 + (s[i] - '0');
            if (sum <= 255) {
                path.push_back(s.substr(start, j));
                dfs(s, i + 1, cnt + 1, path);
                path.pop_back();
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> path;
        dfs(s, 0, 0, path);
        return ans;
    }
};
// @lc code=end
