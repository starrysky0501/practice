//牛客：蘑菇阵

//现在有两个好友A和B，住在一片长有蘑菇的由n＊m个方格组成的草地，A在(1, 1), B在(n, m)。现在A想要拜访B，由于她只想去
//B的家，所以每次她只会走(i, j + 1)或(i + 1, j)这样的路线，在草地上有k个蘑菇种在格子里(多个蘑菇可能在同一方格), 问：
//A如果每一步随机选择的话(若她在边界上，则只有一种选择)，那么她不碰到蘑菇走到B的家的概率是多少？
//输入描述 :
//第一行N，M，K(1 ≤ N, M ≤ 20, k ≤ 100), N, M为草地大小，接下来K行，每行两个整数x，y，代表(x, y)处有一个蘑菇。
//输出描述 :
//输出一行，代表所求概率(保留到2位小数)


#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int road[21][21];
double board[21][21];
int main()
{
	int n, m, k;
	while (cin >> n >> m >> k)
	{
		memset(road, 0, sizeof(road)); //sizeof(road)=4*21*21
		memset(board, 0, sizeof(board));
		int x, y;
		for (int i = 0; i<k; ++i)
		{
			cin >> x >> y;
			road[x][y] = 1;
		}

		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				if (i == 1 && j == 1)     //初始条件
				{
					board[i][j] = 1;
					continue;
				}
				if (i == n && j == m)     //该位置记录所求概率
				{
					board[i][j] = board[i - 1][j] + board[i][j - 1];
					continue;
				}
				if (road[i][j])           //当为1时，则说明该处有蘑菇
				{
					board[i][j] = 0;
					continue;
				}
				//四个特殊条件：
				if (i == n)           
				{
					board[i][j] = board[i][j - 1] + 0.5*board[i - 1][j];
					continue;
				}
				if (j == m)
				{
					board[i][j] = board[i - 1][j] + 0.5*board[i][j - 1];
					continue;
				}
				if (i == 1)
				{
					board[i][j] = 0.5*board[i][j - 1];
					continue;
				}
				if (j == 1)
				{
					board[i][j] = 0.5*board[i - 1][j];
					continue;
				}

				board[i][j] = 0.5*board[i - 1][j] + 0.5*board[i][j - 1];
			}
		}

		cout << fixed << setprecision(2) << board[n][m] << endl;
	}
}

//这道题我遇到了一个大坑：
//在双层for循环中if条件判断：i==n /j==m必须在i==1/j==1之前，因为特殊情况，当只有1行或一列的情况时，
//将i==1/j==1放在前面，会出现结果计算错误

//注意：该题不能用可达路径数/总路径数求概率，因为每条路径的概率不同，注意区分
//
//知识点补充：
//1.memset函数：
//头文件：#include<string.h> /#include<cstring>
//作用：作用是将某一块内存中的内容全部设置为指定的值， 这个函数通常为新申请的内存做初始化工作。
//函数原型：void *memset(void *s, int ch, size_t n);
//函数解释：将s中当前位置后面的n个字节 （typedef unsigned int size_t ）用 ch 替换并返回 s 。
//2.c++中函数setprecision和fixed：
//setprecision功能是控制输出流显示浮点数的有效数字个数，如果和fixed合用的话，可以控制小数点后面有几位。
//用法详解：
//http://c.biancheng.net/view/1340.html
//https://zhidao.baidu.com/question/31863763.html