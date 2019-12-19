//剑指offer：数组中出现次数超过一半的数字

//题目描述:
//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例如输入一个长度为9的数组{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }。
//由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。

//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		if (numbers.empty())                              //此处应该判空，当数组中没元素时，应直接返回0，否则下面的取数组中间值middle会造成数组越界
//			return 0;
//		sort(numbers.begin(), numbers.end());
//		int middle = numbers[numbers.size() / 2];
//		int count = 0;
//		for (int i = 0; i<numbers.size(); i++)
//		{
//			if (numbers[i] == middle)
//			{
//				++count;
//			}
//		}
//		return count>numbers.size() / 2 ? middle : 0;     //该处判断是因为，中间位置的元素不一定就是个数超过数组一般长度的元素，因为有可能该元素根本不存在
//	}
//};

//思路：先将数组排序，如果存在一个元素的个数超过数组一半长度，则该数组的中间位置一定存放该元素
//		缺点：时间复杂度较高，因为使用了sort函数，时间复杂度为O(n*logn）