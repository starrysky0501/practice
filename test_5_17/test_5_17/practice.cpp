//2018校招真题：求幂
//题目描述
//东东对幂运算很感兴趣, 在学习的过程中东东发现了一些有趣的性质: 9 ^ 3 = 27 ^ 2, 2 ^ 10 = 32 ^ 2
//东东对这个性质充满了好奇, 东东现在给出一个整数n, 希望你能帮助他求出满足 a^b = c^d(1 ≤ a, b, c, d ≤ n)的式子有多少个。
//例如当n = 2 : 1 ^ 1 = 1 ^ 1
//1 ^ 1 = 1 ^ 2
//1 ^ 2 = 1 ^ 1
//1 ^ 2 = 1 ^ 2
//2 ^ 1 = 2 ^ 1
//2 ^ 2 = 2 ^ 2
//一共有6个满足要求的式子
//输入描述 :
//输入包括一个整数n(1 ≤ n ≤ 10 ^ 6)
//输出描述 :
//输出一个整数, 表示满足要求的式子个数。因为答案可能很大, 输出对1000000007求模的结果
//#include<iostream>
//#include<set>
//using namespace std;
//int MOD = 1000000000 + 7;
//int gcd(int a, int b){
//	return (a % b == 0) ? b : gcd(b, a%b);
//}
//int main() {
//	int n;
//	cin >> n;
//	//int会越界，且还需要强制类型转换
//	long long ans = (long long)1 * n*(n * 2 - 1) % MOD;
//	set<int> s;
//	//遍历i,因为去除了底数相同的情况,所以底数不等的情况下：底数必定大于1，次方必定大于1——>底数小于n的开方
//	for (int i = 2; i*i <= n; i++){
//		if (s.find(i) != s.end()) continue;
//		int tmp = i;
//		int cnt = 0;
//		//满足条件的底数，同时求x和y的范围
//		while (tmp <= n) {
//			s.insert(tmp);
//			tmp = tmp * i;
//			cnt++;
//		}
//		//相同的公约数，放到下面，反正不会大于n
//		for (int k = 1; k <= cnt; k++) {
//			for (int j = k + 1; j <= cnt; j++) {
//				ans = (ans + n / (j / gcd(k, j)) * (long)2) % MOD;
//			}
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}
