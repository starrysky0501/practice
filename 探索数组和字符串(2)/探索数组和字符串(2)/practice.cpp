//leetcode:至少是其他数字两倍的最大数
//题目描述：
//在一个给定的数组nums中，总是存在一个最大元素 。
//查找数组中的最大元素是否至少是数组中每个其他数字的两倍。
//如果是，则返回最大元素的索引，否则返回 - 1。
//
//class Solution {
//public:
//	int dominantIndex(vector<int>& nums) {
//		vector<int> num(nums.begin(), nums.end());
//		sort(num.begin(), num.end());
//		if (num.size() == 1)       //当只有一个元素时，直接返回下标索引0，根据测试用例可知
//		{
//			return 0;
//		}
//		if (num.size() >= 2)      //由于下面有减2操作，所以一定要进行大于等于2的判断，否则编不过
//		{
//			int last = num[num.size() - 1];
//			int pre = num[num.size() - 2];
//			if (last >= (2 * pre))
//			{
//				for (int i = 0; i<nums.size(); ++i)
//				{
//					if (last == nums[i])
//					{
//						return i;
//					}
//				}
//			}
//		}
//		return -1;        //再if外直接写return，不要写在else里面，因为自己清楚能进for循环说明有存在的值，但是电脑并不知，会认为不满足for循环的用例，没有函数返回的出口，所以直接写retuurn -1,不要加else,根据测试用例知。
//	}
//};
//该题思路：将nums数组拷贝到另一个数组中，对该数组排序，最后一个为最大值，倒数第二个为次大值，当最大值大于等于次大值的二倍，
//则说明有满足题意的值，接着遍历原数组，寻找该值对应的索引下标




//leetcode：加一
//题目描述：
//给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		if (digits.size() == 1 && digits[0] == 0)
//		{
//			digits[0] += 1;
//			return digits;
//		}
//		vector<int> arr;
//		int len = digits.size();
//		for (int i = len - 1; i >= 0; --i)
//		{
//			if (i == len - 1)          //当为第一个元素时，对其处理
//			{
//				digits[i] += 1;
//			}
//			if (i == 0)                //当为最后一个元素时，直接处理并返回
//			{
//				if (digits[i] == 10)
//				{
//					arr.push_back(0);
//					arr.push_back(1);
//					break;
//				}
//			}
//			if (digits[i] == 10)
//			{
//				digits[i] = digits[i] % 10;
//				if (i - 1 >= 0)
//				{
//					digits[i - 1] += 1;
//				}
//
//			}
//			arr.push_back(digits[i]);
//		}
//		reverse(arr.begin(), arr.end());
//		return arr;
//	}
//};
//该题思路：
//从后向前遍历数组，先将最后一个元素的值加1，则可能会导致前面的数会产生进位，则依次判断每位的值是否等于10，等于10时，则求余后的
//值为该索引的值，并将前一个索引对应的值加一，当为第一个或者最后一个元素时，特殊处理。

//该题需注意：
//不要采用遍历数组每位数字，然后将他们的和加起来，因为当数组的个数很多时，long long类型的sum也不能计算完全




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//template <size_t n, size_t m>
//void printArray(int(&a)[n][m]) {      //此处a是一个引用，引用的是是实参中的数组名；假如写成int& a[n][m],它代表建立了一个数组，该数组的元素是引用类型,c++不支持引用作为数组中的元素
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main() {
//	cout << "Example I:" << endl;
//	int a[2][5];
//	printArray(a);
//	cout << "Example II:" << endl;
//	int b[2][5] = { { 1, 2, 3 } };
//	printArray(b);
//	cout << "Example III:" << endl;
//	int c[][5] = { 1, 2, 3, 4, 5, 6, 7 };
//	printArray(c);
//	cout << "Example IV:" << endl;
//	int d[][5] = { { 1, 2, 3, 4 }, { 5, 6 }, { 7 } };
//	printArray(d);
//	system("pause");
//}
