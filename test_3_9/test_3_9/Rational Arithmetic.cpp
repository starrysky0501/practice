//牛客：Rational Arithmetic

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;
int gcd(int a, int b)
{
	int c;
	while (b != 0)   //辗转相除法，直到余数为0
	{
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}
void print(int num1, int num2)
{
	int gcd_num = gcd(num1, num2);
	num1 = num1 / gcd_num;   //约分
	num2 = num2 / gcd_num;   //约分
	int p = num1*num2;   //判断是正数还是负数
	num1 = abs(num1);
	num2 = abs(num2);
	if (p<0)
	{
		printf("(-");
	}
	if (num1 == 0)
	{
		printf("0");
	}
	else if (num2 == 0)
	{
		printf("Inf");
	}
	else
	{
		int i = num1 / num2;
		if (i)
		{
			printf("%d", i);
		}
		int j = num1%num2;
		if (j)
		{
			if (i)
			{
				printf(" ");
			}
			printf("%d/%d", j ,num2);
		}
	}
	if (p<0)
	{
		printf(")");
	}
}
int main()
{
	int fz1, fm1, fz2, fm2, fz, fm;
	scanf("%d/%d %d/%d", &fz1, &fm1, &fz2, &fm2);
	//加法运算：
	fz = fz1*fm2 + fz2*fm1;
	fm = fm1*fm2;
	print(fz1, fm1);
	printf(" + ");
	print(fz2, fm2);
	printf(" = ");
	print(fz, fm);
	printf("\n");

	//减法运算：
	fz = fz1*fm2 - fz2*fm1;
	fm = fm1*fm2;
	print(fz1, fm1);
	printf(" - ");
	print(fz2, fm2);
	printf(" = ");
	print(fz, fm);
	printf("\n");

	//乘法运算:
	fz = fz1*fz2;
	fm = fm1*fm2;
	print(fz1, fm1);
	printf(" * ");
	print(fz2, fm2);
	printf(" = ");
	print(fz, fm);
	printf("\n");

	//除法运算:
	fz = fz1*fm2;
	fm = fm1*fz2;
	print(fz1, fm1);
	printf(" / ");
	print(fz2, fm2);
	printf(" = ");
	print(fz, fm);
	printf("\n");

	system("pause");
	return 0;
}

//该题思路：
//计算两个分数的加减乘除，并且按照指定的格式输出
//写一个打印模块，参与运算的有两组数据和结果---共三组数据，将每一组的分子和分母传入打印函数种，对格式做要求：
//首先对这两个数求最大公约数(就是将分子和分母约分),接着，如果两个数的乘积小于0，则这个分数是负数，注意应要求要输出括号，
//接着将两个数取绝对值，判断分子是否为0，分母是否为0，都不满足时
//判断两个数相除是否为0，当不为0时，则需要先输出整数部分，接着将两个数取余，如果不为0且当且相除不为0，则需要按照要求数字
//之间打印空格，再输出余数(以分数的形式)