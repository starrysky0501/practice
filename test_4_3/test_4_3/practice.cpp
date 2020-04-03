//2018校招真题：平方串

//题目描述
//如果一个字符串S是由两个字符串T连接而成, 即S = T + T, 我们就称S叫做平方串, 例如"", "aabaab", "xxxx"都是平方串.
//牛牛现在有一个字符串s, 请你帮助牛牛从s中移除尽量少的字符, 让剩下的字符串是一个平方串。换句话说, 就是找出s的最长子序列并且这个子序列构成一个平方串。
//输入描述 :
//输入一个字符串s, 字符串长度length(1 ≤ length ≤ 50), 字符串只包括小写字符。
//输出描述 :
//输出一个正整数, 即满足要求的平方串的长度。
//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<string>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//int dp[55][55];
//int LCS(string s1, string s2) {
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <s1.size(); i++) {
//		for (int j = 1; j <s2.size(); j++) {
//			if (s1[i] == s2[j])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else {
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//			}
//		}
//	}
//	return dp[s1.size() - 1][s2.size() - 1];
//}
//int main()
//{
//	string str, s1, s2;
//	cin >> str;
//	int len = str.length();
//	int ans = 0;
//	for (int i = 1; i < len; i++) {
//		s1 = " " + str.substr(0, i + 1);
//		s2 = " " + str.substr(i + 1);
//		int tmp = LCS(s1, s2) * 2;
//		if (ans<tmp) {
//			ans = tmp;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}