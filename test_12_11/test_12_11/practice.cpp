//牛客：triangle

//给出一个三角形，计算从三角形顶部到底部的最小路径和，每一步都可以移动到下面一行相邻的数字，
//例如，给出的三角形如下：
//[↵[2], ↵[3, 4], ↵[6, 5, 7], ↵[4, 1, 8, 3]↵]
//最小的从顶部到底部的路径和是2 + 3 + 5 + 1 = 11。


//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) {
//		vector<vector<int>> minsum(triangle);
//		int row = minsum.size();
//		for (int i = 1; i<row; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				if (j == 0)
//					minsum[i][j] = minsum[i - 1][j];
//				else if (j == i)
//					minsum[i][j] = minsum[i - 1][j - 1];
//				else
//					minsum[i][j] = min(minsum[i - 1][j], minsum[i - 1][j - 1]);
//				minsum[i][j] = minsum[i][j] + triangle[i][j];
//			}
//		}
//		int allsum = minsum[row - 1][0];
//		for (int i = 1; i<row; i++)
//		{
//			allsum = min(allsum, minsum[row - 1][i]);
//		}
//		return allsum;
//	}
//};

//方法：动态规划
//状态：
//子状态：从(0,0)到(1,0),(1,1),(2,0),...(n,n)的最短路径和
//F(i,j): 从(0,0)到(i,j)的最短路径和
//状态递推：
//F(i,j) = min( F(i-1, j-1), F(i-1, j)) + triangle[i][j]
//初始值：
//F(0,0) = triangle[0][0]
//返回结果：
//min(F(n-1, i))
