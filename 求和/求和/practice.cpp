//深度优先搜索

//牛客：求和

//题目描述：
//输入两个整数 n 和 m，从数列1，2，3.......n 中随意取几个数, 使其和等于 m, 要求将其中所有的可能组合列出来
//输入描述 :
//每个测试输入包含2个整数, n和m
//输出描述 :
//按每个组合的字典序排列输出, 每行输出一种组合


//方法一：采用深度优先搜索方法
//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> value;
//void DFS(vector<int> ret, int cur_pos, int n, int m, int cur_sum)
//{
//	if (cur_pos >= n)
//		return;
//	cur_sum += value[cur_pos];
//	ret.push_back(value[cur_pos]);
//	if (cur_sum == m)
//	{
//		for (int i = 0; i<ret.size() - 1; ++i)
//		{
//			cout << ret[i] << " ";
//		}
//		cout << ret[ret.size() - 1] << endl;
//		return;
//	}
//	else if (cur_sum>m)
//	{
//		return;
//	}
//	DFS(ret, cur_pos + 1, n, m, cur_sum);                    //例如此处假如有三个值
//	auto it = ret.end();
//	ret.erase(--it);
//	DFS(ret, cur_pos + 1, n, m, cur_sum - value[cur_pos]);   //则此处有两个值
//}
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		for (int i = 0; i<n; ++i)
//		{
//			value.push_back(i + 1);
//		}
//		vector<int> ret;
//		int sum = 0;
//		DFS(ret, 0, n, m, sum);  //ret数组存储为了满足和为m的值，0代表初始位置的下标，m是需要满足的和,sum是当前和,n最大下标
//		value.clear();
//	}
//}

//该题思路：采用了深度优先搜索的方法，可以满足按照字典序输出从1到之后的每一个值，接着从2到之后的每一个值，以此类推...
//进入DFS函数，当前下标的值未超过n，则将改下标对应的值加入到ret数组中,接着更改当前和；之后判断当前和是否等于需要
//满足的和，判断是否超过满足的和，这两个条件满足，都要回退。因为当前和满足后，就不需要继续添加值，当超过当前值时，
//更不需要继续添加值，所以回退。接着35到38行的代码，用数字演示表达的含义
//
//当n=5，m=5
//主函数：DFS([],0,5,5,0) 👇
//				DFS([1],1,5,5,1) 👇---erase(1)---接着继续调用(叙述到此停止)
//						DFS([1,2],2,5,5,3)👇------erase(2)------DFS([1],2,5,5,1)👇     连续两次DFS,接着回退
//								DFS(在这个函数中会回退，当前和>5)👆            DFS([1,3],3,5,5,4)👇----erase(3)---DFS([1,4],3,5,5,0)👇        连续两次DFS，接着回退
//																					  DFS(回退，和>5)👆							DFS(满足和为5，回退)👆
//注：erase括号中是删除数组中的某个值

//[1]--[1,2]--[1,2,3]--[1,3]--[1,3,4]--[1,4]--[2]--[2,3]--[3]--[3,4]--[4]--[4,5]--[5],ret中值的演变


//方法二：类似于背包问题
//#include<iostream>
//#include<vector>
//using namespace std;
//void help(vector<int> &ret, int n, int m, int beg)
//{
//	if (m == 0)
//	{
//		for (int i = 0; i<ret.size(); ++i)
//		{
//			i == 0 ? cout << ret[i] : cout << " " << ret[i];
//		}
//		cout << endl;
//	}
//	for (int i = beg; i <= m && i <= n; ++i)          //n控制可选择的数，m控制的是离5还差几
//	{
//		ret.push_back(i);             //要这个数
//		help(ret, n, m - i, i + 1);   //试探假如要这个数，是否满足条件
//		ret.pop_back();               //不要这个数。
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> ret;
//	help(ret, n, m, 1);
//	return 0;
//}
//该题思路：
//假设问题的解为F(n, m)，可分解为两个子问题 F(n - 1, m - n)和F(n - 1, m)。对这两个问题递归求解，求解过程
//中，如果找到了符合条件的数字组合，则打印出来 例如 1, 2, 3, 4, 5, 求有多少中组合和为 5 对于 1 这个元素
//来说, 可能会放到结果中, 可能不放到结果中 如果放到结果中, 就相当于求 2...5 中取若干个数字和为 4. (即为
//F(n - 1, m - n)) 如果不放到结果中, 就相当于求 2...5 中取若干个数字和为 5. (即为F(n - 1, m))
