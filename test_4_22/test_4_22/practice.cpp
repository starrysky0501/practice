//2018校招真题：字节跳动编程题
//题目描述
//P为给定的二维平面整数点集。定义 P 中某点x，如果x满足 P 中任意点都不在 x 的右上方区域内（横纵坐标都大于x），则称其为“最大的”。求出所有“最大的”点的集合。（所有点的横坐标和纵坐标都不重复, 坐标轴范围在[0, 1e9) 内）
//如下图：实心点为满足条件的点的集合。请实现代码找到集合 P 中的所有 ”最大“ 点的集合并输出。
//输入描述 :
//第一行输入点集的个数 N， 接下来 N 行，每行两个数字代表点的 X 轴和 Y 轴。
//对于 50 % 的数据, 1 <= N <= 10000;
//对于 100 % 的数据, 1 <= N <= 500000;
//输出描述:
//输出“最大的” 点集合， 按照 X 轴从小到大的方式输出，每行两个数字分别代表点的 X 轴和 Y轴。
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//struct node{
//	int x;
//	int y;
//};
//
//bool cmp(node n1, node n2){
//	return n1.y>n2.y;
//}
//node no[500001];
//int main(){
//	int n;
//	while (scanf("%d", &n) != EOF){
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d%d", &no[i].x, &no[i].y);
//		}
//		sort(no, no + n, cmp);
//		int mmax = -1;
//		for (int i = 0; i < n; i++)
//		{
//			if (no[i].x>mmax)
//			{
//				mmax = no[i].x;
//				printf("%d %d\n", no[i].x, no[i].y);
//			}
//		}
//
//	}
//	return 0;
//}