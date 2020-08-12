//题目描述
//玥玥带乔乔一起逃亡，现在有许多的东西要放到乔乔的包里面，但是包的大小有限，所以我们只能够在里面放入非常重要的物品。现在给出该种物品的数量、体积、价值的数值，希望你能够算出怎样能使背包的价值最大的组合方式，并且输出这个数值，乔乔会非常感谢你。
//输入描述 :
//第1行有2个整数，物品种数n和背包装载体积v；
//第2行到i + 1行每行3个整数，为第i种物品的数量m、体积w、价值s。
//输出描述 :
//仅包含一个整数，即为能拿到的最大的物品价值总和。
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n, v, i, j, c, k;
//	struct node
//	{
//		int w, s;
//	};
//	vector<node> A;
//	node d;
//	cin >> n >> v;
//	for (j = 0; j<n; ++j)
//	{
//		cin >> k >> d.w >> d.s;
//		c = 1;
//		while (k - c>0)
//		{
//			k -= c;
//			A.push_back({ d.w*c, d.s*c });
//			c *= 2;
//		}
//		d.w *= k;
//		d.s *= k;
//		A.push_back(d);
//	}
//	int dp[100000] = { 0 };
//	for (i = 0; i<A.size(); ++i)
//	{
//		for (j = v; j >= A[i].w; --j)
//		{
//			dp[j] = max(dp[j], dp[j - A[i].w] + A[i].s);
//		}
//	}
//	cout << dp[v] << endl;
//}
