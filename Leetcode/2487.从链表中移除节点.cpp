/*
 * @lc app=leetcode.cn id=2487 lang=cpp
 *
 * [2487] 从链表中移除节点
 *
 * https://leetcode.cn/problems/remove-nodes-from-linked-list/description/
 *
 * algorithms
 * Medium (75.50%)
 * Likes:    153
 * Dislikes: 0
 * Total Accepted:    49.7K
 * Total Submissions: 65.8K
 * Testcase Example:  '[5,2,13,3,8]'
 *
 * 给你一个链表的头节点 head 。
 *
 * 移除每个右侧有一个更大数值的节点。
 *
 * 返回修改后链表的头节点 head 。
 *
 *
 *
 * 示例 1：
 *
 *
 *
 *
 * 输入：head = [5,2,13,3,8]
 * 输出：[13,8]
 * 解释：需要移除的节点是 5 ，2 和 3 。
 * - 节点 13 在节点 5 右侧。
 * - 节点 13 在节点 2 右侧。
 * - 节点 8 在节点 3 右侧。
 *
 *
 * 示例 2：
 *
 *
 * 输入：head = [1,1,1,1]
 * 输出：[1,1,1,1]
 * 解释：每个节点的值都是 1 ，所以没有需要移除的节点。
 *
 *
 *
 *
 * 提示：
 *
 *
 * 给定列表中的节点数目在范围 [1, 10^5] 内
 * 1 <= Node.val <= 10^5
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// @lc code=start
class Solution {
   public:
    ListNode* removeNodes(ListNode* head) {
        vector<ListNode*> v;
        for (ListNode* p = head; p != nullptr; p = p->next) {
            v.emplace_back(p);
        }
        int n = v.size();
        vector<int> dp(n);
        dp[n - 1] = v[n - 1]->val;
        for (int i = n - 2; i >= 0; i--) {
            dp[i] = max(v[i]->val, dp[i + 1]);
        }
        ListNode* pre;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i]->val >= dp[i]) {
                v[i]->next = pre;
                pre = v[i];
            }
        }
        return pre;
    }
};
// @lc code=end
