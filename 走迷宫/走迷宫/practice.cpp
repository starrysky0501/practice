//牛客：走迷宫

//方法一：深度优先搜索
//#include<iostream>
//#include<vector>
//#include<limits.h>      //INT_MAX的头文件
//#include<string>
//using namespace std;
//int res = INT_MAX;
//vector<vector<int>> mark(10, vector<int>(10, 0));
//void solve(vector<vector<char>> &road, int sx, int sy, int ex, int ey, int tmp)
//{
//	if (sx<0 || sy<0 || sx >= 10 || sy >= 10 || mark[sx][sy])
//		return;
//	if (road[sx][sy] == '#')
//		return;
//	if (tmp>res)
//		return;
//	if (sx == ex && sy == ey)
//	{
//		if (tmp<res)
//		{
//			res = tmp;
//		}
//		return;
//	}
//	mark[sx][sy] = 1;
//	solve(road, sx + 1, sy, ex, ey, tmp + 1);
//	solve(road, sx, sy + 1, ex, ey, tmp + 1);
//	solve(road, sx - 1, sy, ex, ey, tmp + 1);
//	solve(road, sx, sy - 1, ex, ey, tmp + 1);
//	mark[sx][sy] = 0;        //会回退，所以一定要回归0，就是未走
//}
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		res = INT_MAX;
//		vector<vector<char>> road(10, vector<char>(10));
//		for (int i = 0; i<10; ++i)
//		{
//			for (int j = 0; j<10; ++j)
//			{
//				if (i == 0)
//				{
//					road[i][j] = s[j];
//				}
//				else
//				{
//					cin >> road[i][j];
//				}
//			}
//		}
//		solve(road, 0, 1, 9, 8, 0);
//		cout << res << endl;
//	}
//}

//该题思路：有两个表，一个记录路径，一个记录是否走过，采用深度优先搜索时，得到最优解，一定会遍历整棵树，则回退时，一定要将之前
//点标记为未走。


//方法二：广度优先搜索
//#include<iostream>
//#include<queue>
//#include<vector>
//#include<string>
//#include<cstring>
//using namespace std;
//vector<vector<char>> road(10, vector<char>(10));
//int mark[10][10];
//struct node
//{
//	int x;
//	int y;
//	int count;    //记录路径的长度
//};
//queue<node> s;
//int arr[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
//int BFS(int ex, int ey)
//{
//	while (!s.empty())
//	{
//		node t = s.front();
//		s.pop();
//		for (int i = 0; i<4; ++i)
//		{
//			int x = t.x + arr[i][0];
//			int y = t.y + arr[i][1];
//			if (x<0 || y<0 || x >= 10 || y >= 10 || road[x][y] == '#' || mark[x][y] == 1)
//				continue;
//			node n;
//			n.x = x;
//			n.y = y;
//			n.count = t.count + 1;
//			s.push(n);
//			mark[x][y] = 1;
//			if (x == ex && y == ey)
//				return n.count;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	while (cin >> road[0][0])
//	{
//		memset(mark, 0, sizeof(mark));
//		for (int i = 0; i<10; ++i)
//		{
//			for (int j = 0; j<10; j++)
//			{
//				if (i == 0 && j == 0)
//					continue;
//				cin >> road[i][j];
//			}
//		}
//		while (!s.empty())
//			s.pop();
//		node n;
//		n.x = 0;
//		n.y = 1;
//		n.count = 0;   //存步数，不是节点数，所以起初是0
//		s.push(n);
//		cout << BFS(9, 8) << endl;
//	}
//	return 0;
//}

//该题思路：
//将起始位置加入到队列中，利用先进先出的特性，以一个点为中心，会有4个方向的选择，但仍需满足一定的条件，例如不可以超过边缘，
//不可以此处走过，当遇到#时，也走不通，当这些条件统统不满足时，就可以加入到队列中，并且将路径长度加1，直到队列为空，也没有
//满足条件，则没有可行解。

//如果目标结点存在于解答树的有限层上，广度优先搜索算法一定能保证找到一条通向它的最佳路径，因此广度优先搜索算法特别适用于
//只需求出最优解的问题。当问题需要给出解的路径，则要保存每个结点的来源，也就是它是从哪一个节点扩展来的。
//为什么说广度优先搜索算法一定能保证找到一条通向它的最佳路径？
//因为广度优先搜索是一层一层的搜索，满足条件的加入队列，当满足退出条件时，一定会是最短路径