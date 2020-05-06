//leetcode：打开转盘锁
//题目描述：
//你有一个带有四个圆形拨轮的转盘锁。每个拨轮都有10个数字： '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' 。每个拨轮可以自由旋
//转：例如把 '9' 变为  '0'，'0' 变为 '9' 。每次旋转都只能旋转一个拨轮的一位数字。锁的初始数字为 '0000' ，一个代表四个拨轮的数字
//的字符串。列表 deadends 包含了一组死亡数字，一旦拨轮的数字和列表里的任何一个元素相同，这个锁将会被永久锁定，无法再被旋转。字符
//串 target 代表可以解锁的数字，你需要给出最小的旋转次数，如果无论如何不能解锁，返回 - 1。
//class Solution {
//public:
//	string plusone(string str, int i)
//	{
//		if (str[i] == '9')
//			str[i] = '0';
//		else
//			str[i] += 1;
//		return str;
//	}
//	string downone(string str, int i)
//	{
//		if (str[i] == '0')
//			str[i] = '9';
//		else
//			str[i] -= 1;
//		return str;
//	}
//	int openLock(vector<string>& deadends, string target) {
//		set<string>visited(deadends.begin(), deadends.end());     //记录已经访问了的节点
//		if (visited.find("0000") != visited.end())                  //当"0000"死亡数字中，则直接返回-1，因为根节点是"0000"
//			return -1;
//		queue<string> q;
//		q.push("0000");
//		visited.insert("0000");
//		int step = 0;      //记录步数
//		while (!q.empty())
//		{
//			int size = q.size();
//			for (int i = 0; i<size; ++i)
//			{
//				string cur = q.front();
//				q.pop();
//				if (cur == target)
//				{
//					return step;
//				}
//				for (int j = 0; j<4; ++j)
//				{
//					string plus_str = plusone(cur, j);
//					string down_str = downone(cur, j);
//					if (visited.find(plus_str) == visited.end())
//					{
//						q.push(plus_str);
//						visited.insert(plus_str);
//					}
//					if (visited.find(down_str) == visited.end())
//					{
//						q.push(down_str);
//						visited.insert(down_str);
//					}
//				}
//			}
//			++step;
//		}
//		return -1;
//	}
//};
//该题思路：
//该题是典型的 BFS 场景
//BFS 问题的本质就是让你在一幅「图」中找到从起点 start 到终点 target 的最近距离
//我们可以将 0000 到 9999 这 10000 状态看成图上的 10000 个节点，两个节点之间存在一条边，当且仅当这两个节点对应的状态只有 1 位
//不同，且不同的那位相差 1（包括 0 和 9 也相差 1 的情况），并且这两个节点均不在数组 deadends 中。那么最终的答案即为 0000 到 
//target 的最短路径。
//我们用广度优先搜索来找到最短路径，从 0000 开始搜索。对于每一个状态，它可以扩展到最多 8 个状态，即将它的第 i = 0, 1, 2, 3 位
//增加 1 或减少 1，将这些状态中没有搜索过并且不在 deadends 中的状态全部加入到队列中，并继续进行搜索。注意 0000 本身有可能也在
//deadends 中。
//所以，我们设置一个set变量visited存储已经访问的节点和不能访问的节点；定义一个队列，先将根节点“0000”加入到对了中，然后进入循
//环，计算该层的节点个数，用for循环依次遍历同一层的节点，接着取出队首元素，判断它是否为目标字符串，如果是则返回step，如果不是则
//开始遍历该节点的子节点，当然，要想加入队列，必须满足一定的条件(该节点未被访问以及不能是deadends字符串)，且记住，该节点已经被
//访问，所以将它加入到visited变量中。

