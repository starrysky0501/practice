//牛客：最长上升子序列

//广场上站着一支队伍，她们是来自全国各地的扭秧歌代表队，现在有她们的身高数据，请你帮忙找出身高依次递增的子序列。 
//例如队伍的身高数据是（1、7、3、5、9、4、8），其中依次递增的子序列有（1、7），（1、3、5、9），（1、3、4、8）等，
//其中最长的长度为4。
//输入描述 :
//输入包含多组数据，每组数据第一行包含一个正整数n（1≤n≤1000）。紧接着第二行包含n个正整数m（1≤n≤10000），代表
//队伍中每位队员的身高。
//输出描述 :
//对应每一组数据，输出最长递增子序列的长度。

//采用动态规划的方法：
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> arr(n);
		for (int i = 0; i<n; ++i)
		{
			cin >> arr[i];
		}

		vector<int> board(n, 1);
		int max_length = 1;
		for (int i = 1; i<n; ++i)
		{
			for (int j = 0; j<i; ++j)
			{
				if (arr[i]>arr[j])
				{
					board[i] = max(board[i], board[j] + 1);
				}
			}
			max_length = max(max_length, board[i]);
		}
		cout << max_length << endl;
	}
	return 0;
}

//动态规划的一个特点就是当前解可以由上一个阶段的解推出， 由此，把我们要求的问题简化成一个更小的子问题。子问题具
//有相同的求解方式，只不过是规模小了而已。最长上升子序列就符合这一特性。

//思路：dp[i]表示第i个元素的最长上升子序列的长度，初始条件dp[i] = 1。  dp[i]如何更新呢？若第i个值大于其前面某一个
//元素（假设索引为j），(第一重for循环控制第几个元素,第二重for循环控制索引的取值,必须小于i)那么dp[i] = dp[j] + 1，
//故可令j在0~i - 1索引，用一个max_val记录当前dp[i]的最大值，在第二重for循环每走完一趟，更新max_val的值.
//即：dp[i] = max(dp[j]) + 1。

//状态设计：board[i]代表以arr[i]结尾的LIS(最长上升子序列)的长度
//状态转移：board[i] = max{ board[j] + 1 ，board[i] } (1 <= j <  i，arr[j] < arr[i])
//边界处理：board[i] = 1 (1 <= i <= n)
//时间复杂度：O(n^2)
