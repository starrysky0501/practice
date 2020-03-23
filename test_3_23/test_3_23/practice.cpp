//牛客：合唱团(动态规划)

//问题描述：
//有 n 个学生站成一排，每个学生有一个能力值，牛牛想从这 n 个学生中按照顺序选取 k 名学生，要求相邻两个学生的位置编号
//的差不超过 d，使得这k 个学生的能力值的乘积最大，你能返回最大的乘积吗？
//输入描述 :
//每个输入包含 1 个测试用例。每个测试数据的第一行包含一个整数 n(1 <= n <= 50)，表示学生的个数，接下来的一行，包含 n 
//个整数，按顺序表示每个学生的能力值 ai（ - 50 <= ai <= 50）。接下来的一行包含两个整数，k 和 d(1 <= k <= 10, 1 <= d <= 50)。
//输出描述 :
//输出一行表示最大的乘积。

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> value(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> value[i];
	}
	int kk, dd;
	cin >> kk >> dd;
	vector<vector<long long>> f(n + 1, vector<long long>(kk + 1));    //因为最后乘积的数字会比较大： long long 最大到19位数字，int最大到10位数字，10个50相乘是17位数字
	vector<vector<long long>> g(n + 1, vector<long long>(kk + 1));

	for (int i = 1; i <= n; ++i)     //初始化两个数组的第一列，表示kk为1时(只选一个人)，最大的乘积
	{
		f[i][1] = value[i];
		g[i][1] = value[i];
	}

	for (int k = 2; k <= kk; ++k)    //一列一列的初始化值
	{
		for (int one = k; one <= n; ++one)
		{
			long long max_value = LLONG_MIN;
			long long min_value = LLONG_MAX;
			for (int left = max(k - 1, one - dd); left <= one - 1; ++left)  //当one和k定时，二维数组中每个位置存储的最值
			{
				long long temp1 = max(f[left][k - 1] * value[one], g[left][k - 1] * value[one]);
				if (temp1>max_value)
				{
					max_value = temp1;
				}
				long long temp2 = min(f[left][k - 1] * value[one], g[left][k - 1] * value[one]);
				if (temp2<min_value)
				{
					min_value = temp2;
				}
			}
			f[one][k] = max_value;
			g[one][k] = min_value;
		}
	}

	long long result = LLONG_MIN;
	//当k选定数字时，对应的one所在的位置，哪个最大，就是哪个
	for (int one = kk; one <= n; ++one)
	{
		if (f[one][kk]>result)
		{
			result = f[one][kk];
		}
	}
	cout << result << endl;
	return 0;
}

//思路：该题和传统意义上的动态规划不太相似，传统的动态规划对于这道题应该这样思考：尝试用 dp[n][k] 这样的形式来代表
//从n个学生中选取k个，那么其子问题便可以用 dp[n - 1][k - 1] 这种形式来表示，对于第n个学生可以选择也可以不选择。但是
//我们发现该题有两个限制条件：d，以及能力值有负数的情况，所以如何建立dp模型使得满足这些限定条件的同时问题的分析能够
//变得思维清晰才是关键。
//明确的是该题可以使用dp来解决这题，因为1.求解的是最优化问题；2.可以分解为最优子结构。
//问题的分解 :
//从n个学生中，选择k个，可以看成是：先从n个学生里选择最后1个，然后在剩下的里选择k - 1个，并且让这1个和前k - 1个满足
//约束条件(注意该思路和传统思路的不同，这个是从n个学生中选取最后一个，上一个想法是对于最后一个学生(比如第n个学生)要
//么选择他要么不选。)
//数学描述：
//为了得到递推公式，需要建立数学模型。记第k个人的位置为one, 则可以用f[one][k]表示从n个人中选择k个的方案。然后，它的
//子问题，需要从one前面的left个人里面，选择k - 1个，这里left表示k - 1个人中最后一个（即第k - 1个）人的位置，因此，子
//问题可以表示成f[left][k - 1]。学生能力数组记为arr[n + 1], 第 i 个学生的能力值为arr[i]。
//one和left变量说明：
//one表示最后一个人，其取值范围为[1, n];
//left表示第k - 1个人所处的位置，需要和第k个人的位置差不超过d，因此 max{ k - 1, one - d } <= left <= one - 1
//为什么要在 k - 1 和 one - d 中取较大的呢？因为当one - d是有可能小于0的，即选择第一个(或者前几个)时应该会到最左边，
//这时候left的位置要保证的一个条件是他左边剩下的人数还够选。
//在n和k定了之后，需要求解出n个学生选择k个能力值乘积的最大值。因为能力值有正有负，所以
//当one对应的学生能力值为正时，
//f[one][k] = max{ f[left][k - 1] * arr[i] }，　　(min{ k - 1, one - d } <= left <= one - 1);
//此处f[][]是存储n个选k个能力值乘积的最大值数组
//当one对应的学生能力值为负时
//f[one][k] = max{ g[left][k - 1] * arr[i] }，　　(min{ k - 1, one - d } <= left <= one - 1);
//此处g[][]是存储n个选k个能力值乘积的最小值数组

//参考优秀博客思路的链接：https://www.cnblogs.com/f91og/p/9396507.html