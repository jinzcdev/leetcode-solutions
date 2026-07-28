/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 *
 * https://leetcode.cn/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (49.57%)
 * Likes:    2711
 * Dislikes: 0
 * Total Accepted:    2.1M
 * Total Submissions: 4.3M
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 *
 * 请必须使用时间复杂度为 O(log n) 的算法。
 *
 *
 *
 * 示例 1:
 *
 *
 * 输入: nums = [1,3,5,6], target = 5
 * 输出: 2
 *
 *
 * 示例 2:
 *
 *
 * 输入: nums = [1,3,5,6], target = 2
 * 输出: 1
 *
 *
 * 示例 3:
 *
 *
 * 输入: nums = [1,3,5,6], target = 7
 * 输出: 4
 *
 *
 *
 *
 * 提示:
 *
 *
 * 1 <= nums.length <= 10^4
 * -10^4 <= nums[i] <= 10^4
 * nums 为 无重复元素 的 升序 排列数组
 * -10^4 <= target <= 10^4
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
  public:
    // 找到第一个大于等于 target 的元素下标
    int searchInsert(vector<int> &nums, int target) {
        int n = nums.size(), l = 0, r = n - 1;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (target <= nums[mid]) {
                r = mid;
            } else if (target > nums[mid]) {
                l = mid + 1;
            }
        }
        // l < r 的情况，需要对循环结束的结果做特判。
        // 因为循环时没有对 nums[l] 做判定
        return nums[l] >= target ? l : l + 1;
    }
};
// @lc code=end
