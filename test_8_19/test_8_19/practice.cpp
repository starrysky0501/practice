//题目描述
//小萌非常喜欢能被7整除的数字，比如7, 21, 121996，等等。有一天他得到了n个正整数，她想用这些数制造出更多的能够被7整除的数。于是她从这n个数中选出两个数，然后将一个数写在另一个数的前面，以此得到一个新的数。按这种方法她一共可以得到个数，她想知道在这些数中，有多少个是能被7整除的。
//
//输入描述 :
//第一行包含一个整数n。2 ≤n≤ 105
//
//第二行包含n个正整数ai。1 ≤ai≤109
//
//输出描述 :
//输出对应的答案。
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int x, map[11][7] = { 0 }, num[7] = { 0 };
//		for (int i = 0; i<n; i++)
//		{
//			cin >> x;
//			int bit = 0, y = x % 7;
//			num[y]++;
//			while (x)
//			{
//				x = x / 10;
//				bit++;
//			}
//			map[bit][y]++;
//		}
//		long long count = num[0] * (num[0] - 1);
//		for (int i = 1; i<7; i++)
//		{
//			if (num[i] != 0)
//			{
//				for (int x = 0; x<11; x++)
//				{
//					for (int y = 0; y<7; y++)
//					{
//						if (map[x][y] == 0)
//							continue;
//						long long m = pow(10, x);
//						if (i*m % 7 == 7 - y)
//						{
//							if (i == y)
//								count += (num[i] - 1) * map[x][y];
//							else
//								count += num[i] * map[x][y];
//						}
//					}
//				}
//			}
//		}
//		cout << count << endl;
//	}
//}
