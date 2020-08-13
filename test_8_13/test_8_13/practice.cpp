//题目描述
//小明有n(1≤n≤2000）个美味的食物，他想卖掉它们来赚钱。这些食物放在一些箱子里，它们有些有趣的特性：
//（1）这些食物被编号1~n，每一天小明可以从这排箱子的头部或者尾部取出食物去卖；
//（2）这些食物放的越久，年龄越大，价值越大，食物i有一个初始的价值V(i);
//（3）放了a天后，年龄为a，食物最终价值为V(i)xa。
//给定每一个食物的初始价值V(i)，请求出小明卖掉它们后可以获得的最大价值，第一天出售的食物年龄为1，此后每增加一天食物的年龄就加1。
//输入描述 :
//第1行：一个整数n；
//第i + l行：每行食物i的初始价值V(i)。
//输出描述 :
//1行：小明最终可以获得的最大价值。
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>v(n);
//	for (auto i = 0; i < n; i++)
//		cin >> v[i];
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (v.front() <= v.back())
//		{
//			res += i * v.front();
//			v.erase(v.begin());
//		}
//		else
//		{
//			res += i * v.back();
//			v.pop_back();
//		}
//	}
//	cout << res << endl;
//}
