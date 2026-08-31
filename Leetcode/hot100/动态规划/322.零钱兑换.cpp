/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 *
 * https://leetcode.cn/problems/coin-change/description/
 *
 * algorithms
 * Medium (53.25%)
 * Likes:    3301
 * Dislikes: 0
 * Total Accepted:    1.5M
 * Total Submissions: 2.8M
 * Testcase Example:  '[1,2,5]\n11'
 *
 * 给你一个整数数组 coins ，表示不同面额的硬币；以及一个整数 amount ，表示总金额。
 *
 * 计算并返回可以凑成总金额所需的 最少的硬币个数 。如果没有任何一种硬币组合能组成总金额，返回 -1 。
 *
 * 你可以认为每种硬币的数量是无限的。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：coins = [1, 2, 5], amount = 11
 * 输出：3
 * 解释：11 = 5 + 5 + 1
 *
 * 示例 2：
 *
 *
 * 输入：coins = [2], amount = 3
 * 输出：-1
 *
 * 示例 3：
 *
 *
 * 输入：coins = [1], amount = 0
 * 输出：0
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= coins.length <= 12
 * 1 <= coins[i] <= 2^31 - 1
 * 0 <= amount <= 10^4
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
   public:
    int coinChange(vector<int>& coins, int amount) {
        if (coins.empty() || amount <= 0) {
            return 0;
        }
        queue<int> q;
        q.push(amount);
        int depth = 0;
        vector<bool> vis(amount + 1);
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                int now = q.front();
                q.pop();
                for (int j = 0; j < coins.size(); j++) {
                    int tmp;
                    if ((tmp = now - coins[j]) == 0) {
                        return depth + 1;
                    }
                    if (tmp > 0 && !vis[tmp]) {
                        q.push(tmp);
                        vis[tmp] = true;
                    }
                }
            }
            depth++;
        }
        return -1;
    }
};
class SolutionDFS {
   public:
    int memo[10010];
    int dfs(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        if (amount < 0) return -1;
        if (memo[amount] != INT_MAX) {
            return memo[amount];
        }
        int minCnt = INT_MAX;
        for (int i = 0; i < coins.size(); i++) {
            int tmp = dfs(coins, amount - coins[i]);
            if (tmp >= 0 && tmp < minCnt) {
                minCnt = tmp;
            }
        }
        return memo[amount] = minCnt != INT_MAX ? minCnt + 1 : -1;
    }
    int coinChange(vector<int>& coins, int amount) {
        if (coins.empty() || amount <= 0) {
            return 0;
        }
        fill(memo, memo + 10010, INT_MAX);
        return dfs(coins, amount);
    }
};
// @lc code=end
