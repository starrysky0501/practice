//leetcode:腐烂的橘子
//题目描述：
//在给定的网格中，每个单元格可以有以下三个值之一：
//值 0 代表空单元格；
//值 1 代表新鲜橘子；
//值 2 代表腐烂的橘子。
//每分钟，任何与腐烂的橘子（在 4 个正方向上）相邻的新鲜橘子都会腐烂。
//返回直到单元格中没有新鲜橘子为止所必须经过的最小分钟数。如果不可能，返回 - 1。
//class Solution {
//public:
//	int orangesRotting(vector<vector<int>>& grid) {
//		if (grid.size() == 0 || grid[0].size() == 0)
//			return 0;
//		int count = 0;  //记录好橘子的个数
//		queue<pair<int, int>>q;    //将烂橘子加入到队列中
//		for (int i = 0; i<grid.size(); ++i)
//		{
//			for (int j = 0; j<grid[0].size(); ++j)
//			{
//				if (grid[i][j] == 1)
//				{
//					count++;
//				}
//				if (grid[i][j] == 2)
//				{
//					q.push(make_pair(i, j));       //将腐烂的橘子加入队列，作为树的第一层
//				}
//			}
//		}
//		int round = 0;
//      //其实我们可以理解，当count为0时，可能队列还未空，也有可能刚好空了
//		while (count>0 && !q.empty())             //count>0是因为，示例3，当没有好橘子时，不用进入循环。
//		{
//			round++;
//			int n = q.size();  
//			for (int i = 0; i<n; ++i)             //不可以在此处写i<q.size()。因为一直pop，个数在变化。
//			{
//				auto value = q.front();
//				q.pop();
//				int x = value.first;
//				int y = value.second;
//				if (x - 1 >= 0 && grid[x - 1][y] == 1)
//				{
//					--count;
//					q.push(make_pair(x - 1, y));
//					grid[x - 1][y] = 2;           //一定要标记已经腐烂
//				}
//				if (x + 1<grid.size() && grid[x + 1][y] == 1)
//				{
//					--count;
//					q.push(make_pair(x + 1, y));
//					grid[x + 1][y] = 2;
//				}
//				if (y - 1 >= 0 && grid[x][y - 1] == 1)
//				{
//					--count;
//					q.push(make_pair(x, y - 1));
//					grid[x][y - 1] = 2;
//				}
//				if (y + 1<grid[0].size() && grid[x][y + 1] == 1)
//				{
//					--count;
//					q.push(make_pair(x, y + 1));
//					grid[x][y + 1] = 2;
//				}
//			}
//		}
//		if (count>0)
//			return -1;
//		else
//			return round;
//	}
//};
//该题与leetcode中的"墙与门"相似，都采取BFS算法
//我们先遍历二维数组，记录新鲜水果的个数以及将腐烂的水果入队。
//接着我们需要一个变量来记录分钟，也就是广度优先算法的深度。
//在进入循环之前，设定一个变量标记分钟。初始为0。但这道题的特点在于给了一个案例3，当二维数组中没有新鲜水果，但又腐烂的水果，则我们直接返回0分钟。
//所以这道题while循环条件为新鲜水果的个数必须大于0且队列非空，当不满足任意一个时，则退出循环，判断直接返回。
//因为腐烂的水果是同时传递给周围，所以我们将之前遍历二维数组的腐烂水果当作树的第一层，所以我们让round++。开始依次遍历第一层节点，也就是当前队列的节点个数(for循环)。
//然后判断每一个节点的上下左右节点是否满足是新鲜水果，且不越界的条件。如果满足，则将新鲜水果的个数-1，且将该接待你变为腐烂水果，并且加入到队列中。
//退出while条件有两种情况，当新鲜水果的个数大于0，说明没传递完，则返回-1；否则返回分钟(深度)