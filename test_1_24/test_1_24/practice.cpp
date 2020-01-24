//剑指offer：机器人的运动范围

//地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，每一次只能向左，右，上，下四个方向移动一格，
//但是不能进入行坐标和列坐标的数位之和大于k的格子。 例如，当k为18时，机器人能够进入方格（35,37），因为3+5+3+7 = 18。
//但是，它不能进入方格（35,38），因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？

//class Solution {
//public:
//	int movingCount(int threshold, int rows, int cols)
//	{
//		int count = 0;
//		vector<vector<bool>> visited(rows, vector<bool>(cols, false));
//		visitCount(threshold, 0, 0, count, visited);
//		return count;
//	}
//
//	void visitCount(int threshold, int rows, int cols, int &count, vector<vector<bool>> &visited){
//		if (rows >= visited.size()
//			|| cols >= visited[0].size()
//			|| visited[rows][cols]
//			|| !CheckThre(threshold, rows, cols))
//			return;
//		++count;
//		visited[rows][cols] = true;
//		visitCount(threshold, rows - 1, cols, count, visited);
//		visitCount(threshold, rows, cols - 1, count, visited);
//		visitCount(threshold, rows + 1, cols, count, visited);
//		visitCount(threshold, rows, cols + 1, count, visited);
//		return;
//	}
//
//	bool CheckThre(int threshold, int rows, int cols){
//		int res = 0;
//		while (rows)
//			res += rows % 10, rows /= 10;
//		while (cols)
//			res += cols % 10, cols /= 10;
//		return res <= threshold;
//	}
//
//};