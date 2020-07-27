//题目描述
//给出一个整数n，将n分解为至少两个整数之和，使得这些整数的乘积最大化，输出能够获得的最大的乘积。
//例如：
//2 = 1 + 1，输出1；
//10 = 3 + 3 + 4，输出36。
//输入描述 :
//输入为1个整数
//输出描述 :
//输出为1个整数
//#include<iostream>
//
//using namespace std;
//int getmax(int n)
//{
//	int y;
//	if (n>3)
//		y = 3 * getmax(n - 3);
//	else
//		y = n;
//	return y;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int y;
//	y = getmax(n);
//	cout << y << endl;
//}
