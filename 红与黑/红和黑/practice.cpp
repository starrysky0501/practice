//牛客：红与黑

//题目描述：
//有一间长方形的房子，地上铺了红色、黑色两种颜色的正方形瓷砖。你站在其中一块黑色的瓷砖上，只能向相邻的
//（上下左右四个方向）黑色瓷砖移动。请写一个程序，计算你总共能够到达多少块黑色的瓷砖。
//输入描述 :
//输入包含多组数据。每组数据第一行是两个整数 m 和 n（1≤m, n≤20）。紧接着 m 行，每行包括 n 个字符。每个字
//符表示一块瓷砖的颜色，规则如下：1.“.”：黑色的瓷砖；2.“#”：白色的瓷砖；3.“@”：黑色的瓷砖，并且你站在
//这块瓷砖上。该字符在每个数据集合中唯一出现一次。
//输出描述 :
//对应每组数据，输出总共能够到达多少块黑色的瓷砖。


//方法一：
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int res = 0;
//int arr[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };  //上下左右
//void DFS(vector<string> &rb, vector<vector<int>> &path, int i, int j, int m, int n)
//{
//	if (rb[i][j] == '.' || rb[i][j] == '@')  //不用判断(i,j)处是否为0，因为第一次总判断是符号@，之后递归进入都是满足为0，则可以递归，下面有if语句判断
//	{
//		res++;                               //大家会很疑问，为什么没有判断'#'，其实不用判断，因为第一次进来的字符首先是'@',之后每次满足条件是'.'才可以递归
//	}
//	path[i][j] = 1;    //将当前的坐标标记，表示已经走过，之后不能在走
//
//	for (int k = 0; k<4; ++k)   //关于当前坐标的上下左右，进行深度优先搜索
//	{
//		int new_row = i + arr[k][0];
//		int new_col = j + arr[k][1];
//		if (new_row<0 || new_row >= m || new_col<0 || new_col >= n || path[new_row][new_col] == 1)   //当不满足该表格的界限，以及此处是1，已经走过，则回退，向另一个方向判断
//		{
//			continue;
//		}
//		if (rb[new_row][new_col] == '.')     //此处的path一定为0，因为当为1时，都会进行continue处理
//		{
//			DFS(rb, path, new_row, new_col, m, n);
//		}
//	}
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		vector<string> RB(m);
//		vector<vector<int>> board(m, vector<int>(n, 0));
//		for (int i = 0; i<m; ++i)
//		{
//			cin >> RB[i];
//		}
//		for (int i = 0; i<m; ++i)
//		{
//			for (int j = 0; j<RB[i].size(); ++j)      //注意:string的size()不包含'\0'
//			{
//				if (RB[i][j] == '@')
//				{
//					DFS(RB, board, i, j, m, n);
//				}
//			}
//		}
//		cout << res << endl;
//		res = 0;
//	}
//	return 0;
//}

//思路总结：定义两个数组，一个存放实际对应的颜色，一个记录该对应位置是否走过.


//方法二：
//#include<iostream>
//#include<vector>
//using namespace std;
//int count;         //全局变量，未给初始值，默认为0；记录黑颜色的个数
//void DFS(vector<vector<char>> &board, int x, int y)
//{
//	if (x<0 || x >= board.size() || y<0 || y >= board[0].size() || board[x][y] == '#')
//		return;
//	count++;
//	board[x][y] = '#';      //已经计算过的黑颜色，之后不能在计算，否则重复
//	DFS(board, x + 1, y);
//	DFS(board, x - 1, y);
//	DFS(board, x, y + 1);
//	DFS(board, x, y - 1);
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		vector<vector<char>> board(m, vector<char>(n));
//		int x, y;
//		for (int i = 0; i<m; ++i)
//		{
//			for (int j = 0; j<n; ++j)
//			{
//				cin >> board[i][j];
//				if (board[i][j] == '@')
//				{
//					x = i;
//					y = j;
//				}
//			}
//		}
//		DFS(board, x, y);
//		cout << count << endl;
//		count = 0;       //记住一定要置0，方便下组测试用例
//	}
//}

//方法一相比较于方法二，会减少一些没必要的递归，在该栈帧中已经判断好能否进行递归