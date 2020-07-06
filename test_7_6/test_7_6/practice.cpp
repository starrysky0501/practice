//题目描述
//已知石头重量数组。将石头分为质量最接近的两组
//输入描述 :
//数组，值为每个石头的质量
//输出描述 :
//两组的质量（降序排序）
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	vector<int> weight(1);
//	int sum = 0, num = 0;
//	char c;
//	cin >> weight[0];
//	sum += weight[0];
//	while (cin >> c >> num) {
//		sum += num;
//		weight.push_back(num);
//	}
//	int n = weight.size();
//	int average = sum >> 1;
//	vector<vector<int>> dp(n + 1, vector<int>(average + 1, 0));
//	for (int i = 0; i <= average; ++i) {
//		if (weight[0] < average) {
//			dp[1][i] = weight[0];
//		}
//	}
//	int ans = 0;
//	for (int i = 2; i <= n; ++i) {
//		for (int j = 0; j <= average; ++j) {
//			dp[i][j] = dp[i - 1][j];
//			if (j - weight[i - 1] >= 0) {
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i - 1]] + weight[i - 1]);
//			}
//			ans = max(ans, dp[i][j]);
//		}
//	}
//	cout << sum - ans << "," << ans << endl;
//}