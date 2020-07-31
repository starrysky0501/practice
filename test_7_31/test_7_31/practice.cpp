//题目描述
//给定无序整数序列，求连续非空子串最大和，例如{ -23 17 - 7 11 - 2 1 - 34 }，子串为{ 17, -7, 11 }，最大和为21
//输入描述 :
//输入为整数序列，数字用空格分隔，如： - 23 17 - 7 11 - 2 1 - 34
//输出描述 :
//输出为子序列的最大和：21
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
////#include<algorithm>
//#include<string>
//using namespace std;
//int maxac(vector<int>);
//int main()
//{
//	vector<int> vc;
//	int a;
//	while (cin >> a)
//	{
//		vc.push_back(a);
//		if (a == '\n')//等效于cin.get()=='\n'
//			break;
//	}
//
//	cout << maxac(vc) << endl;
//	return 0;
//}
//
//int maxac(vector<int> vc)
//{
//	int n = vc.size();
//	int max = vc[0];
//	int max1 = vc[0];
//	if (n == 0)
//		return -1;
//	if (n == 1)
//		return vc[0];
//
//	for (int i = 1; i<n; i++)
//	{
//		if (vc[i]<max1 + vc[i])
//			max1 = max1 + vc[i];
//		else
//			max1 = vc[i];
//
//		if (max<max1)
//			max = max1;
//	}
//	return max;
//}
