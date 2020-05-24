//2018校招真题：工作方案
//题目描述
//牛牛手中有s份工作需要完成, 牛牛准备将工作分给三位员工。考虑到三位员工还有其他工作需要做, 牛牛规定他们每人必须要参与的工作数量分别是a, b, c。
//牛牛需要制定详细的工作方案, 需要满足每份工作至少有一个人做, 同一份工作可以由两个或者三个人共同参与。牛牛一下意识到可能的工作方案很多, 牛牛需要你帮他计算一下一共有多少种不同的工作方案(对于两种方案, 如果某份工作分配的人或者人数不一样就考虑为不一样的工作方案)。
//对于输入样例, s = 3, a = 3, b = 1, c = 1
//a要参与所有三份工作, b和c各自有三种选择, 所以不同的工作方案是3 * 3 * 1 = 9
//如果s = 3, a = 1, b = 1, c = 1
//相当于对三个员工做全排列, 所以不同的工作方案是3 * 2 * 1 = 6
//输入描述:
//输入包括一行, 一行包括4个正整数s, a, b, c(1 ≤ s ≤ 50, 1 ≤ a, b, c ≤ s), 分别表示需要完成的工作份数, 每个员工必须要参与的工作数量。
//输出描述 :
//输出一个正整数, 表示不同的方案种数, 答案可能很大, 输出答案对1000000007取模。
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define MAX 51
//const int mod = 1000000007;
//int main(int argc, char *argv[])
//{
//	int i, j, s, left, cnk[MAX][MAX];
//	long int cnt, tmp;
//	vector<int> work(3);
//
//	cin >> s >> work[0] >> work[1] >> work[2];
//	sort(work.begin(), work.end());//排序，保证work2最大，work0最小
//	for (i = 1, cnk[0][0] = 1; i < MAX; i++) //动态规划求c(n,k)
//	{
//		cnk[i][0] = 1;
//		for (j = 1; j < MAX; j++)
//		{
//			cnk[i][j] = (cnk[i - 1][j - 1] + cnk[i - 1][j]) % mod; //没有取余的话会溢出
//		}
//	}
//
//	left = s - work[2]; //给工作量最大的分配后，剩余工作量
//	for (i = 0, cnt = 0; i <= left; i++) //i是work1在left中分担的工作量
//	{
//		if (i <= work[1] && left - i <= work[0])//left - i是work0在left中分担的工作量
//		{
//			tmp = cnk[work[2]][work[1] - i] % mod; // 在work2中，有work[1] - i分配给work1
//			tmp = (tmp * cnk[left][i]) % mod; // left中有i个分配给work1
//			tmp = (tmp * cnk[s - (left - i)][work[0] - (left - i)]) % mod; // work0的随意挑选部分
//			cnt = (cnt + tmp) % mod; //每个case求和
//		}
//
//	}
//	cnt = (cnt * cnk[s][work[2]]) % mod; //求和后与最初的情况求积
//	cout << cnt << endl;
//
//	return 0;
//}
