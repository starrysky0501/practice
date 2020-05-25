//2018校招真题：数位重排
//题目描述
//牛牛有一个正整数x, 牛牛需要把数字x中的数位进行重排得到一个新数(不同于x的数), 牛牛想知道这个新数是否可能是原x的倍数。请你来帮他解决这个问题。
//输入描述 :
//输入包括t + 1行, 第一行包括一个整数t(1 ≤ t ≤ 10),
//接下来t行, 每行一个整数x(1 ≤ x ≤ 10 ^ 6)
//输出描述 :
//对于每个x, 如果可能重排之后变为自己的倍数输出"Possible", 否则输出"Impossible".
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int t, mid, l;
//	cin >> t;
//	string s1, s2;
//	while (t--)
//	{
//		cin >> mid;
//		s1 = to_string(mid);
//		sort(s1.begin(), s1.end());
//		for (int i = 2; i <= 10; i++)
//		{
//			l = i*mid;
//			s2 = to_string(l);
//			if (s1.length()>s2.length())
//			{
//				cout << "Impossible" << endl;
//				break;
//			}
//
//			else
//			{
//				sort(s2.begin(), s2.end());
//				if (s1 == s2)
//				{
//					cout << "Possible" << endl;
//					break;
//				}
//			}
//			if (i == 10)
//			{
//				cout << "Impossible" << endl;
//			}
//		}
//	}
//	return 0;
//}