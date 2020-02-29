//2018–£’–’ÊÃ‚£∫√∞≈›≈≈–Ú

//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int maxn = 55;
//int getCnt(vector<int> A, int x){
//	int n = A.size(), cnt = 0;
//	for (int i = x; i<n; i++)
//	for (int j = 0; j<i; j++)
//	if (A[j]>A[i]) cnt++;
//	return cnt;
//}
//int n, dp[maxn][maxn], k, K, i, j;
//int main(){
//	scanf("%d%d", &n, &K);
//	vector<int> A(n);
//	for (i = 0; i<n; i++) scanf("%d", &A[i]);
//	for (i = n - 1; i >= 0; i--)
//	for (k = 0; k <= K; k++){
//		vector<int> tmp1(A.begin(), A.begin() + i + 1);
//		dp[i][k] = getCnt(tmp1, i) + dp[i + 1][k];
//		if (k >= 1){
//			for (j = i + 1; j<n; j++){
//				vector<int> tmp2(A.begin(), A.begin() + j + 1);
//				reverse(tmp2.begin() + i, tmp2.begin() + j + 1);
//				dp[i][k] = min(dp[i][k], getCnt(tmp2, i) + dp[j + 1][k - 1]);
//			}
//		}
//	}
//	printf("%d", dp[0][K]);
//}