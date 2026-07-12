/*
 * @lc app=leetcode.cn id=912 lang=cpp
 *
 * [912] 排序数组
 *
 * https://leetcode.cn/problems/sort-an-array/description/
 *
 * algorithms
 * Medium (47.76%)
 * Likes:    1232
 * Dislikes: 0
 * Total Accepted:    883.9K
 * Total Submissions: 1.9M
 * Testcase Example:  '[5,2,3,1]'
 *
 * 给你一个整数数组 nums，请你将该数组升序排列。
 *
 * 你必须在 不使用任何内置函数 的情况下解决问题，时间复杂度为
 * O(nlog(n))，并且空间复杂度尽可能小。
 *
 *
 *
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：nums = [5,2,3,1]
 * 输出：[1,2,3,5]
 * 解释：数组排序后，某些数字的位置没有改变（例如，2 和
 * 3），而其他数字的位置发生了改变（例如，1 和 5）。
 *
 *
 * 示例 2：
 *
 *
 * 输入：nums = [5,1,1,2,0,0]
 * 输出：[0,0,1,1,2,5]
 * 解释：请注意，nums 的值不一定唯一。
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= nums.length <= 5 * 10^4
 * -5 * 10^4 <= nums[i] <= 5 * 10^4
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main() { return 0; }
// @lc code=start
/**
 * 快速排序主要有两种实现方式，一种是完成一次排序后确定 pivot
 * 的最终位置，另一种则无法确定。 Hoare 快速排序（无法确定 pivot 的最终位置）
 */
class HoareQuickSort {
  public:
    static void quickSort(vector<int> &nums, int left, int right) {
        if (left >= right) {
            return;
        }
        // 避免时间复杂度退化，这里一定要取随机主元
        int index = left + rand() % (right - left + 1);
        swap(nums[left], nums[index]);

        int pivot = nums[left];
        int l = left - 1, r = right + 1;
        while (l < r) {
            do l++; while (nums[l] < pivot);
            do r--; while (nums[r] > pivot);
            if (l < r) {
                swap(nums[l], nums[r]);
            }
        }
        quickSort(nums, left, r);
        quickSort(nums, r + 1, right);
    }
};

/**
 * Lomuto 快速排序（可以确定 pivot 的最终位置）
 */
class LomutoQuickSort {
  public:
    static void quickSort(vector<int> &nums, int left, int right) {
        if (left >= right) {
            return;
        }
        int index = left + rand() % (right - left + 1);
        swap(nums[left], nums[index]);
        int pivot = nums[left], l = left, r = right;
        while (l < r) {
            while (l < r && nums[r] > pivot)
                r--;
            if (l < r)
                nums[l++] = nums[r];
            while (l < r && nums[l] < pivot)
                l++;
            if (l < r)
                nums[r--] = nums[l];
        }
        nums[l] = pivot;
        quickSort(nums, left, l - 1);
        quickSort(nums, l + 1, right);
    }
};

/**
 * 堆排序
 */
class HeapSort {
  public:
    static void heapSort(vector<int> &nums) {
        if (nums.empty()) {
            return;
        }
        int n = nums.size();
        // 从最后一个父节点开始建堆（下调整），原地建堆
        for (int i = n / 2 - 1; i >= 0; i--) {
            siftDown(nums, n, i);
        }

        for (int i = n - 1; i >= 0; i--) {
            swap(nums[0], nums[i]);
            siftDown(nums, i, 0);
        }
    }

  private:
    // 向下调整，构建大顶堆
    static void siftDown(vector<int> &nums, int n, int i) {
        for (int j = i * 2 + 1; j < n; i = j, j = i * 2 + 1) {
            if (j + 1 < n && nums[j + 1] > nums[j]) {
                j++;
            }
            if (nums[i] >= nums[j]) {
                break;
            }
            swap(nums[i], nums[j]);
        }
    }
    // 向上调整（大顶堆），原地堆排序用不到上调
    static void siftUp(vector<int> &nums, int i) {
        while (i > 0) {
            int parent = (i - 1) / 2;
            if (nums[parent] >= nums[i]) {
                break;
            }
            swap(nums[parent], nums[i]);
            i = parent;
        }
    }
};

/**
 * 归并排序（分治思想）
 */
class MergeSort {
  public:
    static void mergeSort(vector<int> &nums) {
        vector<int> tmp(nums.size());
        mergeSort(nums, 0, nums.size() - 1, tmp);
    }

  private:
    static void mergeSort(vector<int> &nums, int left, int right,
                          vector<int> &tmp) {
        if (left >= right) {
            return;
        }
        int mid = (right - left) / 2 + left;
        mergeSort(nums, left, mid, tmp);
        mergeSort(nums, mid + 1, right, tmp);
        int i = left, j = mid + 1, k = left;
        while (i <= mid || j <= right) {
            if (i > mid) {
                tmp[k++] = nums[j++];
            } else if (j > right) {
                tmp[k++] = nums[i++];
            } else {
                tmp[k++] = nums[i] < nums[j] ? nums[i++] : nums[j++];
            }
        }
        for (int i = left; i <= right; i++) {
            nums[i] = tmp[i];
        }
    }
};

class Solution {
  public:
    vector<int> sortArray(vector<int> &nums) {
        // MergeSort::mergeSort(nums);
        // HeapSort::heapSort(nums);
        // LomutoQuickSort::quickSort(nums, 0, nums.size() - 1);
        HoareQuickSort::quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

// @lc code=end
