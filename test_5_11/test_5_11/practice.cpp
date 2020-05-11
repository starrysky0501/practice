//2018校招真题：最大乘积
//题目描述
//给定一个无序数组，包含正数、负数和0，要求从中找出3个数的乘积，使得乘积最大，要求时间复杂度：O(n)，空间复杂度：O(1)
//输入描述:
//第一行是数组大小n，第二行是无序整数数组A[n]
//输出描述 :
//满足条件的最大乘积
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		long t;
//		long fu1 = 0; long fu2 = 0;
//		long z1 = 0; long z2 = 0; long z3 = 0;
//		for (int i = 0; i<n; i++)
//		{
//			cin >> t;
//			if (t<0)
//			{
//				if (t<fu1) //最小负数
//				{
//					fu2 = fu1;
//					fu1 = t;
//				}
//				else if (t<fu2) //次小负数
//					fu2 = t;
//			}
//			else //找最大三个正数
//			{
//
//				if (t>z1)
//				{
//					z3 = z2;
//					z2 = z1;
//					z1 = t;
//
//				}
//				else if (t>z2)
//				{
//					z3 = z2;
//					z2 = t;
//				}
//				else if (t>z3)
//					z3 = t;
//			}
//		}
//		long long result1 = fu1*fu2*z1;
//		long long result2 = z1*z2*z3;
//		long long max = result1>result2 ? result1 : result2;
//		cout << max << endl;
//	}
//	return 0;
//}
