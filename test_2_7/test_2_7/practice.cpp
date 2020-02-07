//2018校招真题：循环数比较

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int x1, k1, x2, k2;
//	cin >> x1 >> k1 >> x2 >> k2;
//	if (x1 >= x2&&k1 >= k2)
//	{
//		cout << "Greater" << endl;
//	}
//	else if (x1 == x2&&k1 == k2)
//	{
//		cout << "Equal" << endl;
//	}
//	else if (x1 <= x2&&k1 <= k2)
//	{
//		cout << "Less" << endl;
//	}
//	else
//	{
//		string s1, s2, mid1, mid2;
//		mid1 = to_string(x1);
//		for (int i = 0; i<k1; i++)
//		{
//			s1 += mid1;
//		}
//		mid2 = to_string(x2);
//		for (int i = 0; i<k2; i++)
//		{
//			s2 += mid2;
//		}
//		if (s1.size()>s2.size())
//		{
//			cout << "Greater" << endl;
//		}
//		else if (s1.size() == s2.size())
//		{
//			if (s1>s2)
//			{
//				cout << "Greater" << endl;
//			}
//			else if (s1 == s2)
//			{
//				cout << "Equal" << endl;
//			}
//			else
//			{
//				cout << "Less" << endl;
//			}
//		}
//		else
//		{
//			cout << "Less" << endl;
//		}
//	}
//	return 0;
//}