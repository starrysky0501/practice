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



//第二种思路：

//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		if (numbers.empty())
//			return 0;
//		int result = numbers[0];
//		int count = 1;
//		for (int i = 1; i<numbers.size(); i++)   //假如有符合题意的元素，则两两抵消最后留下的那个数一定是符合题意的数
//		{
//			if (count == 0)                      //前面元素已经被抵消完了，则给result赋新值
//			{
//				result = numbers[i];
//				count = 1;
//			}
//			else if (numbers[i] == result)
//			{
//				++count;
//			}
//			else
//			{
//				--count;
//			}
//		}
//		count = 0;
//		for (int i = 0; i<numbers.size(); i++)   //很有可能没有符合题意的元素，result保存的是最后一个位置的元素，
//		{                                        //所以需判断该元素在数组中存在的个数；
//			if (numbers[i] == result)
//			{
//				++count;
//			}
//		}
//
//		return count>numbers.size() / 2 ? result : 0;
//	}
//};

//时间复杂度为O(N)
//该思路巧妙之处：如果一个数出现的次数超过数组长度的一半时，有两种情况：会有两个相同的数相邻 / 最后一个数是出现次数最多的那个数
//                例如：{1,3,1,4}，这个数组没有满足题意的元素，但当在多一个元素1时，不管插入到哪个位置，一定符合上述两种情况之一
//				  
