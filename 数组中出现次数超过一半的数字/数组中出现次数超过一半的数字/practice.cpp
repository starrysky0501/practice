//牛客：数组中出现次数超过一半的数字

//题目描述：
//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例如输入一个长度为9的数组{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }。
//由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。

//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		sort(numbers.begin(), numbers.end());
//		int middle = (0 + numbers.size() - 1) / 2;     //中间下标
//		int count = 0;
//		for (int i = 0; i<numbers.size(); ++i)
//		{
//			if (numbers[middle] == numbers[i])
//			{
//				count++;
//			}
//		}
//		if (count>numbers.size() / 2)         //"超过"数组长度的一半
//		{
//			return numbers[middle];
//		}
//		else
//		{
//			return 0;
//		}
//	}
//};