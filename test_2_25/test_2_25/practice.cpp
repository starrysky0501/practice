//2018校招真题：无聊的牛牛和羊羊

//#include<stack>
//#include<algorithm>
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//#define maxn 55
//float dp[maxn];
//int n, m;
//float p1(int x, float deno){
//	return (n + x)*(m - x) / deno;
//}
//float p2(int x, float deno){
//	return (m - x)*(m - x - 1) / 2.0f / deno;
//}
//float p3(int x, float deno){
//	return (n + x)*(n + x - 1) / 2.0f / deno;
//}
//int main(){
//
//	while (cin >> n >> m){
//		float deno = (n + m)*(n + m - 1) / 2.0f;
//		for (int i = 0; i < maxn; i++){
//			dp[i] = 0.0f;
//		}
//		for (int i = m - 1; i >= 0; i--){
//			dp[i] += (dp[i + 1] + 1)*p1(i, deno) + p3(i, deno);
//			if (i + 2 <= m){
//				dp[i] += p2(i, deno) * (dp[i + 2] + 1);
//			}
//			dp[i] /= (1 - p3(i, deno));
//		}
//		cout << setiosflags(ios::fixed) << setprecision(1) << dp[0] << endl;
//	}
//	return 0;
//}