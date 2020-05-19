//2018校招真题：神奇数
//题目描述
//东东在一本古籍上看到有一种神奇数, 如果能够将一个数的数字分成两组, 其中一组数字的和等于另一组数字的和, 我们就将这个数称为神奇数。例如242就是一个神奇数, 我们能够将这个数的数字分成两组, 分别是{ 2, 2 }以及{ 4 }, 而且这两组数的和都是4.东东现在需要统计给定区间中有多少个神奇数, 即给定区间[l, r], 统计这个区间中有多少个神奇数, 请你来帮助他。
//输入描述 :
//输入包括一行, 一行中两个整数l和r(1 ≤ l, r ≤ 10 ^ 9, 0 ≤ r - l ≤ 10 ^ 6), 以空格分割
//输出描述 :
//输出一个整数, 即区间内的神奇数个数
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool IsNum(int &in){
//	vector<int> arry;
//	int num = in;
//	int half = 0;
//	while (num){//将数字打散存入arry数组
//		arry.push_back(num % 10);
//		half += num % 10;
//		num /= 10;
//	}
//	if (half % 2 != 0) return false;
//	half /= 2;
//	vector<int> dp(half + 1); //之后这一小段用的是01背包，判断能装下最大的数和一半是否相等。
//	for (int i = 0; i<arry.size(); i++){
//		for (int j = half; j >= arry[i]; j--){
//			dp[j] = max(dp[j], dp[j - arry[i]] + arry[i]);
//		}
//	}
//	return dp[half] == half;
//}
//
//int main()
//{
//	int l, r;
//	cin >> l >> r;
//	int count = 0;
//	for (int i = l; i <= r; i++){
//		if (IsNum(i))
//			count++;//如果是神奇数，计数+1
//	}
//	cout << count << endl;
//	return 0;
//}
