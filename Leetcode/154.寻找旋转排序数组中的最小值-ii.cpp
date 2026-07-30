/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 *
 * https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array-ii/description/
 *
 * algorithms
 * Hard (51.16%)
 * Likes:    764
 * Dislikes: 0
 * Total Accepted:    231.6K
 * Total Submissions: 452.7K
 * Testcase Example:  '[1,3,5]'
 *
 * 已知一个长度为 n 的数组，预先按照升序排列，经由 1 到 n 次 旋转
 * 后，得到输入数组。例如，原数组 nums = [0,1,4,4,5,6,7] 在变化后可能得到：
 *
 * 若旋转 4 次，则可以得到 [4,5,6,7,0,1,4]
 * 若旋转 7 次，则可以得到 [0,1,4,4,5,6,7]
 *
 *
 * 注意，数组 [a[0], a[1], a[2], ..., a[n-1]] 旋转一次 的结果为数组 [a[n-1],
 * a[0], a[1], a[2],
 * ..., a[n-2]] 。
 *
 * 给你一个可能存在 重复 元素值的数组 nums
 * ，它原来是一个升序排列的数组，并按上述情形进行了多次旋转。请你找出并返回数组中的
 * 最小元素 。
 *
 * 你必须尽可能减少整个过程的操作步骤。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：nums = [1,3,5]
 * 输出：1
 *
 *
 * 示例 2：
 *
 *
 * 输入：nums = [2,2,2,0,1]
 * 输出：0
 *
 *
 *
 *
 * 提示：
 *
 *
 * n == nums.length
 * 1 <= n <= 5000
 * -5000 <= nums[i] <= 5000
 * nums 原来是一个升序排序的数组，并进行了 1 至 n 次旋转
 *
 *
 *
 *
 * 进阶：这道题与 寻找旋转排序数组中的最小值 类似，但 nums
 * 可能包含重复元素。允许重复会影响算法的时间复杂度吗？会如何影响，为什么？
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
  public:
    int findMin(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }
        int l = 0, r = nums.size() - 1;
        // 我们考虑数组中的最后一个元素x：
        // 在最小值右侧的元素，它们的值一定都小于等于 x；
        // 而在最小值左侧的元素，它们的值一定都大于等于 x。
        // 因此，我们可以根据这一条性质，通过二分查找的方法找出最小值。
        while (l < r) {
            if (nums[l] < nums[r]) {
                return nums[l];
            }
            if (nums[l] == nums[r]) {
                r--;
                continue;
            }
            int mid = (l + r) >> 1;
            if (nums[mid] >= nums[l]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return nums[l];
    }
};
// @lc code=end
