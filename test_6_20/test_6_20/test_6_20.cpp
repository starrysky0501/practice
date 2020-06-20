//题目描述
//输入M、N，1 < M < N < 1000000，求区间[M, N]内的所有素数的个数。素数定义：除了1以外，只能被1和自己整除的自然数称为素数
//输入描述 :
//两个整数M，N
//输出描述 :
//区间内素数的个数
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//using namespace std;
//int main(){
//	int count = 0;
//	int M;
//	int N;
//	cin >> M;
//	cin >> N;
//	int flag = 0;
//	for (int i = M; i <= N; i++){
//		flag = 0;
//		for (int j = 2; j <= sqrt(i); j++){
//			if (i%j == 0){
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0){
//			count++;
//		}
//	}
//	cout << count;
//	return 0;
//}