//leetcode:数组拆分I

//定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 例如(a1, b1), (a2, b2), ..., (an, bn) ，使得从1 到 n 的 
//min(ai, bi) 总和最大。
//class Solution {
//public:
//	int arrayPairSum(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		int sum = 0;
//		for (int i = 0; i<nums.size(); i += 2)
//		{
//			sum += nums[i];
//		}
//		return sum;
//	}
//};
//该题思路：
//这道题的关键就是谁与谁组队相比较的问题，由于求最大的值，所以我们要尽可能的保留大的值，假如按照最大 + 最小，
//第二大 + 第二小，就会直接把最大和第二大的数舍去了，如果最大与第二大组队就可以保留第二大的数字，以此类推，我
//们只需要排序之后，相邻之间组队就可以留下最大的值



//leetcode：两数之和 II - 输入有序数组
//给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。
//函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。
//说明 :
//返回的下标值（index1 和 index2）不是从零开始的。
//你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		int i = 0;
//		int j = numbers.size() - 1;
//		int sum;
//		while (i<j)
//		{
//			sum = numbers[i] + numbers[j];
//			if (sum == target)
//				return{ i + 1, j + 1 };
//			else if (sum<target)
//				i++;
//			else
//				j--;
//		}
//		return{ -1, -1 };
//	}
//};
//该题思路：
//不可以采用暴力搜索方法，因为时间复杂度为O(N^2),当数组元素特别多，则时间复杂度太大
//采用双指针技巧，第一个指针定位第一个元素，从左向右；第二个指针定位最后一个元素，从右向左；当第一个元素之和等于
//target时，则直接返回；当小于target，第一个指针向右移动一格，因为最后一个元素元素是最大值，想增加当前值，需要增加
//较小的值；当大于target，第二个指针向左移动。因为题目的条件是只有唯一解，所以只要有解，则一定唯一。该方法的特点是
//每次判断都可以减少一行或者一列，时间复杂度为O(N),空间复杂度为O(1).
//注：该题采用的是双指针技巧-- - 情景一(一个左，一个右)




//leetcode： 最大连续1的个数
//题目描述：
//给定一个二进制数组， 计算其中最大连续1的个数。
//注意：
//输入的数组只包含 0 和1。
//输入数组的长度是正整数，且不超过 10, 000。
//class Solution {
//public:
//	int findMaxConsecutiveOnes(vector<int>& nums) {
//		int max_number = 0;
//		int k = 0;
//		for (int i = 0; i<nums.size(); ++i)
//		{
//			if (nums[i] == 1)
//			{
//				k++;
//			}
//			else
//			{
//				if (k>max_number)
//				{
//					max_number = k;
//				}
//				k = 0;
//			}
//		}
//		if (k>max_number)     //当最后一串数字的1的个数最多时，不能进入到else及时更新max_number,则需要在循环外面判断一次
//		{
//			max_number = k;
//		}
//		return max_number;
//	}
//};
//该题思路：
//采用两个变量，一个记录当前连续1的个数，一个记录最大的连续个数。也可以把if条件换成max函数




//leetcode：长度最小的子数组
//题目描述：
//给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的连续子数组。如果不存在符合条件的连续子数组，返回 0。
//输入: s = 7, nums = [2, 3, 1, 2, 4, 3]
//输出 : 2
//解释 : 子数组[4, 3] 是该条件下的长度最小的连续子数组。
//class Solution {
//public:
//	int minSubArrayLen(int s, vector<int>& nums) {
//		int begin = 0, i = 0, sum = 0;
//		int ans = INT_MAX;
//		while (i<nums.size())
//		{
//			if (sum + nums[i]<s)
//			{
//				sum += nums[i];
//				i++;
//			}
//			else  //和大于等于s
//			{
//				if (i - begin + 1<ans)
//				{
//					ans = i - begin + 1;
//				}
//				sum -= nums[begin];   //左指针向右移动，减小当前和，继续判断是否和大于等于s
//				begin++;
//			}
//		}
//
//		return ans == INT_MAX ? 0 : ans;
//	}
//};
//该题思路：
//变量i和begin控制窗口的大小，从左向右移动。当begin向右移动，当前和增大；当begin向右移动，当前和减小。从数组起始
//元素开始计算。假如当前和小于s，则右指针一直向右移动；假如当前和大于等于s，则计算当前i和begin之间的元素个数，当
//小于ans(记录满足条件sum>=s连续的变量个数), 则更新ans，并且我们尝试移动左指针，减小当前和，看是否仍旧满足当前和
//大于等于s；如果满足，则更新ans，如果不满足，则移动右指针。当右指针到达最后一个元素的后一个位置，则结束。
//该题为滑动窗口的思想，左右两个指针控制窗口的大小，每一个元素最多被访问2次，一次左指针，一次右指针。
//时间复杂度为O(N),每个指针的时间复杂度为O(N)，
