//#include <cstdio>
//2018校招真题：重要节点
//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//
//using namespace std;
//const int maxn = 1005;
//vector<int> adj[maxn];
//queue<int> q;
//
//int innum[maxn] = { 0 };
//int outnum[maxn] = { 0 };
//bool ok[maxn][maxn];
//
//int main()
//{
//	int n, m;
//	int u, v;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i<m; i++) //建图
//	{
//		scanf("%d%d", &u, &v);
//		adj[u].push_back(v);
//	}
//
//	int now;
//	for (int i = 1; i <= n; i++) //枚举每个点，找到这个点所可以到达的所有点
//	{
//		q.push(i);
//		ok[i][i] = 1;
//		while (!q.empty())
//		{
//			now = q.front();
//			q.pop();
//			for (int j = 0; j<adj[now].size(); j++)
//			{
//				if (ok[i][adj[now][j]] == 0)
//				{
//					ok[i][adj[now][j]] = 1;
//					q.push(adj[now][j]);
//				}
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (ok[i][j] == 1)
//			{
//				innum[j]++;
//				outnum[i]++;
//			}
//		}
//	}
//
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (innum[i]>outnum[i])
//			ans++;
//	}
//	printf("%d\n", ans);
//	return 0;
//}
