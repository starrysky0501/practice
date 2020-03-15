//牛客：五子棋

//题目描述：
//NowCoder最近爱上了五子棋，现在给你一个棋局，请你帮忙判断其中有没有五子连珠（超过五颗也算）。
//输入描述 :
//输入有多组数据，每组数据为一张20x20的棋盘。
//其中黑子用“*”表示，白子用“ + ”表示，空白位置用“.”表示。
//输出描述 :
//如果棋盘上存在五子连珠（无论哪种颜色的棋子），输入“Yes”，否则输出“No”。

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int arr[4][2][2] = { { { -1, 0 }, { 1, 0 } }, { { 0, -1 }, { 0, 1 } }, { { -1, -1 }, { 1, 1 } }, { { -1, 1 }, { 1, -1 } } };
//该三维数组表达的意思是以一个点为中心，有四个大方向，大方向包括上下两个小部分，每一部分由横纵两个坐标构成
int count(vector<string> &chess, char value, int x, int y)    
{
	int max_c = 0;
	for (int i = 0; i<4; ++i)   //四个大方向，横竖两对角
	{
		int c = 0;              //记录一条线上满足要求的点个数
		for (int j = 0; j<2; ++j)   //大方向内的两个小分支
		{
			int x1 = x, y1 = y;
			while (x1 >= 0 && x1<20 && y1 >= 0 && y1<20 && chess[x1][y1] == value)
			{
				x1 = x1 + arr[i][j][0];
				y1 = y1 + arr[i][j][1];
				c++;
			}
		}
		max_c = max(c, max_c);
	}
	return max_c - 1;   //因为把x,y计算了两次
}
bool result(vector<string> &chess)
{
	for (int i = 0; i<chess.size(); ++i)            //不能将该双层for循环放在主函数里面,因为一旦找到>=5的点就应该结束，如果在主函数中没办法停止
	{
		for (int j = 0; j<chess[i].size(); ++j)
		{
			if (chess[i][j] == '*' || chess[i][j] == '+')
			{
				if (count(chess, chess[i][j], i, j) >= 5)
				{
					return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	vector<string> chess(20);
	while (cin >> chess[0])
	{
		for (int i = 1; i<chess.size(); ++i)
		{
			cin >> chess[i];
		}
		if (result(chess))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
