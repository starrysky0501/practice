//牛客：unique-paths-ii

//题目描述：继续思考题目"Unique Paths": 如果在图中加入了一些障碍，有多少不同的路径？分别用0和1代表空区域和障碍

//class Solution {
//public:
//
//	int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
//		if (obstacleGrid.empty()) {
//			return 0;
//		}
//
//		const int M = obstacleGrid.size();
//		const int N = obstacleGrid[0].size();
//		// // 申请F(i,j)空间，初始值为0
//		vector<vector<int> > ret(M, vector<int>(N, 0));
//		for (int i = 0; i < M; ++i) {
//			// 第0列中只要前面有障碍，后面都无法到达
//			if (obstacleGrid[i][0]) {
//				break;
//			}
//			else {
//				ret[i][0] = 1;
//			}
//		}
//		for (int i = 0; i < N; ++i) {
//			// // 第0行中只要前面有障碍，后面都无法到达
//			if (obstacleGrid[0][i]) {
//				break;
//			}
//			else {
//				ret[0][i] = 1;
//			}
//		}
//		for (int i = 1; i < M; ++i) {
//			for (int j = 1; j < N; ++j) {
//				// obstacleGrid[i][j] = 1 时，F(i,j)无法到达
//				if (obstacleGrid[i][j]) {
//					ret[i][j] = 0;
//				}
//				else {
//					// F(i,j) = F(i-1,j) + F(i,j-1)
//					ret[i][j] = ret[i - 1][j] + ret[i][j - 1];
//				}
//			}
//		}
//		return ret[M - 1][N - 1];
//	}
//};