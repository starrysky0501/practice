//题目描述
//从非负整数序列 0, 1, 2, ..., n中给出包含其中n个数的子序列，请找出未出现在该子序列中的那个数。
//输入描述 :
//输入为n + 1个非负整数，用空格分开。
//其中：首个数字为非负整数序列的最大值n，后面n个数字为子序列中包含的数字。
//输出描述 :
//输出为1个数字，即未出现在子序列中的那个数。
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n = 0;
//	while (cin >> n) {
//		vector<bool> vec(n + 1, false);
//		int t = 0;
//		while (n--) {
//			cin >> t;
//			vec[t] = true;
//		}
//		for (int i = 0; i < vec.size(); ++i) {
//			if (!vec[i]) {
//				cout << i << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
