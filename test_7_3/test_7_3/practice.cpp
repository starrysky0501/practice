//题目描述
//给定一个序列 An = a1, a2, ..., an ，找出最长的子序列使得对所有 i < j ，ai < aj 。求出这个子序列的长度
//输入描述 :
//输入的序列
//输出描述 :
//最长递增子序列的长度
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 7;
//int a[N], tail[N];
//int main() {
//	int i = 1;
//	while (cin >> a[i]) {
//		i++;
//	}
//	int n = i - 1;
//
//	int len = 0;
//	for (int i = 1; i <= n; i++) {
//		int x = a[i];
//
//		int l = 0, r = len;
//		while (l < r) {
//			int mid = l + r + 1 >> 1;
//			if (tail[mid] < x) l = mid;
//			else r = mid - 1;
//		}
//
//		tail[l + 1] = x;
//		len = max(len, l + 1);
//	}
//	cout << len << endl;
//	return 0;
//}
