//牛客：素数

//题目描述
//输入一个整数n(2 <= n <= 10000)，要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出 - 1。

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> array;
//	int num;
//	while (cin >> num)
//	{
//		for (int i = 11; i<num; i += 10)
//		{
//			int tags = 1;                             //请注意：将该值设为局部变量；但当设置为全局变量时，一定要在此处将tags变为1
//			for (int j = 2; j<i; j++)
//			{
//				if (i%j == 0)
//				{
//					tags = 0;
//					break;
//				}
//			}
//			if (tags == 1)
//			{
//				array.push_back(i);
//			}
//		}
//		for (int i = 0; i<array.size(); i++)
//		{
//			cout << array[i];
//			if (i != (array.size() - 1))
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}




//牛客：最小的K个数

//输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。

//class Solution {
//public:
//	void swap(int *a, int *b)
//	{
//		int tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
//		int j = 0;
//		vector<int> topk;
//		if (k <= 0 || k>input.size())        //请注意，不写k的判断，会导致下面的push_back数组中的数据时栈溢出
//			return topk;
//
//		while (j<input.size() - 1)
//		{
//			for (int i = 1; i<input.size() - j; i++)
//			{
//				if (input[i - 1]>input[i])
//				{
//					swap(&input[i - 1], &input[i]);
//				}
//			}
//			j++;
//		}
//		//sort(input.begin(),input.end());
//
//		for (int i = 0; i<k; i++)
//		{
//			topk.push_back(input[i]);
//		}
//		return topk;
//	}
//};




//牛客：星际密码(用C语言格式控制输出)

//#include<iostream>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> fib;
//	fib.resize(10001);
//	fib[0] = 0;
//	fib[1] = 1;
//	fib[2] = 2;
//	for (int i = 3; i<10001; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//		fib[i] = fib[i] % 10000;              
//	}
//	int total, num;
//	while (cin >> total)
//	{
//		vector<int> val;
//		for (int i = 0; i<total; i++)
//		{
//			cin >> num;
//			val.push_back(num);
//		}
//		for (int i = 0; i<total; i++)
//		{
//			printf("%04d", fib[val[i]]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//这个题目应注意：
//1.斐波那契数列的项数超过40之后，他的值就会变得非常非常庞大，但是我们只需要后四位数字，其余位数和本题目无关，虽然用int存储，但当精度超过int时，
//高位溢出，无论怎么缺失数据，都并不影响低四位的取值，可以采用一位数字和一位数字相加证明。
//2.当不够4为时，应补0，C语言有对整数的格式控制输出，c++应转换成字符串和+去处理



//牛客：星际密码(用c++格式控制输出)
//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	vector<int> fib;
//	fib.resize(10001);
//	fib[0] = 0;
//	fib[1] = 1;
//	fib[2] = 2;
//	for (int i = 3; i<10001; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//		fib[i] = fib[i] % 10000;
//	}
//	int total, num;
//	while (cin >> total)
//	{
//		vector<int> val;
//		for (int i = 0; i<total; i++)
//		{
//			cin >> num;
//			val.push_back(num);
//		}
//		for (int i = 0; i<total; i++)
//		{
//			string as1, as2;
//			as1 = to_string(fib[val[i]]);
//			for (int j = 0; j<4 - as1.size(); j++)
//			{
//				as2 += '0';
//			}
//			as2 += as1;
//			cout << as2;
//		}
//		cout << endl;
//	}
//	return 0;
//}