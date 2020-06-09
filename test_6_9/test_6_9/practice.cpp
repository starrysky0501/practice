//2018校招真题：题目列表
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//struct pro
//{
//	string name;
//	float X;
//	float Y;
//};
//
//bool cmp(pro a, pro b)
//{
//	return a.name<b.name;
//}
//int main()
//{
//	pro p[100];
//	int num;
//	cin >> num;
//	for (int i = 0; i<num; i++)
//	{
//		cin >> p[i].name;
//		cin >> p[i].X;
//		cin >> p[i].Y;
//	}
//
//	sort(p, p + num, cmp);
//
//	for (int i = 0; i<num; i++)
//	{
//		cout << p[i].name << ' ';
//		float res = p[i].Y / p[i].X;
//		if (0 <= res&&res <= 0.3)
//		{
//			cout << '5' << endl;
//		}
//		else if (0.3 <= res&&res <= 0.6)
//		{
//			cout << '4' << endl;
//		}
//		else
//		{
//			cout << '3' << endl;
//		}
//	}
//	return 0;
//}
