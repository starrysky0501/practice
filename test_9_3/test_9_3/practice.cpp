//题目描述:
//小明去游乐园玩耍，他的票一共可以玩t分钟。
//游乐场一共有n个项目，编号1到n，第i个项目需要a[i]的时间。游乐场规定，在票没有到期前，拥有者都可以入场，无论完成项目出场时该票是否已经过期。
//小明可以任意决定玩项目的顺序，但是每个项目他只想玩一次。问小明最长可以玩多久？
//输入描述 :
//第一行两个整数n，t，含义如题面，1≤n≤100，1≤t≤10000000；
//接下来一行n个整数，第i个整数a[i]表示第i个项目所需的时间，1≤a[i]≤100。
//输出描述 :
//输出一个整数，表示小明最长可以玩多久。

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	long t, res = 0, a[101];
//	cin >> n >> t;
//	for (int i = 0; i<n; i++)
//		cin >> a[i];
//	sort(a, a + n);
//	for (int i = 0; i<n; i++)
//	{
//		if (t>res)
//			res += a[i];
//		if (t == res || res>t)
//			break;
//		if (t<res)
//			res += a[n - 1];
//	}
//	cout << res << endl;
//	return 0;
//}
