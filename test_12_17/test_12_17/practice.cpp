//剑指offer：顺时针打印矩阵
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix) {
//		vector<int> res;                                             
//		int row = matrix.size();
//		int col = matrix[0].size();
//		int left = 0, right = col - 1, top = 0, bottom = row - 1;             //采用四个变量记录矩阵的位置
//		if (row == 0 || col == 0)
//			return res;
//		while (left <= right && top <= bottom)
//		{
//			for (int i = left; i <= right; ++i)
//			{
//				res.push_back(matrix[top][i]);
//			}
//			for (int i = top + 1; i <= bottom; ++i)
//			{
//				res.push_back(matrix[i][right]);
//			}
//			if (top != bottom)                 //如果不加判断，会将当前行重复加入到数组中
//			{
//				for (int i = right - 1; i >= left; --i)
//				{
//					res.push_back(matrix[bottom][i]);
//				}
//			}
//			if (left != right)                //如果不加判断，会将当前列重复加入到数组中
//			{
//				for (int i = bottom - 1; i>top; --i)          //*****好奇：为什么不可以写成 i>=top-1?
//				{
//					res.push_back(matrix[i][left]);
//				}
//			}
//			left++;
//			top++;
//			right--;
//			bottom--;
//		}
//		return res;
//	}
//};


//思想：用左上和右下的坐标定位出一次要旋转打印的数据，一次旋转打印结束后，往对角分别前进和后退一个单位
//需要注意：考虑单行和单列的情况