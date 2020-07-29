//题目描述
//给定无序整数序列，求其中第K大的数，例如{ 45，67，33，21 }，第2大数为45
//输入描述 :
//输入第一行为整数序列，数字用空格分隔，如：45 67 33 21
//输入第二行一个整数K，K在数组长度范围内，如：2
//输出描述 :
//输出第K大的数，本例为第2大数：45
//#include<stdlib.h>
//#include<vector>
//#include<iostream>
//
//using namespace std;
//
//int choose(vector<int>, int);
//int main()
//{
//	vector<int> ac;
//	int a;
//	while (cin >> a)
//	{
//		ac.push_back(a);
//		if (cin.get() == '\n')
//			break;
//	}
//	int k;
//	cin >> k;
//	int e = choose(ac, k);
//	cout << e << endl;
//	return 0;
//}
//
//int choose(vector<int>ac, int k)
//{
//	int n = ac.size();
//	int temp;
//	for (int i = 1; i<n; i++)
//	for (int j = 0; j<n - i; j++)
//	{
//		if (ac[j]<ac[j + 1])
//		{
//			temp = ac[j];
//			ac[j] = ac[j + 1];
//			ac[j + 1] = temp;
//		}
//	}
//	return ac[k - 1];
//
//}
