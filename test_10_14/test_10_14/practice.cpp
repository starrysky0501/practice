//小明吃橡皮糖
//时间限制： 1000MS
//内存限制： 65536KB
//题目描述：
//小明非常喜欢吃橡皮糖，假设小明的妈妈给小明一袋子橡皮糖，里面有n个橡皮糖。每次小明可以吃1个或者2个橡皮糖，那么小明有多少种方法可以吃完所有橡皮糖呢？
//注意：n 是一个正整数。
//输入描述
//输入一个正整数n
//输出描述
//输出一个正整数，表示有多少种方法
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int jieguo(int target)
//{
//	if (target <= 0)
//	{
//		return 0;
//	}
//	if (target == 1 || target==2)
//	{
//		return target;
//	}
//	int one = 1, two = 2, three = 0;
//	for (int i = 3; i <= target; i++)
//	{
//		three = one + two;
//		one = two;
//		two = three;
//	}
//	return three;
//}
////int jieguo(int target)
////{
////	if (target == 1 || target == 2)
////	{
////		return target;
////	}
////	else
////	{
////		return jieguo(target - 1) + jieguo(target - 2);
////	}
////}
//int main()
//{
//	int n;
//	cin >> n;
//	int value=jieguo(n);
//	cout << value;
//	system("pause");
//	return 0;
//}