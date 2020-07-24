//题目描述
//在卡中心隐藏了很多美食，作为一名资深吃货，楼主告诉你需要去品尝n道美味才能达成“卡中心小小美食家”的成就。这些菜品被标号为 0 到 n - 1 。正所谓美食家不是一口吃成个胖子的，每道美味的品尝顺序也是有讲究的，比如西餐的上菜顺序：头盘，汤，副菜，主菜，蔬菜类菜肴，甜品，咖啡或茶。有一些美味需要“前置菜肴”，比如如果你要吃菜品0，你需要先吃菜品1，我们用一个范式来表示这些规则：[0 1]。接下来给你菜品的总数量n和m个“前置菜肴”的范式，请编程输出你为了品尝完所有美味所安排的进餐顺序。可能会有多个正确的顺序，你只要输出一种就可以了。如果不可能品尝完所有美味，返回None。
//输入描述 :
//输入的第一行为以空格分隔的两个正整数，第一个表示原始美味总数n，第二个表示前置菜肴范式总数m。
//其后m行每行均为一个以空格分隔的范式说明，第一列为待吃菜肴的标号，第二列为前置菜肴的标号。
//输出描述 :
//对每组测试数据，单独输出一行答案，菜肴标号之间用英文逗号分隔。
//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int>rudu(n, 0);
//	map<int, vector<int>>hash;
//	for (int i = 0; i<m; i++)
//	{
//		int a, b; cin >> a >> b;
//		hash[a].push_back(b);
//		rudu[a]++;
//	}
//	vector<int>ret;
//	queue<int>q;
//	for (int i = 0; i<n; i++)
//	{
//		if (rudu[i] == 0)q.push(i);
//	}
//	while (!q.empty())
//	{
//		int num = q.front(); q.pop();
//		ret.push_back(num);
//		for (auto p : hash)
//		{
//			for (int j = 0; j<p.second.size(); j++)
//			{
//				if (p.second[j] == num)
//				{
//					rudu[p.first]--;
//					if (rudu[p.first] == 0)q.push(p.first);
//				}
//			}
//		}
//	}
//	if (ret.size()<n)cout << "None" << endl;
//	else{
//		for (int i = 0; i<ret.size(); i++)
//		{
//			if (i == 0)cout << ret[i];
//			else{
//				cout << "," << ret[i];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}