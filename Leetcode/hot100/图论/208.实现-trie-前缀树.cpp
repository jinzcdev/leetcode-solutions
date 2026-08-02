/*
 * @lc app=leetcode.cn id=208 lang=cpp
 *
 * [208] 实现 Trie (前缀树)
 *
 * https://leetcode.cn/problems/implement-trie-prefix-tree/description/
 *
 * algorithms
 * Medium (72.54%)
 * Likes:    1974
 * Dislikes: 0
 * Total Accepted:    603.8K
 * Total Submissions: 832.6K
 * Testcase Example:
 '["Trie","insert","search","search","startsWith","insert","search"]\n' +
  '[[],["apple"],["apple"],["app"],["app"],["app"],["app"]]'
 *
 * Trie（发音类似 "try"）或者说 前缀树
 * 是一种树形数据结构，用于高效地存储和检索字符串数据集中的键。这一数据结构有相当多的应用情景，例如自动补全和拼写检查。
 *
 * 请你实现 Trie 类：
 *
 *
 * Trie() 初始化前缀树对象。
 * void insert(String word) 向前缀树中插入字符串 word 。
 * boolean search(String word) 如果字符串 word 在前缀树中，返回
 true（即，在检索之前已经插入）；否则，返回
 * false 。
 * boolean startsWith(String prefix) 如果之前已经插入的字符串 word 的前缀之一为
 prefix ，返回 true
 * ；否则，返回 false 。
 *
 *
 *
 *
 * 示例：
 *
 *
 * 输入
 * ["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
 * [[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
 * 输出
 * [null, null, true, false, true, null, true]
 *
 * 解释
 * Trie trie = new Trie();
 * trie.insert("apple");
 * trie.search("apple");   // 返回 True
 * trie.search("app");     // 返回 False
 * trie.startsWith("app"); // 返回 True
 * trie.insert("app");
 * trie.search("app");     // 返回 True
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= word.length, prefix.length <= 2000
 * word 和 prefix 仅由小写英文字母组成
 * insert、search 和 startsWith 调用次数 总计 不超过 3 * 10^4 次
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Trie {
  public:
    unordered_map<char, Trie *> children;
    bool isWord;
    Trie() { this->isWord = false; }

    void insert(string word) {
        Trie *node = this;
        for (const auto &ch : word) {
            if (node->children[ch] == nullptr) {
                node->children[ch] = new Trie();
            }
            node = node->children[ch];
        }
        node->isWord = true;
    }

    bool search(string word) {
        Trie *node = searchPrefix(word);
        return node != nullptr && node->isWord;
    }

    bool startsWith(string prefix) { return searchPrefix(prefix) != nullptr; }

    Trie *searchPrefix(string prefix) {
        Trie *node = this;
        for (const auto &ch : prefix) {
            if (node->children[ch] == nullptr) {
                return nullptr;
            }
            node = node->children[ch];
        }
        return node;
    }
};
// @lc code=end
