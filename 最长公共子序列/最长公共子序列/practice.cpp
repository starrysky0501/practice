//动态规划：最长公共子序列问题

//题目描述:
//我们有两个字符串m和n，如果它们的子串a和b内容相同，则称a和b是m和n的公共子序列。子串中的字符不一定在原字符串中连续。
//例如字符串“abcfbc”和“abfcab”，其中“abc”同时出现在两个字符串中，因此“abc”是它们的公共子序列。此外，“ab”、“af”等都是它们的字串。
//现在给你两个任意字符串（不包含空格），请帮忙计算它们的最长公共子序列的长度。
//输入描述 :
//输入包含多组数据。
//每组数据包含两个字符串m和n，它们仅包含字母，并且长度不超过1024。
//输出描述 :
//对应每组输入，输出最长公共子序列的长度。

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		int m = str1.size();
		int n = str2.size();
		vector<vector<int>>board(m, vector<int>(n, 0));
		board[0][0] = (str1[0] == str2[0]) ? 1 : 0;
		for (int i = 1; i<m; ++i)
		{
			board[i][0] = (str1[i] == str2[0]) ? 1 : 0;
			board[i][0] = max(board[i - 1][0], board[i][0]);
		}
		for (int j = 1; j<n; ++j)
		{
			board[0][j] = (str1[0] == str2[j]) ? 1 : 0;
			board[0][j] = max(board[0][j - 1], board[0][j]);
		}

		for (int i = 1; i<m; ++i)
		{
			for (int j = 1; j<n; ++j)
			{
				if (str1[i] == str2[j])
				{
					board[i][j] = board[i - 1][j - 1] + 1;
				}
				else
				{
					board[i][j] = max(board[i - 1][j], board[i][j - 1]);
				}
			}
		}
		cout << board[m - 1][n - 1] << endl;
	}
	return 0;
}

//想要理解该问题：则"思考"与"写代码"逆向
//思考时，将两个字符串从后向前看,str1和str2，str1[i]==str2[j]-->最后一个字符相等，则将该问题转换为子问题str[i][j]=str[i-1][j-1]+1，除去最后一个字符，接着查找
//假设最后一个字符不相等，则转换为子问题，将str1减少一个字符和str2比较/str2减少一个字符和str1比较，由于是"最长"，则那个大取哪个值
//写代码时，则需要形成一个二维矩阵，将这个矩阵初始化，右下角存储的值对应结果。我们先应找寻初始条件，dp[0][0]，接着将str1的第一个字符和str2依次比较 & str2的第一个字符和str1比较，将矩阵的第一行和第一列初始化
//接着计算其他位置对应的值，根据递推方程。

//假如采用蛮力算法：
//假设m=str1.size()<b=str2.size()，则str1的子序列有pow(2,m),依次在str2中扫描，每次扫描的
//时间复杂度为o(n),所以该方法的时间复杂度为o(n*2^m).

//该题先观察子问题的界定，发现满足优化原则和子问题重叠性
//所以，得到递推方程：
//c[i,j]:是xi和yj的最长公共子序列的长度
//1.若i=0或j=0，则c[i,j]=0
//2.若i,j>0，xi=yj，则c[i,j]=c[i-1,j-1]+1
//3.若i,j>0，xi！=yj，则max{c[i-1,j],c[i,j-1]}
//该方法的时间复杂度为o(m*n)，初始化表格对应的时间复杂度
//该方法的空间复杂度为o(m*n)，备忘录的大小