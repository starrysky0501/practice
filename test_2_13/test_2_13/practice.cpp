//2018校招真题：回文素数

//题目描述：如果一个整数只能被1和自己整除,就称这个数是素数。
//如果一个数正着反着都是一样, 就称为这个数是回文数。例如:6, 66, 606, 6666
//如果一个数字既是素数也是回文数, 就称这个数是回文素数
//牛牛现在给定一个区间[L, R], 希望你能求出在这个区间内有多少个回文素数。

//输入描述：输入包括一行,一行中有两个整数(1 ≤ L ≤ R ≤ 1000)

//输出描述：输出一个整数,表示区间内回文素数个数。


//#include<iostream>
//#include<vector>
//using namespace std;
//bool IsPrime(int x)
//{
//	if (x == 0 || x == 1) return false;
//	for (int i = 2; i <= x / 2; i++)
//	if (x % i == 0)
//		return false;
//	return true;
//}
//bool IsRevrse(int x)
//{
//	int temp = 0, xs = x;
//	while (x)
//	{
//		temp = (temp * 10 + x % 10);
//		x = x / 10;
//	}
//	return xs == temp ? true : false;
//}
//int main()
//{
//	int l, r, cnt = 0;
//	cin >> l >> r;
//	for (int i = l; i <= r; i++)
//	if (IsRevrse(i) && IsPrime(i))
//		cnt++;
//	cout << cnt << endl;
//	return 0;
//}