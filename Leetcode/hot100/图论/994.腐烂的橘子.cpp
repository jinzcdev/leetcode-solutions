/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] 腐烂的橘子
 *
 * https://leetcode.cn/problems/rotting-oranges/description/
 *
 * algorithms
 * Medium (55.65%)
 * Likes:    1188
 * Dislikes: 0
 * Total Accepted:    494.3K
 * Total Submissions: 888.1K
 * Testcase Example:  '[[2,1,1],[1,1,0],[0,1,1]]'
 *
 * 在给定的 m x n 网格 grid 中，每个单元格可以有以下三个值之一：
 *
 *
 * 值 0 代表空单元格；
 * 值 1 代表新鲜橘子；
 * 值 2 代表腐烂的橘子。
 *
 *
 * 每分钟，腐烂的橘子 周围 4 个方向上相邻 的新鲜橘子都会腐烂。
 *
 * 返回
 * 直到单元格中没有新鲜橘子为止所必须经过的最小分钟数。如果不可能，返回 -1 。
 *
 *
 *
 * 示例 1：
 *
 *
 *
 *
 * 输入：grid = [[2,1,1],[1,1,0],[0,1,1]]
 * 输出：4
 *
 *
 * 示例 2：
 *
 *
 * 输入：grid = [[2,1,1],[0,1,1],[1,0,1]]
 * 输出：-1
 * 解释：左下角的橘子（第 2 行， 第 0 列）永远不会腐烂，因为腐烂只会发生在 4
 * 个方向上。
 *
 *
 * 示例 3：
 *
 *
 * 输入：grid = [[0,2]]
 * 输出：0
 * 解释：因为 0 分钟时已经没有新鲜橘子了，所以答案就是 0 。
 *
 *
 *
 *
 * 提示：
 *
 *
 * m == grid.length
 * n == grid[i].length
 * 1 <= m, n <= 10
 * grid[i][j] 仅为 0、1 或 2
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
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
                auto node = q.front();
                q.pop();
                for (int j = 0; j < 4; j++) {
                    int newX = node.first + d[j][0];
                    int newY = node.second + d[j][1];
                    if (newX >= 0 && newX < m && newY >= 0 && newY < n &&
                        grid[newX][newY] == 1) {
                        freshCnt--;
                        // 这里之前写错了 grid[newX][newY] == 2
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
// @lc code=end
