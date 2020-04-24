//题目描述
//给定一个数组序列, 需要求选出一个区间, 使得该区间是所有区间中经过如下计算的值最大的一个：
//区间中的最小数 * 区间所有数的和最后程序输出经过计算后的最大值即可，不需要输出具体的区间。如给定序列[6 2 1]则根据上述公式, 可得到所有可以选定各个区间的计算值:
//[6] = 6 * 6 = 36;
//[2] = 2 * 2 = 4;
//[1] = 1 * 1 = 1;
//[6, 2] = 2 * 8 = 16;
//[2, 1] = 1 * 3 = 3;
//[6, 2, 1] = 1 * 9 = 9;
//从上述计算可见选定区间[6] ，计算值为 36， 则程序输出为 36。
//区间内的所有数字都在[0, 100]的范围内;
//输入描述:
//第一行输入数组序列长度n，第二行输入数组序列。
//对于 50 % 的数据, 1 <= n <= 10000;
//对于 100 % 的数据, 1 <= n <= 500000;
//输出描述:
//输出数组经过计算后的最大值。
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <limits.h>
//#include <numeric>
//using namespace std;
//int main(){
//	int res = 0, n;
//	cin >> n;
//	vector<int> nums(n, 0);
//	for (int i = 0; i<n; i++) cin >> nums[i];
//	for (int j = 0; j<n; j++){
//		int l = j;
//		while (l >= 0 && nums[j] <= nums[l]) l--;
//		int r = j;
//		while (r<n&&nums[j] <= nums[r]) r++;
//		int sum = accumulate(nums.begin() + 1 + l, nums.begin() + r, 0);
//		res = max(res, sum*nums[j]);
//	}
//	cout << res << endl;
//	return 0;
//}