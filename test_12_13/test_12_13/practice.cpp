//class Solution {
//public:
//	int uniquePaths(int m, int n)
//	{
//		if (m < 1 || n < 1)
//		{
//			return 0;
//		}
//		// ����F(i,j)�ռ䣬��ʼ��
//		vector<vector<int> > ret(m, vector<int>(n, 1));
//		for (int i = 1; i < m; ++i)
//		{
//			for (int j = 1; j < n; ++j)
//			{
//				// F(i,j) = F(i-1,j) + F(i,j-1)
//				ret[i][j] = ret[i - 1][j] + ret[i][j - 1];
//			}
//		}
//		return ret[m - 1][n - 1];
//	}
//};