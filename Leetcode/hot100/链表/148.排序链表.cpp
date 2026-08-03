/*
 * @lc app=leetcode.cn id=148 lang=cpp
 *
 * [148] 排序链表
 *
 * https://leetcode.cn/problems/sort-list/description/
 *
 * algorithms
 * Medium (67.71%)
 * Likes:    2812
 * Dislikes: 0
 * Total Accepted:    980.4K
 * Total Submissions: 1.4M
 * Testcase Example:  '[4,2,1,3]'
 *
 * 给你链表的头结点 head ，请将其按 升序 排列并返回 排序后的链表 。
 *
 *
 *
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：head = [4,2,1,3]
 * 输出：[1,2,3,4]
 *
 *
 * 示例 2：
 *
 *
 * 输入：head = [-1,5,3,4,0]
 * 输出：[-1,0,3,4,5]
 *
 *
 * 示例 3：
 *
 *
 * 输入：head = []
 * 输出：[]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 链表中节点的数目在范围 [0, 5 * 10^4] 内
 * -10^5 <= Node.val <= 10^5
 *
 *
 *
 *
 * 进阶：你可以在 O(n log n) 时间复杂度和常数级空间复杂度下，对链表进行排序吗？
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
    ListNode *sortList(ListNode *head) {
        if (!head || !head->next) {
            return head;
        }
        // 快慢指针找中点，断开成两半
        // 注意这里 fast 不能从 head
        // 开始，而是从下一个开始（可以思考只有两个节点时的情况）
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow->next;
        slow->next = nullptr; // 断开两个链表
        return merge(sortList(head), sortList(mid));
    }
    ListNode *merge(ListNode *a, ListNode *b) {
        ListNode *dummyHead = new ListNode(), *p = dummyHead;
        while (a && b) {
            if (a->val < b->val) {
                p->next = a;
                a = a->next;
            } else {
                p->next = b;
                b = b->next;
            }
            p = p->next;
        }
        p->next = a ? a : b;
        return dummyHead->next;
    }
};
// @lc code=end
