//2018校招真题：搜狐畅游
//题目描述
//输入n个整数，查找数组中第二大的数
//输入描述 :
//第一行n表示n个数，第二行n个空格隔开的数
//输出描述 :
//输出第二大的数
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//	int n, i, j, *a, temp;
//	scanf("%d", &n);
//	a = (int *)malloc(sizeof(int)*n);
//	for (i = 0; i<n; i++){
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i<n; i++)
//	for (j = i; j<n; j++)
//	if (a[j]>a[i])
//	{
//		temp = a[j];
//		a[j] = a[i];
//		a[i] = temp;
//	}
//
//	for (i = 1; i<n; i++){
//		if (a[i]<a[0]){
//			printf("%d", a[i]);
//			break;
//		}
//		if (i == 9)
//			printf("%d", a[i]);
//	}
//	return 0;
//}
