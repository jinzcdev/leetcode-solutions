/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode.cn/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (68.23%)
 * Likes:    4092
 * Dislikes: 0
 * Total Accepted:    2.5M
 * Total Submissions: 3.7M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新的 升序
 * 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：l1 = [1,2,4], l2 = [1,3,4]
 * 输出：[1,1,2,3,4,4]
 *
 *
 * 示例 2：
 *
 *
 * 输入：l1 = [], l2 = []
 * 输出：[]
 *
 *
 * 示例 3：
 *
 *
 * 输入：l1 = [], l2 = [0]
 * 输出：[0]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 两个链表的节点数目范围是 [0, 50]
 * -100
 * l1 和 l2 均按 非递减顺序 排列
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (list1 == nullptr || list2 == nullptr) {
            return list1 == nullptr ? list2 : list1;
        }
        ListNode *dummyHead = new ListNode(), *r = dummyHead;
        ListNode *p = list1, *q = list2;
        while (p != nullptr && q != nullptr) {
            if (p->val <= q->val) {
                r->next = p;
                p = p->next;
            } else {
                r->next = q;
                q = q->next;
            }
            r = r->next;
        }
        if (p != nullptr) {
            r->next = p;
        }
        if (q != nullptr) {
            r->next = q;
        }
        return dummyHead->next;
    }
};
// @lc code=end
