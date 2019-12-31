//牛客：minimum-path-sum

//题目描述：
//给定一个由非负整数填充的m x n的二维数组，现在要从二维数组的左上角走到右下角，请找出路径上的所有数字之和最小的
//路径。注意：你每次只能向下或向右移动。

//class Solution {
//public:
//
//	int minPathSum(vector<vector<int> > &grid) {
//		// 如果为空或者只有一行，返回0
//		if (grid.empty() || grid[0].empty()) {
//			return 0;
//		}
//		// 获取行和列大小
//		const int M = grid.size();
//		const int N = grid[0].size();
//		// F(i,j)
//		vector<vector<int> > ret(M, vector<int>(N, 0));
//		ret[0][0] = grid[0][0];
//		for (int i = 1; i != M; ++i) {
//			ret[i][0] = grid[i][0] + ret[i - 1][0];
//		}
//		for (int i = 1; i != N; ++i) {
//			ret[0][i] = grid[0][i] + ret[0][i - 1];
//		}
//		// F(i,j) = min{F(i-1,j) , F(i,j-1)} + (i,j)
//		for (int i = 1; i < M; ++i) {
//			for (int j = 1; j < N; ++j) {
//				ret[i][j] = grid[i][j] + min(ret[i - 1][j], ret[i][j - 1]);
//			}
//		}
//		return ret[M - 1][N - 1];
//	}
//};