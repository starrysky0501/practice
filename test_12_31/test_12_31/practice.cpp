//ţ�ͣ�minimum-path-sum

//��Ŀ������
//����һ���ɷǸ���������m x n�Ķ�ά���飬����Ҫ�Ӷ�ά��������Ͻ��ߵ����½ǣ����ҳ�·���ϵ���������֮����С��
//·����ע�⣺��ÿ��ֻ�����»������ƶ���

//class Solution {
//public:
//
//	int minPathSum(vector<vector<int> > &grid) {
//		// ���Ϊ�ջ���ֻ��һ�У�����0
//		if (grid.empty() || grid[0].empty()) {
//			return 0;
//		}
//		// ��ȡ�к��д�С
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