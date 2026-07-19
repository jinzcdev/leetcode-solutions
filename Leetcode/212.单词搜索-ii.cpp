/*
 * @lc app=leetcode.cn id=212 lang=cpp
 *
 * [212] 单词搜索 II
 *
 * https://leetcode.cn/problems/word-search-ii/description/
 *
 * algorithms
 * Hard (43.69%)
 * Likes:    998
 * Dislikes: 0
 * Total Accepted:    144.2K
 * Total Submissions: 330.1K
 * Testcase Example:
 '[["o","a","a","n"],["e","t","a","e"],["i","h","k","r"],["i","f","l","v"]]\n' +
  '["oath","pea","eat","rain"]'
 *
 * 给定一个 m x n 二维字符网格 board 和一个单词（字符串）列表
 words， 返回所有二维网格上的单词 。
 *
 * 单词必须按照字母顺序，通过 相邻的单元格
 * 内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母在一个单词中不允许被重复使用。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：board =
 * [["o","a","a","n"],["e","t","a","e"],["i","h","k","r"],["i","f","l","v"]],
 * words = ["oath","pea","eat","rain"]
 * 输出：["eat","oath"]
 *
 *
 * 示例 2：
 *
 *
 * 输入：board = [["a","b"],["c","d"]], words = ["abcb"]
 * 输出：[]
 *
 *
 *
 *
 * 提示：
 *
 *
 * m == board.length
 * n == board[i].length
 * 1 <= m, n <= 12
 * board[i][j] 是一个小写英文字母
 * 1 <= words.length <= 3 * 10^4
 * 1 <= words[i].length <= 10
 * words[i] 由小写英文字母组成
 * words 中的所有字符串互不相同
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
/*
从每个字母开始dfs搜索所有可能的单词，然后在遍历过程中，判断这个单词是否在字典树中出现过。
*/
class Solution {
  public:
    struct Node {
        string word;
        bool isWord = false;
        unordered_map<char, Node *> children;
    };
    Node *trie = new Node();
    void insert(string word) {
        Node *node = trie;
        for (int i = 0; i < word.size(); i++) {
            char ch = word[i];
            if (node->children[ch] == nullptr) {
                node->children[ch] = new Node();
            }
            node = node->children[ch];
        }
        node->word = word;
        node->isWord = true;
    }
    set<string> st;
    string path;
    int m, n, d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    void dfs(vector<vector<char>> &board, int x, int y,
             vector<vector<bool>> &vis, Node *node) {
        if (!node->children.count(board[x][y])) {
            return;
        }
        Node *tmp = node->children[board[x][y]];
        if (tmp->isWord) {
            st.insert(tmp->word);
        }
        vis[x][y] = true;
        for (int i = 0; i < 4; i++) {
            int newX = x + d[i][0], newY = y + d[i][1];
            if (newX >= 0 && newX < m && newY >= 0 && newY < n &&
                !vis[newX][newY]) {
                dfs(board, newX, newY, vis, tmp);
            }
        }
        vis[x][y] = false;
    }
    vector<string> findWords(vector<vector<char>> &board,
                             vector<string> &words) {
        if (board.empty()) {
            return {};
        }
        m = board.size();
        n = board[0].size();
        for (auto word : words) {
            insert(word);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                vector<vector<bool>> vis(m, vector<bool>(n, false));
                dfs(board, i, j, vis, trie);
            }
        }
        vector<string> ans;
        for (auto it : st) {
            ans.push_back(it);
        }
        return ans;
    }
};
// @lc code=end
