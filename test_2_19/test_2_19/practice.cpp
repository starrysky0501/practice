//2018校招真题：数字游戏

//题目描述
//牛牛举办了一场数字游戏, 有n个玩家参加这个游戏, 游戏开始每个玩家选定一个数, 然后将这个数写在纸上(十进制数, 无前缀零),
//然后接下来对于每一个数字将其数位按照非递减顺序排列, 得到新的数, 新数的前缀零将被忽略。得到最大数字的玩家赢得这个游戏。
//输入描述 :
//输入包括两行, 第一行包括一个整数n(1 ≤ n ≤ 50), 即玩家的人数
//第二行n个整数x[i](0 ≤ x[i] ≤ 100000), 即每个玩家写下的整数。
//输出描述 :
//输出一个整数, 表示赢得游戏的那个玩家获得的最大数字是多少。

//#include<stdlib.h>
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n, i, Max = -1;
//	for (cin >> n, i = 0; i<n; i++){
//		string x;
//		cin >> x, sort(x.begin(), x.end());
//		Max = max(Max, atoi(x.c_str()));
//	}
//	printf("%d", Max);
//}
//
