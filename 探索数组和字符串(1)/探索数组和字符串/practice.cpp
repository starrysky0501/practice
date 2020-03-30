//题目描述
//给定一个整数类型的数组 nums，请编写一个能够返回数组“中心索引”的方法。
//我们是这样定义数组中心索引的：数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。
//如果数组不存在中心索引，那么我们应该返回 - 1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个。
//
//class Solution {
//public:
//	int pivotIndex(vector<int>& nums) {
//		int right_sum = 0;
//		int left_sum = 0;
//		if (nums.size() == 1)
//		{
//			return 0;
//		}
//		for (int i = 1; i<nums.size(); ++i)
//		{
//			right_sum += nums[i];
//		}
//		for (int i = 0; i<nums.size(); ++i)
//		{
//			if (left_sum == right_sum)
//			{
//				return i;
//			}
//			if (i + 1<nums.size())
//			{
//				left_sum += nums[i];
//				right_sum -= nums[i + 1];
//			}
//		}
//		return -1;
//	}
//};