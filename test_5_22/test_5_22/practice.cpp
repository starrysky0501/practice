//2018校招真题：最小众倍数
//题目描述
//给定5个正整数, 它们的最小的众倍数是指的能够被其中至少三个数整除的最小正整数。 给定5个不同的正整数, 请计算输出它们的最小众倍数。
//输入描述 :
//输入包括一行, 一行中有五个各不相同的正整数a, b, c, d, e(1 ≤ a, b, c, d, e ≤ 100), 以空格分割
//输出描述 :
//输出一个整数, 表示它们的最小众倍数
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int func(int a, int b)
//{
//	int temp1 = a, temp2 = b, temp = 0;
//	while (temp2>0)
//	{
//		temp = temp1%temp2;
//		temp1 = temp2;
//		temp2 = temp;
//	}
//	return a*b / temp1;
//}
//int main()
//{
//	int arr[6] = { 0 }, a[11] = { 0 }, c = 1;
//	for (int i = 1; i <= 5; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr + 1, arr + 6);
//	for (int i = 1; i <= 3; i++)
//	{
//		for (int j = i + 1; j <= 4; j++)
//		{
//			for (int k = j + 1; k <= 5; k++)
//			{
//				a[c] = func(func(arr[i], arr[j]), arr[k]);
//				c++;
//			}
//		}
//	}
//	sort(a + 1, a + 11);
//	cout << a[1] << endl;
//}
