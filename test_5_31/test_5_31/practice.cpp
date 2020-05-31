//2018 校招真题：公约数
//#include<iostream>
//#include<vector>
//#include<map>
//#define int2 pair<int,int>
//using namespace std;
//
//int gcd(int m, int n) {
//	int r = m%n;
//	while (r) {
//		m = n; n = r;
//		r = m%n;
//	}
//	return n;
//}
//
//int main() {
//	int n, k, a, b;
//	cin >> n >> k >> a >> b;
//	vector<int> nums(n);
//	for (int& i : nums) cin >> i;
//
//	//mp[{i,j}]=k
//	//i为选择i个数，j为最大公约数，k为个数
//	map<int2, long long> mp;
//	mp[{0, 1}] = 1;
//
//	for (int i = 0; i<n; i++) {
//		map<int2, long long> ano(mp);
//		for (auto it = mp.begin(); it != mp.end(); it++) {
//			int ii = (*it).first.first;
//			int jj = (*it).first.second;
//			long long kk = (*it).second;
//			if (ii<k) {
//				int gg = gcd(a / jj, nums[i]);
//				ano[{ii + 1, gg*jj}] += kk;
//			}
//		}
//		swap(ano, mp);
//	}
//
//	long long res = 0;
//	for (auto it = mp.begin(); it != mp.end(); it++) {
//		int ii = (*it).first.first;
//		int jj = (*it).first.second;
//		long long kk = (*it).second;
//		if (ii == k&&jj >= b)
//			res += kk;
//	}
//
//	cout << res << endl;
//	return 0;
//}