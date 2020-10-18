//输入描述
//输入第一行仅包含一个正整数n，表示任意序列的长度。(1 <= n <= 20000)
//输入第二行包含n个整数，空格隔开，表示给出的序列，每个数的绝对值都小于10000。
//输出描述
//输出仅包含一个整数，表示最少的操作数量。
//样例输入
//5
//- 1 2 3 10 100
//样例输出
//103
//#include <iostream>
//#include <vector>
//#include <algorithm>
////#include <stdlib.h>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> arr;
//	int num;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> num;
//		arr.push_back(num);
//	}
//	sort(arr.begin(), arr.end());
//	int operation = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		operation += abs(arr[i-1] - i);
//	}
//	cout << operation << endl;
//	//system("pause");
//	return 0;
//}


//输入描述
//输入第一行仅包含三个正整数n, x, y，中间用空格隔开，分别表示参赛的人数和晋级淘汰人数区间。(1 <= n <= 50000, 1 <= x, y <= n)
//输入第二行包含n个整数，中间用空格隔开，表示从1号选手到n号选手的成绩。(1 <= a_i <= 1000)
//输出描述
//输出仅包含一个整数，如果不存在这样的m，则输出 - 1，否则输出符合条件的最小的值。
//样例输入
//6 2 3
//1 2 3 4 5 6
//样例输出
//3

//#include <iostream>
//#include <vector>
//#include <algorithm>
////#include <stdlib.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int x, y;
//	cin >> x >> y;
//	int num;
//	vector<int> arr;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> num;
//		arr.push_back(num);
//	}
//	vector<int> qujian;
//	for (int i = x; i <= y; ++i)
//	{
//		qujian.push_back(i);
//	}
//	int start = 0;
//	int end = qujian.size() - 1;
//	bool judge = false;
//	while (start <= end)
//	{
//		if (qujian[start] + qujian[end] == n)
//		{
//			judge = true;
//			break;
//		}
//		else if (qujian[start] + qujian[end] < n)
//		{
//			start++;
//		}
//		else
//		{
//			end--;
//		}
//	}
//	if (judge == true)
//	{
//		sort(arr.begin(), arr.end());
//		cout << arr[qujian[start] - 1] << endl;
//	}
//	else
//	{
//		cout << -1 << endl;
//	}
//	//system("pause");
//	return 0;
//}


//当男职员进入食堂时，他会优先选择已经坐有1人的餐桌用餐，只有当每张餐桌要么空着要么坐满2人时，他才会考虑空着的餐桌；
//当女职员进入食堂时，她会优先选择未坐人的餐桌用餐，只有当每张餐桌都坐有至少1人时，她才会考虑已经坐有1人的餐桌；无论男女
//，当有多张餐桌供职员选择时，他会选择最靠左的餐桌用餐。
//输入描述
//第一行输入一个整数T（1 <= T <= 10），表示数据组数。
//每组数据占四行，第一行输入一个整数N（1 <= N <= 500000）；
//第二行输入一个长度为N且仅包含数字0、1、2的字符串，第i个数字表示左起第i张餐桌已坐有的用餐人数；
//第三行输入一个整数M（1 <= M <= 2N且保证排队的每个人进入食堂时都有可供选择的餐桌）；
//第四行输入一个长度为M且仅包含字母M、F的字符串，若第 i 个字母为M，则排在第 i 的人为男性，否则其为女性。
//输出描述
//每组数据输出占M行，第 i 行输出一个整数 j （1 <= j <= N），表示排在第 i 的人将选择左起第 j 张餐桌用餐。
//样例输入
//1
//5
//01102
//6
//MFMMFF
//样例输出
//2
//1
//1
//3
//4
//4
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		string zhuozi;
		zhuozi.resize(N);
		for (int i = 0; i < N; ++i)
		{
			cin >> zhuozi[i];
		}
		int M;
		cin >> M;
		string nannv;
		nannv.resize(M);
		for (int i = 0; i < M; ++i)
		{
			cin >> nannv[i];
		}
		vector<int> pailie;
		for (int k = 0; k < M; ++k)
		{
			if (nannv[k] == 'M')  //男
			{
				int i = 0;
				while (i < zhuozi.size())
				{
					if (zhuozi[i] == '1')
					{
						pailie.push_back(i+1);
						zhuozi[i] = '2';
						break;
					}
					i++;
				}
				if (i == zhuozi.size())
				{
					for (int j = 0; j < zhuozi.size(); ++j)
					{
						if (zhuozi[j] == '0')
						{
							pailie.push_back(j+1);
							zhuozi[j] = '1';
							break;
						}
					}
				}
			}
			else  //女
			{
				int i = 0;
				while (i < zhuozi.size())
				{
					if (zhuozi[i] == '0')
					{
						pailie.push_back(i+1);
						zhuozi[i] = '1';
						break;
					}
					i++;
				}
				if (i == zhuozi.size())
				{
					for (int j = 0; j < zhuozi.size(); ++j)
					{
						if (zhuozi[j] == '1')
						{
							pailie.push_back(j+1);
							zhuozi[j] = '2';
							break;
						}
					}
				}
			}
		}
		for (int i = 0; i < pailie.size(); ++i)
		{
			cout << pailie[i] << endl;
		}
	}
	system("pause");
	return 0;
}
