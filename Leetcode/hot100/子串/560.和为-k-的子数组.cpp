/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为 K 的子数组
 *
 * https://leetcode.cn/problems/subarray-sum-equals-k/description/
 *
 * algorithms
 * Medium (46.46%)
 * Likes:    3145
 * Dislikes: 0
 * Total Accepted:    1.1M
 * Total Submissions: 2.3M
 * Testcase Example:  '[1,1,1]\n2'
 *
 * 给你一个整数数组 nums 和一个整数 k ，请你统计并返回
 * 该数组中和为 k 的子数组的个数 。
 *
 * 子数组是数组中元素的连续非空序列。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：nums = [1,1,1], k = 2
 * 输出：2
 *
 *
 * 示例 2：
 *
 *
 * 输入：nums = [1,2,3], k = 3
 * 输出：2
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= nums.length <= 2 * 10^4
 * -1000 <= nums[i] <= 1000
 * -10^7 <= k <= 10^7
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
  public:
    int subarraySum(vector<int> &nums, int k) {
        if (nums.empty()) {
            return 0;
        }
        unordered_map<int, int> cnt;
        cnt[0] = 1;
        int prefixSum = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            ans += cnt[prefixSum - k];
            cnt[prefixSum]++;
        }
        return ans;
    }
};
// @lc code=end
