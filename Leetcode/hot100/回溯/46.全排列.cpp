/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 *
 * https://leetcode.cn/problems/permutations/description/
 *
 * algorithms
 * Medium (80.17%)
 * Likes:    3365
 * Dislikes: 0
 * Total Accepted:    1.8M
 * Total Submissions: 2.2M
 * Testcase Example:  '[1,2,3]'
 *
 * 给定一个不含重复数字的数组 nums ，返回其 所有可能的全排列 。你可以 按任意顺序 返回答案。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：nums = [1,2,3]
 * 输出：[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 *
 *
 * 示例 2：
 *
 *
 * 输入：nums = [0,1]
 * 输出：[[0,1],[1,0]]
 *
 *
 * 示例 3：
 *
 *
 * 输入：nums = [1]
 * 输出：[[1]]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= nums.length <= 6
 * -10 <= nums[i] <= 10
 * nums 中的所有整数 互不相同
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
    void dfs(vector<int>& nums, int start) {
        if (start == nums.size() - 1) {
            ans.push_back(nums);
        }
        for (int i = start; i < nums.size(); i++) {
            swap(nums[i], nums[start]);
            dfs(nums, start + 1);
            swap(nums[i], nums[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }
        dfs(nums, 0);
        return ans;
    }
};

class SolutionDFS {
   public:
    vector<vector<int>> ans;
    vector<int> path;
    unordered_map<int, bool> vis;
    void dfs(vector<int>& nums, int idx) {
        if (idx == nums.size()) {
            ans.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (vis[i]) {
                continue;
            }
            path[idx] = nums[i];
            vis[i] = true;
            dfs(nums, idx + 1);
            vis[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }
        path.resize(nums.size());
        dfs(nums, 0);
        return ans;
    }
};
// @lc code=end
