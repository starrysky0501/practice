//2018校招真题：奶牛编号
//
//题目描述
//牛牛养了n只奶牛, 牛牛想给每只奶牛编号, 这样就可以轻而易举地分辨它们了。 每个奶牛对于数字都有自己的喜好,
//第i只奶牛想要一个1和x[i]之间的整数(其中包含1和x[i])。
//牛牛需要满足所有奶牛的喜好, 请帮助牛牛计算牛牛有多少种给奶牛编号的方法, 输出符合要求的编号方法总数。
//输入描述 :
//输入包括两行, 第一行一个整数n(1 ≤ n ≤ 50), 表示奶牛的数量 第二行为n个整数x[i](1 ≤ x[i] ≤ 1000)
//输出描述 :
//输出一个整数, 表示牛牛在满足所有奶牛的喜好上编号的方法数。因为答案可能很大, 输出方法数对1, 000, 000, 
//007的模。
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n; cin >> n;
//	vector<int> v;
//	for (int i = 1; i <= n; i++){
//		int x; cin >> x;
//		v.push_back(x);
//	}
//	sort(v.begin(), v.end());
//	long long ans = v[0];
//	for (int i = 1; i<v.size(); i++){
//		ans *= (v[i] - i);
//		ans %= 1000000007;
//	}
//	cout << ans << endl;
//	return 0;
//}
