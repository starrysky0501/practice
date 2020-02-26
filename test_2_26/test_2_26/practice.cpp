//2018校招真题：幸运子序列

//题目描述
//牛牛得到一个长度为n的整数序列V, 牛牛定义一段连续子序列的幸运值为这段子序列中最大值和次大值的异或值(次大值是严格的次大)。
//牛牛现在需要求出序列V的所有连续子序列中幸运值最大是多少。请你帮帮牛牛吧。
//输入描述 :
//第一行一个整数n, 即序列的长度。(2 <= n <= 100000)
//第二行n个数，依次表示这个序列每个数值V[i], (1 ≤ V[i] ≤ 10 ^ 8)且保证V[1]到V[n]中至少存在不同的两个值.
//输出描述 :
//输出一个整数, 即最大的幸运值

//#include<stdio.h>
//#include<stack>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n, i, res = 0, x;
//	stack<int> s;
//	for (scanf("%d", &n), i = 0; i<n; i++){
//		scanf("%d", &x);
//		while (s.size() && s.top() <= x)
//			res = max(res, x^s.top()), s.pop();
//		if (s.size()) res = max(res, x^s.top());
//		s.push(x);
//	}
//	printf("%d\n", res);
//}