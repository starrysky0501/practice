//2018校招真题：大整数相乘

//题目描述：有两个用字符串表示的非常大的大整数, 算出他们的乘积，也是用字符串表示。不能用系统自带的大整数类型。
//输入描述：空格分隔的两个字符串，代表输入的两个大整数
//输出描述：输入的乘积，用字符串表示

//#include<stdio.h>
//#include<string>
//#include<iostream>
//using namespace std;
//const int L = 11000;
//string mul(string, string);
//int main(){
//	string x, y;
//	while (cin >> x >> y)
//		cout << mul(x, y) << endl;
//}
//string mul(string a, string b) {
//	string s;
//	int na[L], nb[L], nc[L], La = a.size(), Lb = b.size(), i, j;
//	fill(na, na + L, 0); fill(nb, nb + L, 0); fill(nc, nc + L, 0);
//	for (i = La - 1; i >= 0; i--) na[La - i] = a[i] - '0';
//	for (i = Lb - 1; i >= 0; i--) nb[Lb - i] = b[i] - '0';
//	for (i = 1; i <= La; i++)
//	for (j = 1; j <= Lb; j++)
//		nc[i + j - 1] += na[i] * nb[j];
//	for (i = 1; i <= La + Lb; i++)
//		nc[i + 1] += nc[i] / 10, nc[i] %= 10;
//	if (nc[La + Lb]) s += nc[La + Lb] + '0';
//	for (i = La + Lb - 1; i >= 1; i--)
//		s += nc[i] + '0';
//	return s;
//}