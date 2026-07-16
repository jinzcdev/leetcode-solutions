/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 *
 * https://leetcode.cn/problems/subsets/description/
 *
 * algorithms
 * Medium (81.89%)
 * Likes:    2660
 * Dislikes: 0
 * Total Accepted:    1.3M
 * Total Submissions: 1.6M
 * Testcase Example:  '[1,2,3]'
 *
 * 给你一个整数数组 nums ，数组中的元素 互不相同
 * 。返回该数组所有可能的子集（幂集）。
 *
 * 解集 不能 包含重复的子集。你可以按 任意顺序 返回解集。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：nums = [1,2,3]
 * 输出：[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
 *
 *
 * 示例 2：
 *
 *
 * 输入：nums = [0]
 * 输出：[[],[0]]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= nums.length <= 10
 * -10 <= nums[i] <= 10
 * nums 中的所有元素 互不相同
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
class Solution {
  public:
    vector<vector<int>> ans;
    void dfs(int start, int n, vector<int> &nums, vector<int> &path) {
        if (start >= n) {
            ans.push_back(path);
            return;
        }
        ans.push_back(path);
        for (int i = start; i < n; i++) {
            path.push_back(nums[i]);
            dfs(i + 1, n, nums, path);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        if (nums.empty()) {
            return {};
        }
        vector<int> path;
        dfs(0, nums.size(), nums, path);
        return ans;
    }
};
// @lc code=end
