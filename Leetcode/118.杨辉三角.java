/*
 * @lc app=leetcode.cn id=118 lang=java
 *
 * [118] 杨辉三角
 *
 * https://leetcode.cn/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (77.66%)
 * Likes:    1261
 * Dislikes: 0
 * Total Accepted:    681.1K
 * Total Submissions: 876.9K
 * Testcase Example:  '5'
 *
 * 给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
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
 * 输入: numRows = 5
 * 输出: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
 * 
 * 
 * 示例 2:
 * 
 * 
 * 输入: numRows = 1
 * 输出: [[1]]
 * 
 * 
 * 
 * 
 * 提示:
 * 
 * 
 * 1 
 * 
 * 
 */

// @lc code=start
class Solution {
    public List<List<Integer>> generate(int numRows) {
        if (numRows <= 0) {
            return new ArrayList<>();
        }
        if (numRows == 1) {
            return new ArrayList<>(List.of(List.of(1)));
        }
        List<List<Integer>> ans = new ArrayList<>(List.of(List.of(1)));
        for (int i = 1; i < numRows; i++) {
            List<Integer> preLine = ans.get(ans.size() - 1);
            List<Integer> row = new ArrayList<>();
            row.add(1);
            for (int j = 0; j < preLine.size() - 1; j++) {
                row.add(preLine.get(j) + preLine.get(j + 1));
            }
            row.add(1);
            ans.add(row);
        }
        return ans;
    }
}
// @lc code=end
