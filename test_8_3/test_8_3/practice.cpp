//题目描述
//给定一个m行n列的二维地图, 初始化每个单元都是水.
//操作addLand 把单元格(row, col)变成陆地.
//岛屿定义为一系列相连的被水单元包围的陆地单元, 横向或纵向相邻的陆地称为相连(斜对角不算).
//在一系列addLand的操作过程中, 给出每次addLand操作后岛屿的个数.
//二维地图的每条边界外侧假定都是水.
//输入描述:
//多组测试数据，请参考例题处理 每组数据k + 3行, k表示addLand操作次数 第一行 : 表示行数m 第二行 : 表示列数n 第三行 : 表示addLand操作次数k 第4~k + 3行 : row col 表示addLand的坐标。注意超过边界的坐标是无效的。
//输出描述 :
//一行, k个整数, 表示每次addLand操作后岛屿的个数, 用空格隔开，结尾无空格
//#include<iostream>
//using namespace std;
//int arr[101][101] = { 0 };
//int m, n, k;
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//int K  = 1;
//void dfs(int x, int y, int flag) //将岛屿序列号改成flag
//{
//	arr[x][y] = flag;
//	for (int i = 0; i<4; i++)
//	{
//		int xx  = x  + dx[i];
//		int yy  = y  + dy[i];
//		if (xx >= 0 && xx<m && yy >= 0 && yy<n && arr[xx][yy] != 0 && arr[xx][yy] != flag)
//			dfs(xx, yy, flag);
//	}
//}
//
//int check(int x, int y)
//{
//	int ret  = 1;
//	int flag  = 0;
//	for (int i = 0; i<4; i++) //检查四个方向
//	{
//		int xx  = x  + dx[i];
//		int yy  = y  + dy[i];
//		if (xx >= 0 && xx<m && yy >= 0 && yy<n && arr[xx][yy] != 0)
//		{
//			if (flag  == 0)
//			{
//				flag  = arr[xx][yy]; //第一个岛屿
//				ret--;
//			} else {
//				if (arr[xx][yy] != flag) //与第一个岛屿不连通
//				{
//					dfs(xx, yy, flag); //合并到第一个岛屿
//					ret--;
//				}
//			}
//		}
//	}
//	arr[x][y] = flag != 0 ? flag  : K++; //flag==0即四个方向是水    
//	return ret; //返回新增岛屿数 1,0,-1,-2,-3
//}
//
//int main()
//{
//	cin  >> m  >> n  >> k;
//
//	int cnt  = 0;
//	for (int i = 0; i<k; i++)
//	{
//		int x, y;
//		cin  >> x  >> y;
//
//		if (x >= 0 && x <m && y >= 0 && y<n && arr[x][y] == 0)
//		{
//
//			cnt  += check(x, y);
//		}
//		cout  << cnt  << " ";
//	}
//	return 0;
//}
