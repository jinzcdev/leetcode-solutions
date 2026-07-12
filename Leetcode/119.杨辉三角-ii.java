/*
 * @lc app=leetcode.cn id=119 lang=java
 *
 * [119] 杨辉三角 II
 *
 * https://leetcode.cn/problems/pascals-triangle-ii/description/
 *
 * algorithms
 * Easy (69.74%)
 * Likes:    599
 * Dislikes: 0
 * Total Accepted:    351.2K
 * Total Submissions: 503.5K
 * Testcase Example:  '3'
 *
 * 给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。
 * 
 * 在「杨辉三角」中，每个数是它左上方和右上方的数的和。
 * 
 * 
 * 
 * 
 * 
 * 示例 1:
 * 
 * 
 * 输入: rowIndex = 3
 * 输出: [1,3,3,1]
 * 
 * 
 * 示例 2:
 * 
 * 
 * 输入: rowIndex = 0
 * 输出: [1]
 * 
 * 
 * 示例 3:
 * 
 * 
 * 输入: rowIndex = 1
 * 输出: [1,1]
 * 
 * 
 * 
 * 
 * 提示:
 * 
 * 
 * 0 
 * 
 * 
 * 
 * 
 * 进阶：
 * 
 * 你可以优化你的算法到 O(rowIndex) 空间复杂度吗？
 * 
 */

// @lc code=start
class Solution {
    public List<Integer> getRow(int rowIndex) {
        if (rowIndex == 0) {
            return new ArrayList<>(List.of(1));
        }
        List<Integer> ans = new ArrayList<>(List.of(1));
        for (int i = 0; i < rowIndex; i++) {
            List<Integer> preLine = ans;
            ans = new ArrayList<>();
            ans.add(1);
            for (int j = 0; j < preLine.size() - 1; j++) {
                ans.add(preLine.get(j) + preLine.get(j + 1));
            }
            ans.add(1);
        }
        return ans;
    }
}
// @lc code=end

