//题目描述
//给出n个数字 a_1, ..., a_n，问最多有多少不重叠的非空区间，使得每个区间内数字的xor都等于0。
//输入描述 :
//第一行一个整数ｎ； 第二行ｎ个整数　a_1, ..., a_n； 对于30%的数据，n <= 20； 对于100%的数据，n <= 100000, a_i <= 100000；
//输出描述 :
//一个整数表示最多的区间个数；
//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int a[n];
//	for (int i  = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int dp[n][n][2];
//	for (int i  = 0; i < n; i++) {
//		dp[i][i][0] = a[i];
//		dp[i][i][1] = (a[i] == 0) ? 1 : 0;
//	}
//
//	for (int j  = 1; j < n; j++) {
//		for (int i  = 0; i + j < n; i++) {
//			dp[i][i + j][0] = dp[i][i + j - 1][0] ^ a[i + j];
//			dp[i][i + j][1] = (dp[i][i + j][0] == 0) ? 1 : 0;
//			for (int k  = 0; k < j; k++) {
//				dp[i][i + j][1] = max(dp[i][i + j][1], dp[i][i + k][1] + dp[i + k + 1][i + j][1]);
//			}
//		}
//	}
//	cout << dp[0][n - 1][1] << endl;
//
//	return 0;
//}