//牛客：分解因数

//方法一：开辟新空间
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		cout << num << " = ";
//		vector<int> nums;
//		int j = 0;
//		for (int i = 2; i <= sqrt(num); ++i)   //假如分解出大于sqrt(num)的数时，不用担心，因为只可能有一个当且仅当是素数，在for循环外面判断
//		{									   
//			while (num%i == 0)
//			{
//				nums.push_back(i);
//				num = num / i;
//			}
//		}
//		if (num != 1)       //最后一个数是素数
//		{
//			nums.push_back(num);
//		}
//		for (int i = 0; i< nums.size(); ++i)
//		{
//			if (i + 1< nums.size())
//			{
//				cout << nums[i] << " * ";
//			}
//			else
//			{
//				cout << nums[i] << endl;
//			}
//		}
//	}
//
//	return 0;
//}

//这个题有两种情况：
//1. 10=2*5--->5大于sqrt(10)，但分解时，这种数只可能存在一个并且是素数
//2. 18=2*3*3--->它的因数都是小于sqrt(18)的

//解释：为什么是i<=sqrt(num)?
//假设一个质数为n，则n=a*b始终成立(a,b>1),当a<=sqrt(n)时
//由于n/sqrt(n)=sqrt(n)
//所以：n/a>=sqrt(n)
//由于n/a=b
//所以b>=sqrt
//结论:一个质数的两个因数，其中一个一定小于等于sqtr(质数);则当一个整数没有一个因数是小于等于sqrt(质数)时，则是素数


//方法二：不开辟空间，直接考虑将最后一个质因数除外
//#include<iostream>
//#include<cmath>
//#include<stdlib.h>
//using namespace std;
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		cout << num << " = ";
//
//		int j = 0;
//		for (int i = 2; i <= sqrt(num); ++i)
//		{
//			while (num != i)
//			{
//				if (num%i == 0)
//				{
//					cout << i << " * ";
//					num = num / i;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}