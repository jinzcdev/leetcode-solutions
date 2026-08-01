/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 *
 * https://leetcode.cn/problems/word-search/description/
 *
 * algorithms
 * Medium (51.24%)
 * Likes:    2212
 * Dislikes: 0
 * Total Accepted:    929.8K
 * Total Submissions: 1.8M
 * Testcase Example:
 * '[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]\n"ABCCED"'
 *
 * 给定一个 m x n 二维字符网格 board 和一个字符串单词 word 。如果 word
 * 存在于网格中，返回 true ；否则，返回 false 。
 *
 * 单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：board = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']], word =
 * "ABCCED"
 * 输出：true
 *
 *
 * 示例 2：
 *
 *
 * 输入：board = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']], word =
 * "SEE"
 * 输出：true
 *
 *
 * 示例 3：
 *
 *
 * 输入：board = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']], word =
 * "ABCB"
 * 输出：false
 *
 *
 *
 *
 * 提示：
 *
 *
 * m == board.length
 * n = board[i].length
 * 1 <= m, n <= 6
 * 1 <= word.length <= 15
 * board 和 word 仅由大小写英文字母组成
 *
 *
 *
 *
 * 进阶：你可以使用搜索剪枝的技术来优化解决方案，使其在 board
 * 更大的情况下可以更快解决问题？
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
  public:
    int m, n, d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isValid(int x, int y) { return x >= 0 && x < m && y >= 0 && y < n; }
    bool dfs(vector<vector<char>> &board, string word, int x, int y, int i,
             vector<vector<bool>> &vis) {
        if (!isValid(x, y) || (i < word.size() && board[x][y] != word[i])) {
            return false;
        }
        if (i >= word.size() - 1) {
            return true;
        }
        vis[x][y] = true;
        bool flag = false;
        for (int j = 0; j < 4; j++) {
            int newX = x + d[j][0], newY = y + d[j][1];
            if (isValid(newX, newY) && !vis[newX][newY] &&
                (flag = dfs(board, word, newX, newY, i + 1, vis))) {
                // 这里不能直接 return, 因为要恢复当前 (x, y) 的可访问性，dfs
                // 的链路并不是单一链路，要支持回溯后二次搜索
                break;
            }
        }
        vis[x][y] = false;
        return flag;
    }
    bool exist(vector<vector<char>> &board, string word) {
        if (board.empty()) {
            return false;
        }
        m = board.size();
        n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0]) {
                    vector<vector<bool>> vis(m, vector<bool>(n));
                    if (dfs(board, word, i, j, 0, vis)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
// @lc code=end
