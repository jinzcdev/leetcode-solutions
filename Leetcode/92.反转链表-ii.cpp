/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
 *
 * https://leetcode.cn/problems/reverse-linked-list-ii/description/
 *
 * algorithms
 * Medium (58.40%)
 * Likes:    2118
 * Dislikes: 0
 * Total Accepted:    768.5K
 * Total Submissions: 1.3M
 * Testcase Example:  '[1,2,3,4,5]\n2\n4'
 *
 * 给你单链表的头指针 head 和两个整数 left 和 right ，其中 left  。请你反转从位置 left 到位置 right 的链表节点，返回
 * 反转后的链表 。
 *
 *
 * 示例 1：
 *
 *
 * 输入：head = [1,2,3,4,5], left = 2, right = 4
 * 输出：[1,4,3,2,5]
 *
 *
 * 示例 2：
 *
 *
 * 输入：head = [5], left = 1, right = 1
 * 输出：[5]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 链表中节点数目为 n
 * 1
 * -500
 * 1
 *
 *
 *
 *
 * 进阶： 你可以使用一趟扫描完成反转吗？
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left >= right) {
            return head;
        }
        ListNode* dummyHead = new ListNode(0, head);
        ListNode *pre = dummyHead, *tail = dummyHead->next;
        for (int i = 1; i < left && tail; i++) {
            pre = pre->next;
            tail = tail->next;
        }
        if (!tail) {
            return head;
        }
        for (int i = right - left; i > 0; i--) {
            ListNode* q = tail->next;
            tail->next = q->next;
            q->next = pre->next;
            pre->next = q;
        }
        return dummyHead->next;
    }
};
// @lc code=end
