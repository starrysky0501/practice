//题目描述
//给定整数n，取若干个1到n的整数可求和等于整数m，编程求出所有组合的个数。比如当n = 6，m = 8时，有四种组合：[2, 6], [3, 5], [1, 2, 5], [1, 3, 4]。限定n和m小于120
//输入描述 :
//整数n和m
//输出描述 :
//求和等于m的所有组合的个数。
//#include <stdio.h>
//#include <string.h>
//#define maxn 125
//#define maxm 125
//int n, m;
//int dp[maxn][maxm]; //从1~n中选出一些数, 和=m的组合个数
//int main(){
//	int i, j;
//	scanf("%d %d", &n, &m);
//	memset(dp, 0, sizeof(dp));
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= m; j++){
//			if (i >= j)
//				dp[i][j] = dp[j - 1][j] + 1;
//			else
//				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - i];
//		}
//	}
//	printf("%d\n", dp[n][m]);
//	return 0;
//}
