//leetcode：数据流中的移动平均值
//题目描述：
//给定一个整数数据流和一个窗口大小，根据该滑动窗口的大小，计算其所有整数的移动平均值。
//示例 :
//MovingAverage m = new MovingAverage(3);
//m.next(1) = 1
//m.next(10) = (1 + 10) / 2
//m.next(3) = (1 + 10 + 3) / 3
//m.next(5) = (10 + 3 + 5) / 3
//
//class MovingAverage {
//public:
//	MovingAverage(int size) {
//		this->size = size;
//		sum = 0;
//	}
//
//	double next(int val) {
//		if (q.size() >= size) {
//			sum -= q.front(); 
//			q.pop();
//		}
//		q.push(val);
//		sum += val;
//		return sum / q.size();
//	}
//
//private:
//	queue<int> q;
//	int size;
//	double sum;
//};
//该题思路：
//这道题定义了一个MovingAverage类，里面可以存固定个数字，然后我们每次读入一个数字，如果加上这个数字后总个数大于限制的个数，那么
//我们移除最早进入的数字，然后返回更新后的平均数，这种先进先出的特性最适合使用队列queue来做，而且我们还需要一个double型的变量
//sum来记录当前所有数字之和，这样有新数字进入后，如果没有超出限制个数，则sum加上这个数字，如果超出了，那么sum先减去最早的数字，
//再加上这个数字，然后返回sum除以queue的个数即可。
//请记住，当你想要按顺序处理元素时，使用队列可能是一个很好的选择。


//广度优先搜索（BFS）的一个常见应用是找出从根结点到目标结点的最短路径。




//leetcode：岛屿数量
//题目描述：
//给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。
//岛屿总是被水包围，并且每座岛屿只能由水平方向或竖直方向上相邻的陆地连接形成。
//此外，你可以假设该网格的四条边均被水包围。每座岛屿只能由水平和/或竖直方向上相邻的陆地连接而成。
//方法一：简单粗暴深度优先搜索(DFS)
//class Solution {
//public:
//	void DFS(vector<vector<char>>& grid, int i, int j)
//	{
//		if (i<0 || i >= grid.size() || j<0 || j >= grid[0].size() || grid[i][j] == '0')
//		{
//			return;
//		}
//		grid[i][j] = '0';
//		DFS(grid, i, j + 1);
//		DFS(grid, i + 1, j);
//		DFS(grid, i, j - 1);
//		DFS(grid, i - 1, j);
//	}
//	int numIslands(vector<vector<char>>& grid) {
//		int count = 0;
//		for (int i = 0; i<grid.size(); ++i)               //因为岛屿数量不只一个，所以我们需要遍历二维数组
//		{
//			for (int j = 0; j<grid[0].size(); ++j)
//			{
//				if (grid[i][j] == '1')
//				{
//					count++;
//					DFS(grid, i, j);
//				}
//			}
//		}
//		return count;
//	}
//};
//该方法思路：
//目标是找到矩阵中 “岛屿的数量” ，上下左右相连的 1 都被认为是连续岛屿。
//dfs方法： 设目前指针指向一个岛屿中的某一点(i, j)，寻找包括此点的岛屿边界。从(i, j) 向此点的上下左右(i + 1, j), (i - 1, j), 
//(i, j + 1), (i, j - 1) 做深度搜索。
//终止条件：(i, j) 越过矩阵边界；grid[i][j] == 0，代表此分支已越过岛屿边界。
//为了防止出现死循环，则我们需要将走过的路标记，防止再次遍历可能导致死循环搜索岛屿的同时，执行 grid[i][j] = '0'，即将岛屿所有
//节点删除，以免之后重复搜索相同岛屿。
//主循环：
//遍历整个矩阵，当遇到 grid[i][j] == '1' 时，从此点开始做深度优先搜索 dfs，岛屿数 count + 1 且在深度优先搜索中删除此岛屿。
//最终返回岛屿数 count 即可。

//方法二：广度优先搜索(BFS)
//class Solution {
//public:
//	int numIslands(vector<vector<char>>& grid) {
//		int row = grid.size();
//		if (!row)
//			return 0;
//		int col = grid[0].size();
//		int count = 0;
//		for (int i = 0; i<row; ++i)
//		{
//			for (int j = 0; j<col; ++j)
//			{
//				if (grid[i][j] == '1')
//				{
//					count++;
//					grid[i][j] = '0';
//					queue<pair<int, int>> q;
//					q.push(make_pair(i, j));
//					while (!q.empty())
//					{
//						auto node = q.front();
//						q.pop();
//						int cur_row = node.first;
//						int cur_col = node.second;
//						if (cur_row - 1 >= 0 && grid[cur_row - 1][cur_col] == '1')
//						{
//							q.push(make_pair(cur_row - 1, cur_col));
//							grid[cur_row - 1][cur_col] = '0';
//						}
//						if (cur_row + 1<row && grid[cur_row + 1][cur_col] == '1')
//						{
//							q.push(make_pair(cur_row + 1, cur_col));
//							grid[cur_row + 1][cur_col] = '0';
//						}
//						if (cur_col - 1 >= 0 && grid[cur_row][cur_col - 1] == '1')
//						{
//							q.push(make_pair(cur_row, cur_col - 1));
//							grid[cur_row][cur_col - 1] = '0';
//						}
//						if (cur_col + 1<col && grid[cur_row][cur_col + 1] == '1')
//						{
//							q.push(make_pair(cur_row, cur_col + 1));
//							grid[cur_row][cur_col + 1] = '0';
//						}
//					}
//				}
//			}
//		}
//		return count;
//	}
//};
//该题思路：
//假若采用BFS算法，则我们需要定义两个for循环，以至于可以遍历整个图(二维数组)
//其次，我们知道，图由横纵坐标组成，所以我们队列queue中的节点类型为pair类型。
//接着我们先让左上角的第一个节点入队，下来我们进入while循环，判断队列是否为空，当不为空时，则取出队首元素，获取该位置的上下左右
//孩子节点，假若这些节点满足在一定的坐标界限内且该位置为陆地'1'，则我们将这些孩子节点依次加入到队列中。循环取队首元素，且将队首
//位置的孩子节点入队，知道队列为空，则这次寻找陆地的范围结束。
//该题不是类似于求最短距离，只需要广度搜索1次；该题是求有多少个陆地，所以我们需要遍历二维数组的节点，多次广度搜索。


