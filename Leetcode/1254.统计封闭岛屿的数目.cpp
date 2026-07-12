/*
 * @lc app=leetcode.cn id=1254 lang=cpp
 *
 * [1254] 统计封闭岛屿的数目
 *
 * https://leetcode.cn/problems/number-of-closed-islands/description/
 *
 * algorithms
 * Medium (64.71%)
 * Likes:    343
 * Dislikes: 0
 * Total Accepted:    82.7K
 * Total Submissions: 127.9K
 * Testcase Example:
 * '[[1,1,1,1,1,1,1,0],[1,0,0,0,0,1,1,0],[1,0,1,0,1,1,1,0],[1,0,0,0,0,1,0,1],[1,1,1,1,1,1,1,0]]'
 *
 * 二维矩阵 grid 由 0 （土地）和 1 （水）组成。岛是由最大的4个方向连通的
 * 0 组成的群，封闭岛是一个 完全 由1包围（左、上、右、下）的岛。
 *
 * 请返回 封闭岛屿 的数目。
 *
 *
 *
 * 示例 1：
 *
 *
 *
 *
 * 输入：grid =
 * [[1,1,1,1,1,1,1,0],[1,0,0,0,0,1,1,0],[1,0,1,0,1,1,1,0],[1,0,0,0,0,1,0,1],[1,1,1,1,1,1,1,0]]
 * 输出：2
 * 解释：
 * 灰色区域的岛屿是封闭岛屿，因为这座岛屿完全被水域包围（即被 1 区域包围）。
 *
 * 示例 2：
 *
 *
 *
 *
 * 输入：grid = [[0,0,1,0,0],[0,1,0,1,0],[0,1,1,1,0]]
 * 输出：1
 *
 *
 * 示例 3：
 *
 *
 * 输入：grid = [[1,1,1,1,1,1,1],
 * [1,0,0,0,0,0,1],
 * [1,0,1,1,1,0,1],
 * [1,0,1,0,1,0,1],
 * [1,0,1,1,1,0,1],
 * [1,0,0,0,0,0,1],
 * ⁠            [1,1,1,1,1,1,1]]
 * 输出：2
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= grid.length, grid[0].length <= 100
 * 0 <= grid[i][j] <=1
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
   public:
    bool hasEdge = false;
    int n, m;
    bool vis[110][110];
    int d[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    bool isValid(int x, int y) { return x >= 0 && x < n && y >= 0 && y < m; }

    void dfs(int x, int y, vector<vector<int>>& grid) {
        if (!isValid(x, y) || vis[x][y]) {
            return;
        }
        vis[x][y] = true;
        if (x == 0 || x == n - 1 || y == 0 || y == m - 1) {
            hasEdge = true;
        }
        for (int i = 0; i < 4; i++) {
            int newX = x + d[i][0], newY = y + d[i][1];
            if (isValid(newX, newY) && grid[newX][newY] == 0) {
                dfs(newX, newY, grid);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                if (grid[i][j] == 0 && !vis[i][j]) {
                    hasEdge = false;
                    dfs(i, j, grid);
                    if (!hasEdge) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end
