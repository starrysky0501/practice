//题目描述
//小招喵喜欢在数轴上跑来跑去，假设它现在站在点n处，它只会3种走法，分别是：
//1.数轴上向前走一步，即n = n + 1
//2.数轴上向后走一步, 即n = n - 1
//3.数轴上使劲跳跃到当前点的两倍，即n = 2 * n
//现在小招喵在原点，即n = 0，它想去点x处，快帮小招喵算算最快的走法需要多少步？
//输入描述 :
//小招喵想去的位置x
//输出描述 :
//小招喵最少需要的步数
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// 想到位置x处
//int process(int x) {
//	if (x < 2) {
//		return x;
//	}
//	vector<int> dp(x + 1);
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i <= x; ++i) {
//		if (i % 2 == 0) { // 能整除 // 必然跳更快
//			dp[i] = 1 + min(dp[i - 1], dp[i / 2]);
//		}
//		else {
//			dp[i] = 1 + min(dp[i - 1], 1 + dp[(i + 1) / 2]);
//		}
//	}
//	return dp[x];
//}
//
//int main() {
//	int x = 0;
//	while (cin >> x) {
//		cout << process(abs(x)) << endl;
//	}
//	return 0;
//}
