//剑指offer：把数组排成最小的数

//题目：输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
//例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。

//class Solution {
//public:
//	static bool cmp(int a, int b)
//	{
//		string A = "";
//		string B = "";
//		A += to_string(a);
//		A += to_string(b);
//		B += to_string(b);
//		B += to_string(a);
//		return A<B              
//	}
//	string PrintMinNumber(vector<int> numbers) {
//		string result = "";
//		sort(numbers.begin(), numbers.end(), cmp);
//		for (int i = 0; i<numbers.size(); i++)
//		{
//			result += to_string(numbers[i]);
//		}
//		return result;
//	}
//};

//思路：对vector容器内的数据进行排序，按照字符串的格式进行排序(字典序)
//		采用sort函数，重新实现cmp函数，将参数a,b转化成string的形式，
//		当a+b<b+a ，则说明a应排在b的前面,可以使总体值最小，
//		例如：2 21  212<221，所以排序后为21 2
//注意1:to_string函数可以将数值转化为字符串类型
//		函数原型：string to_string(int val);
//注意2:c++标准库中的string是可以直接比较大小的，因为类内部已经实现了对操作符的重载