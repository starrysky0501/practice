//ţ�ͣ�unique-paths-ii

//��Ŀ����������˼����Ŀ"Unique Paths": �����ͼ�м�����һЩ�ϰ����ж��ٲ�ͬ��·�����ֱ���0��1�����������ϰ�

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
//		// // ����F(i,j)�ռ䣬��ʼֵΪ0
//		vector<vector<int> > ret(M, vector<int>(N, 0));
//		for (int i = 0; i < M; ++i) {
//			// ��0����ֻҪǰ�����ϰ������涼�޷�����
//			if (obstacleGrid[i][0]) {
//				break;
//			}
//			else {
//				ret[i][0] = 1;
//			}
//		}
//		for (int i = 0; i < N; ++i) {
//			// // ��0����ֻҪǰ�����ϰ������涼�޷�����
//			if (obstacleGrid[0][i]) {
//				break;
//			}
//			else {
//				ret[0][i] = 1;
//			}
//		}
//		for (int i = 1; i < M; ++i) {
//			for (int j = 1; j < N; ++j) {
//				// obstacleGrid[i][j] = 1 ʱ��F(i,j)�޷�����
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