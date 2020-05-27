//2018校招真题：数轴
//题目描述
//牛牛非常喜欢和朋友们一起玩。
//牛牛有n个朋友当前在一根数轴上, 每个朋友当前在整数x[i]坐标位置。
//牛牛向他们发出一个移动的信号, 每个朋友就向左或者向右移动s距离(每个朋友的选择是独立的, 都可以选择向左或者向右)。
//为了在一起玩耍方便, 牛牛希望移动之后最左边的朋友和最右边的朋友距离最近, 牛牛想知道最近距离为多少。
//例如牛牛有三个朋友分别所在数轴坐标为 - 7, 4, 7, s = 5
//那么第一个朋友 - 7向右移动s, 变为 - 2
//第二个朋友4向左移动s, 变为 - 1
//第三个朋友7向左移动s, 变为2。
//现在最左和最右的朋友距离是4, 没有比这个更优的方案了。
//输入描述 :
//输入包括两行, 第一行两个正整数n和s(2 ≤ n ≤ 50, 0 ≤ s ≤ 10 ^ 8), 表示朋友的个数和移动的距离。
//第二行包括n个正整数x[i](-10 ^ 8 ≤ x[i] ≤ 10 ^ 8), 表示初始时每个朋友所在的坐标位置。
//输出描述 :
//输出一个正整数, 表示移动之后最左边的朋友和最右边的朋友最小距离为多少。
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//	int i, j, n, s, distance, left, right;
//	vector<int> arry;
//
//	cin >> n >> s;
//	for (i = 0; i < n; i++)
//	{
//		cin >> j;
//		arry.push_back(j);
//	}
//	sort(arry.begin(), arry.end()); //所有的点从左到右排序
//
//	distance = arry[n - 1] - arry[0];
//	for (i = 0; i < n - 1; i++) //i是分割点，i左边的点右移（包括i），i右边的点左移
//	{
//		left = INT_MAX; //记录最左边的点
//		right = INT_MIN; //记录最右边的点
//		for (j = 0; j <= i; j++)
//		{
//			left = (left < arry[j] + s) ? left : (arry[j] + s);
//			right = (right > arry[j] + s) ? right : (arry[j] + s);
//		}
//		for (; j < n; j++)
//		{
//			left = (left < arry[j] - s) ? left : (arry[j] - s);
//			right = (right > arry[j] - s) ? right : (arry[j] - s);
//		}
//		distance = (distance < right - left) ? distance : (right - left);
//	}
//	cout << distance << endl;
//
//	return 0;
//}
//
