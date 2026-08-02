/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 *
 * https://leetcode.cn/problems/swap-nodes-in-pairs/description/
 *
 * algorithms
 * Medium (75.05%)
 * Likes:    2652
 * Dislikes: 0
 * Total Accepted:    1.4M
 * Total Submissions: 1.9M
 * Testcase Example:  '[1,2,3,4]'
 *
 * 给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：head = [1,2,3,4]
 * 输出：[2,1,4,3]
 *
 *
 * 示例 2：
 *
 *
 * 输入：head = []
 * 输出：[]
 *
 *
 * 示例 3：
 *
 *
 * 输入：head = [1]
 * 输出：[1]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 链表中节点的数目在范围 [0, 100] 内
 * 0 <= Node.val <= 100
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// @lc code=start
class Solution {
  public:
    ListNode *swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *p = head, *q = head->next;
        p->next = swapPairs(q->next);
        q->next = p;
        return q;
    }
};
/*
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* dummyHead = new ListNode(0, head);
        ListNode *pre = dummyHead, *p = head;
        while (p != nullptr && p->next != nullptr) {
            ListNode* q = p->next;
            p->next = q->next;
            q->next = p;
            pre->next = q;
            pre = p;
            p = p->next;
        }
        return dummyHead->next;
    }
};
*/
// @lc code=end
