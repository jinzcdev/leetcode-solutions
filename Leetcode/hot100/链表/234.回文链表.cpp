/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 *
 * https://leetcode.cn/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (58.24%)
 * Likes:    2270
 * Dislikes: 0
 * Total Accepted:    1.3M
 * Total Submissions: 2.2M
 * Testcase Example:  '[1,2,2,1]'
 *
 * 给你一个单链表的头节点 head ，请你判断该链表是否为回文链表。如果是，返回 true
 * ；否则，返回 false 。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：head = [1,2,2,1]
 * 输出：true
 *
 *
 * 示例 2：
 *
 *
 * 输入：head = [1,2]
 * 输出：false
 *
 *
 *
 *
 * 提示：
 *
 *
 * 链表中节点数目在范围[1, 10^5] 内
 * 0 <= Node.val <= 9
 *
 *
 *
 *
 * 进阶：你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？
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
    ListNode *reverseList(ListNode *head) {
        ListNode *pre = nullptr, *p = head;
        while (p != nullptr) {
            ListNode *q = p;
            p = p->next;
            q->next = pre;
            pre = q;
        }
        return pre;
    }

    bool isPalindrome(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode *slow = head, *fast = head;
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
            if (fast != nullptr) {
                fast = fast->next;
            }
        }
        ListNode *p = head, *q = reverseList(slow);
        while (q != nullptr) {
            if (p->val != q->val) {
                return false;
            }
            p = p->next;
            q = q->next;
        }
        return true;
    }
};
// @lc code=end
