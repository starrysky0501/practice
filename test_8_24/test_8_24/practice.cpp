//题目描述
//给定非负整数a, b, m, 利用基本的算术运算符(+-*/ %)以及位运算符，计算a^b  mod m
//输入描述 :
//一行三个非负整数，空格分隔，分为a b m的值，其中m不为0
//输出描述 :
//a^b  mod m的结果
//#include <cstdio>
//using namespace std;
//int main()
//{
//	long long a, b, m;
//	scanf("%lld%lld%lld", &a, &b, &m);
//	a = a%m;
//	long long result = 1;
//	while (b>0)
//	{
//		if (b % 2 == 1)
//		{
//			result *= a;
//		}
//		result %= m;
//		a = (a*a) % m;
//		b = b / 2;
//	}
//	printf("%lld", result);
//	return 0;
//}
