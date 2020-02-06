//2018校招真题：小易喜欢的数列

//#include<stdio.h>
//#include<string.h>
//int dp[15][100005];
//const int mod = 1000000007;
//int main(){
//	int n, k, i, j, q;
//	//freopen("input.txt","r",stdin);
//	while (scanf("%d%d", &n, &k) != EOF){
//		memset(dp, 0, sizeof(dp));
//		for (i = 1; i <= k; i++) dp[1][i] = 1;
//		for (i = 2; i <= n; i++){
//			int sum = 0;
//			for (j = 1; j <= k; j++) sum = (sum + dp[i - 1][j]) % mod;
//			for (j = 1; j <= k; j++){
//				dp[i][j] = sum;
//				for (q = j * 2; q <= k; q += j) dp[i][j] = (dp[i][j] - dp[i - 1][q] + mod) % mod;
//			}
//		}
//		int res = 0;
//		for (i = 1; i <= k; i++) res = (res + dp[n][i]) % mod;
//		printf("%d\n", res);
//	}
//}