//牛客：顺时针打印矩阵

//题目描述
//对于一个矩阵，请设计一个算法从左上角(mat[0][0])开始，顺时针打印矩阵元素。
//给定int矩阵mat, 以及它的维数nxm，请返回一个数组，数组中的元素为矩阵元素的顺时针输出。

//class Printer {
//public:
//	vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
//		vector<int> arr(m*n);
//		if (n == 0 || m == 0)
//			return arr;
//		int sx = 0, sy = 0, ex = n - 1, ey = m - 1;   //每次最外层外层矩阵的横纵坐标起始和结束
//		int i = 0, j = 0, k = 0;   //标记矩阵的走向
//		while (sx <= ex && sy <= ey)
//		{
//			if (sx == ex) //只有一行
//			{
//				for (; j <= ey; ++j, ++k)
//				{
//					arr[k] = mat[sx][j];
//				}
//				return arr;
//			}
//			if (sy == ey) //只有一列
//			{
//				for (; i <= ex; ++i, ++k)
//				{
//					arr[k] = mat[i][sy];
//				}
//				return arr;
//			}
//			//一圈一圈遍历矩阵
//			for (; j<ey; ++j, ++k)
//			{
//				arr[k] = mat[i][j];
//			}
//			for (; i<ex; ++i, ++k)
//			{
//				arr[k] = mat[i][j];
//			}
//			for (; j>sy; --j, ++k)
//			{
//				arr[k] = mat[i][j];
//			}
//			for (; i>sx; --i, ++k)
//			{
//				arr[k] = mat[i][j];
//			}
//			//此时i和j已经走到起初开始遍历的位置，将外层的矩阵遍历了一遍
//			++i;
//			++j;
//			++sx;
//			++sy;
//			--ex;
//			--ey;
//		}
//		return arr;
//	}
//};
//该题思路：
//一圈一圈遍历矩阵，采用4个变量分别控制矩阵的左上角和右下角的坐标，用i,j变量控制矩阵的走向。
//注意while循环内的判断条件必须是<=，因为会有一行和一列的出现
//在while循环内部有4个for循环，按照顺时针的走向，控制向右，向下，向左，向上
//该题请注意边界值的设置

//class Printer {
//public:
//	vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
//		int x1 = 0, y1 = 0, x2 = n - 1, y2 = m - 1;
//		vector<int> arr;
//		int k = 0;
//		while (x1 <= x2 && y1 <= y2)
//		{
//			for (int j = y1; j <= y2; ++j, ++k)  //注意：这四个循环中，一定至少需要有一个带上等于，之前写的都是<，而不是<=，当还剩矩阵圈一层层减小，假如只剩一个元素时，则打印不出来。
//			{
//				arr.push_back(mat[x1][j]);
//			}
//			for (int i = x1 + 1; i <= x2; ++i, ++k)
//			{
//				arr.push_back(mat[i][y2]);
//			}
//			for (int j = y2 - 1; x1<x2 &&j >= y1; --j, ++k)    注意：加上了判断条件，当只有一行时，如果不限制，则会将改行顺逆各打印一次
//			{
//				arr.push_back(mat[x2][j]);
//			}
//			for (int i = x2 - 1; y1<y2 && i>x1; --i, ++k)     注意：加上了判断条件，考虑只有一列时。
//			{
//				arr.push_back(mat[i][y1]);
//			}
//			x1++; y1++;
//			x2--; y2--;
//		}
//		return arr;
//	}
//};
//该方法思路：
//只需要4个for循环，在最后两个for循环中需要考虑一行或者一列时的特殊情况，这个代码的边界条件更加不好控制，需要注意!!!