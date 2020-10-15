//数字的重排列
//题目描述：
//给一个数不包含前导0的数n，现在将n的各位数字的顺序重组，在这些数中，有多少个数是m的倍数？ 例如112, 重组后有三个数：112, 121, 211
//输入描述
//输入包含两个数，n和m，含义如题面所示
//输出描述
//输出一个数，代表m的倍数的个数。
//样例输入
//112 4
//样例输出
//1
//提示
//数据范围：n≤10 ^ 18, 1≤m≤100
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <stdlib.h>
//using namespace std;
//void curusion(int k, vector<int> &nums, int numsSize, vector<vector<int>> & res, vector<int> &tmp, map<int, int> &mp)
//{
//	if (k == numsSize)
//	{
//		res.push_back(tmp);
//		return;
//	}
//	for (auto &p : mp)
//	{
//		if (p.second == 0)
//			continue;
//		p.second--;
//		tmp.push_back(p.first);
//		curusion(k + 1, nums, numsSize, res, tmp, mp);
//		tmp.pop_back();
//		p.second++;
//	}
//}
//int main()
//{
//	long long n;
//	cin >> n;
//	int m;
//	cin >> m;
//	vector<int> arr;
//	while (n != 0)
//	{
//		arr.push_back(n % 10);
//		n = n / 10;
//	}
//	sort(arr.begin(), arr.end());
//	vector<vector<int>> res;
//	vector<int> tmp;
//	map<int, int> mp;
//	for (int e : arr)
//	{
//		mp[e]++;
//	}
//	curusion(0, arr, arr.size(), res, tmp, mp);
//	vector<long long> v;
//	long long zhi;
//	for (int i = 0; i < res.size(); ++i)
//	{
//		zhi = 0;
//		for (int j = 0; j < res[i].size(); ++j)
//		{
//			zhi *= 10;
//			zhi += res[i][j];
//		}
//		v.push_back(zhi);
//	}
//	int count = 0;
//	for (int i = 0; i < v.size(); ++i)
//	{
//		if (v[i] % m == 0)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}



//题目描述：
//现在你在玩一款游戏，叫做节奏小师。它有三种判定
//P : Perfect 完美，加200分。
//G : Great 很棒，加100分。
//M : Miss 错过，不加分也不扣分，但累计三次Miss就会输掉游戏。
//	另外有一种奖励是连击奖励。一旦连续三个Perfect之后，后续连击的Perfect分数将变成250分，但一旦打出了Great或者Miss则连
//	击数将重新开始计算。
//	你的任务是根据游戏记录计算分数。特别地，失败记为零分。
//PPPPPGPPMP
//#include <iostream>
//#include <string>
//#include <stdlib.h>
//using namespace std;
//int fenshu(string str)
//{
//	int count = 0;
//	int i = 0;
//	while (i < str.size())
//	{
//		if (i < str.size() && str[i] == 'P')
//		{
//			count += 200;
//			i++;
//			if (i < str.size() && str[i] == 'P')
//			{
//				count += 200;
//				i++;
//				if (i < str.size() && str[i] == 'P')
//				{
//					count += 200;
//					i++;
//					while (i < str.size() && str[i] == 'P')
//					{
//						count += 250;
//						i++;
//					}
//				}
//			}
//
//		}
//		if (i < str.size() && str[i] == 'G')
//		{
//			count += 100;
//			i++;
//		}
//		if (i < str.size() && str[i] == 'M')
//		{
//			i++;
//			if (i < str.size() && str[i] == 'M')
//			{
//				i++;
//				if (i < str.size() && str[i] == 'M')
//				{
//					count = 0;
//					cout << count<< endl;
//					return count;
//				}
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	int count = 0;
//	string str;
//	cin >> str;
//	count = fenshu(str);
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//


//题目描述：
//假想一个绝对光滑的，高度很高的盒子，长度为n，宽度为1。在其中，有许多1 * 1 * 1的光滑铁块，铁块的每一个角一定位于整数
//坐标上。由于宽度为1，我们可以用二维字符图来表示每一个铁块的位置。如下图是一个长度为4，其中有7个铁块的二维字符图
//（'x'代表铁块，'o'代表没有铁块）：
//oooo xooo xoxo xxxx
//每一列的铁块数分别为3, 1, 2, 1
//由于重力的缘故，所有的铁块要么下面是盒子底面，要么下面是另一个铁块。现在，在盒子的右边增加一个强磁铁。所有右边没有其
//他铁块或边界的铁块会向右移动，直到撞上一个铁块和边界停下。在上一张二维图上，加入磁铁后的字符图会变为：
//oooo
//ooox
//ooxx
//xxxx
//每一列的铁块数分别为1, 1, 2, 3。可以证明，这样操作后所有铁块要么下面是盒子底面，要么下面是另一个铁块。 现在给你初始
//每一列有多少个铁块，请你计算，加入磁铁后每一列有多少铁块。
//输入描述
//输入第一行包含一个数n，代表盒子的长度 接下来n个数，空格隔开，代表每一列原本有多少个铁块。
//输出描述
//输出n个数，空格隔开，代表加入磁铁后每一列有多少个铁块。
//样例输入
//4
//3 1 2 1
//样例输出
//1 1 2 3


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int length;
//	cin >> length;
//	vector<int>arr;
//	int num;
//	while (length--)
//	{
//		cin >> num;
//		arr.push_back(num);
//	}
//	sort(arr.begin(), arr.end());
//	for (int i = 0; i<arr.size(); ++i)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}