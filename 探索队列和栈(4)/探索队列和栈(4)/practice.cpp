//leetcode：完全平方数
//题目描述：
//给定正整数 n，找到若干个完全平方数（比如 1, 4, 9, 16, ...）使得它们的和等于 n。你需要让组成和的完全平方数的个数最少。
//示例 1:
//输入 : n = 12
//输出 : 3
//解释 : 12 = 4 + 4 + 4.
//
//示例 2 :
//输入 : n = 13
//输出 : 2
//解释 : 13 = 4 + 9.
//
//方法一：BFS，从0->n
//class Solution {
//public:
//	int numSquares(int n) {
//		int sqrtnum = floor(sqrt(n)); //floor向下取整
//		queue<int>q;
//		q.push(0);
//		int step = 0;
//		while (!q.empty())
//		{
//			step++;
//			int size = q.size();
//			for (int i = 0; i<size; ++i)
//			{
//				int cur = q.front();
//				q.pop();
//				for (int j = 1; j <= sqrtnum; ++j)
//				{
//					int sum = cur + pow(j, 2);
//					if (sum>n)
//					{
//						break;
//					}
//					if (sum == n)
//					{
//						return step;
//					}
//					q.push(sum);
//				}
//			}
//		}
//		return -1;
//	}
//};
//该方法思路：
//已知一个正整数n，让我们寻找若干个完全平方数，使这些数字的和等于n并且满足最短距离。
//已知起点是n，终点是0,求最短距离，则采用BFS算法。
//该思路采用逆向思维，我们应先求出在n以内的最大平方数是多少，例如n=13,则最大平方数为9，则满足小于该数的平方数有3个
//分别是1,4,9。然后我们定义step变量表示距离，定义一个队列，将0作为树的第一层入队，当队列不为空时，我们先求该层的节
//点个数，依次遍历该层的节点，接着我们求孩子节点，也就是该节点周围满足条件的节点sum(需当前节点+平方数),当sum小于n时
//则将sum加入队列，当等于时，直接返回step，当大于时，则不用寻找孩子节点sum。一层一层的遍历，知道队列为空，还没有返
//回，则直接返回-1.
//我们可以发现该代码没有标记已经走过的节点，之前说过对于图，为了防止死循环，我们一般都会标记走过的节点。但是对于该题
//它不会产生死循环。

//方法二：BFS,从n->0
//class Solution {
//public:
//	vector<int> sqrt_n(int n)
//	{
//		vector<int> arr;
//		for (int i = 1; i*i <= n; ++i)
//		{
//			arr.push_back(i*i);
//		}
//		return arr;
//	}
//	int numSquares(int n) {
//		vector<int> sqrt_num = sqrt_n(n);
//		vector<bool> visited(n + 1, false);
//		queue<int>q;
//		q.push(n);
//		visited[n] = true;
//		int step = 0;
//		while (!q.empty())
//		{
//			step++;
//			int size = q.size();
//			for (int i = 0; i<size; ++i)
//			{
//				int cur = q.front();
//				q.pop();
//				for (int j = 0; j<sqrt_num.size(); ++j)
//				{
//					int value = cur - sqrt_num[j];
//					if (value<0)
//					{
//						break;
//					}
//					if (visited[value])
//					{
//						continue;
//					}
//					if (value == 0)
//					{
//						return step;
//					}
//					q.push(value);
//					visited[value] = true;
//				}
//			}
//		}
//		return -1;
//	}
//};
//该方法思路：
//广度优先方法，把该题抽象为一个图，我们其实是要寻找一个到达n的最短完全平方数路径；
//因此我们需要构建一个到达n的完全平方数的图，然后采用BFS的方法搜索最短路径。
//如何构建图：
//1. 从n到0，每个数都是一个节点；
//2. 如果从x到y相差一个完全平方数，则x和y之间连接一条边；
//3. 最后得到一个0到n的无权图，我们直接求n到0的最短路径；
//因为是广度优先遍历，顺序遍历每一行，所以当节点值等于0时，此时一定是最短的路径。
//采用visited存储已经访问了的数字，若节点值在之前已经出现，则不需要再计算，因为一定不会是最短路径。

//当你想首先处理最后一个元素时，栈将是最合适的数据结构。