/*
 * @lc app=leetcode.cn id=230 lang=cpp
 *
 * [230] 二叉搜索树中第 K 小的元素
 *
 * https://leetcode.cn/problems/kth-smallest-element-in-a-bst/description/
 *
 * algorithms
 * Medium (79.81%)
 * Likes:    1117
 * Dislikes: 0
 * Total Accepted:    781.6K
 * Total Submissions: 979.4K
 * Testcase Example:  '[3,1,4,null,2]\n1'
 *
 * 给定一个二叉搜索树的根节点 root ，和一个整数 k
 * ，请你设计一个算法查找其中第 k 小的元素（k 从 1 开始计数）。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：root = [3,1,4,null,2], k = 1
 * 输出：1
 *
 *
 * 示例 2：
 *
 *
 * 输入：root = [5,3,6,2,4,null,null,1], k = 3
 * 输出：3
 *
 *
 *
 *
 *
 *
 * 提示：
 *
 *
 * 树中的节点数为 n 。
 * 1 <= k <= n <= 10^4
 * 0 <= Node.val <= 10^4
 *
 *
 *
 *
 * 进阶：如果二叉搜索树经常被修改（插入/删除操作）并且你需要频繁地查找第 k
 * 小的值，你将如何优化算法？
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};
// @lc code=start
class Solution {
  public:
    int kthSmallest(TreeNode *root, int k) {
        stack<TreeNode *> st;
        TreeNode *p = root;
        while (!st.empty() || p) {
            if (p) {
                st.push(p);
                p = p->left;
            } else {
                if (--k == 0) {
                    return st.top()->val;
                }
                p = st.top()->right;
                st.pop();
            }
        }
        return -1;
    }
};
// @lc code=end
