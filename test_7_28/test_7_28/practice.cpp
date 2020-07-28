//题目描述
//以边关系表示客户间的转账行为，若客户1向2转账，就认为存在1指向2的边。假设从某个客户1出发，沿着其任意转账关系边查找，若最终均可以到达终止客户(不存在帐务转出的客户)，则认为客户1是安全客户；否则认为客户1是潜在风险客户。即，所有处于转账关系环中的客户以及指向环中客户的客户节点均是潜在风险客户。如下图，只有客户6是安全客户。
//输入描述 :
//第一行为空格分隔的两个整数n和m。n为总客户数，m为总的转账关系边数。n不超过10000，m不超过100000。客户即表示为1到n的整数。
//其后m行为所有的边关系，每一行为一条转账关系边，边描述为以逗号分隔的两个客户。
//输出描述 :
//在同一行输出所有安全客户列表，无顺序要求。客户间以空格分隔。若客户列表为空，则输出None。详见样例。
///*
//1.以邻接矩阵的方式存储数据；
//2.没有出边的元素一定表示安全客户；
//3.找到没有出边的元素（弧头）后，保存该元素，再将邻接矩阵中包含该弧头的对应的边置零；
//4.检查邻接矩阵有没有变化（flag的作用），有变化则重复3，无变化则得到结果。
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int D[10001][10001] = { 0 };
//bool judge(int indx, int n)//判断某点是否有出边,有则返回false
//{
//	for (int k  = 1; k < n  + 1; k++)
//		if (D[indx][k] == 1)
//		return false;
//	return true;
//}
//int main()
//{
//	int n, m;
//	cin  >> n >> m;
//	for (int i  = 0; i < m; i++)
//	{
//		int a, b;
//		char c;
//		cin  >> a  >> c  >> b;
//		D[a][b] = 1;
//	}
//	vector<int> result;
//	while (1)
//	{
//		bool flag  = 0;
//		for (int i  = 1; i  <= n; i++)
//		{
//			if (judge(i, n) && find(result.begin(), result.end(), i) == result.end())
//			{
//				flag  = 1;
//				result.push_back(i);
//				for (int k  = 1; k  <= n; k++)
//					if (D[k][i] == 1)D[k][i] = 0;
//			}
//		}
//		if (!flag)break;
//	}
//	int s  = result.size();
//	if (s  == 0)
//		cout  << "None" << endl;
//	else
//	{
//		sort(result.begin(), result.end());
//		for (int i  = 0; i < s  - 1; i++)
//		{
//			cout  << result[i] << " ";
//		}
//		cout  << result[s  - 1];
//	}
//	return 0;
//}
