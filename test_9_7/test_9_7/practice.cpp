//题目描述
//在抽象代数中，我们学过一个关于有限域的定理：存在一个大小为q的有限域当且仅当q是某个素数p的方幂，即q = pk,
//输入描述:
//第一行包含一个整数，数的范围在[1, 10000]

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//bool iszhishu(int n)
//{
//	bool flag = true;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int p, q, k;
//	while (cin >> q)
//	{
//		int res = 0;
//		for (int p = 2; p <= q; p++)
//		{
//			for (int k = 1;; k++)
//			{
//				if (iszhishu(p) && pow(p, k) <= q)
//					res++;
//				else
//					break;
//			}
//		}
//		cout << res << endl;
//	}
//}
