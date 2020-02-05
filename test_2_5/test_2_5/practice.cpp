//2018校招真题：疯狂队列

//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> a(n, 0);
//	for (int i = 0; i < n; ++i)
//		cin >> a[i];
//	sort(a.begin(), a.end());
//	int i = 0;
//	int j = n - 1;
//	int ret = abs(a[0] - a[n - 1]);
//	while (i <= n / 2 - 2)
//		ret += abs(a[i] - a[j - 1]) + abs(a[(i++) + 1] - a[(j--)]);
//	if (n % 2 == 1)
//		ret += max(abs(a[(n - 1) / 2 - 1] - a[(n - 1) / 2]), abs(a[(n - 1) / 2 + 1] - a[(n - 1) / 2]));
//	cout << ret << endl;
//	return 0;
//}
