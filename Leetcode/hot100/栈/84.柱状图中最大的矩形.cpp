/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 *
 * https://leetcode.cn/problems/largest-rectangle-in-histogram/description/
 *
 * algorithms
 * Hard (49.65%)
 * Likes:    3179
 * Dislikes: 0
 * Total Accepted:    712K
 * Total Submissions: 1.4M
 * Testcase Example:  '[2,1,5,6,2,3]'
 *
 * 给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。
 *
 * 求在该柱状图中，能够勾勒出来的矩形的最大面积。
 *
 *
 *
 * 示例 1:
 *
 *
 *
 *
 * 输入：heights = [2,1,5,6,2,3]
 * 输出：10
 * 解释：最大的矩形为图中红色区域，面积为 10
 *
 *
 * 示例 2：
 *
 *
 *
 *
 * 输入： heights = [2,4]
 * 输出： 4
 *
 *
 *
 * 提示：
 *
 *
 * 1
 * 0
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
   public:
    // 以每个 heights[i] 为高，计算以此为高能得到的最大面积
    // 问题转换为分别找到 heights[i] 左右两侧第一个比 heights[i] 矮的高度
    int largestRectangleArea(vector<int>& heights) {
        // 最后一个高度在循环中不会参与计算，所以额外增加一个为 0 的高度
        // 保证最后一个矩形的面积也能被计算
        heights.push_back(0);
        int n = heights.size();
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int height = heights[st.top()];
                st.pop();
                // 由于 st 本身就是单调的，如果是 st 不为空
                // 则此时 st.top() 就是左侧小于 height 的第一个索引
                int l = st.empty() ? -1 : st.top();
                ans = max(ans, height * (i - l - 1));
            }
            st.push(i);
        }
        return ans;
    }
};  // @lc code=end
