//ţ�ͣ�Rational Arithmetic

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;
int gcd(int a, int b)
{
	int c;
	while (b != 0)   //շת�������ֱ������Ϊ0
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
	num1 = num1 / gcd_num;   //Լ��
	num2 = num2 / gcd_num;   //Լ��
	int p = num1*num2;   //�ж����������Ǹ���
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
	//�ӷ����㣺
	fz = fz1*fm2 + fz2*fm1;
	fm = fm1*fm2;
	print(fz1, fm1);
	printf(" + ");
	print(fz2, fm2);
	printf(" = ");
	print(fz, fm);
	printf("\n");

	//�������㣺
	fz = fz1*fm2 - fz2*fm1;
	fm = fm1*fm2;
	print(fz1, fm1);
	printf(" - ");
	print(fz2, fm2);
	printf(" = ");
	print(fz, fm);
	printf("\n");

	//�˷�����:
	fz = fz1*fz2;
	fm = fm1*fm2;
	print(fz1, fm1);
	printf(" * ");
	print(fz2, fm2);
	printf(" = ");
	print(fz, fm);
	printf("\n");

	//��������:
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

//����˼·��
//�������������ļӼ��˳������Ұ���ָ���ĸ�ʽ���
//дһ����ӡģ�飬������������������ݺͽ��---���������ݣ���ÿһ��ķ��Ӻͷ�ĸ�����ӡ�����֣��Ը�ʽ��Ҫ��
//���ȶ��������������Լ��(���ǽ����Ӻͷ�ĸԼ��),���ţ�����������ĳ˻�С��0������������Ǹ�����ע��ӦҪ��Ҫ������ţ�
//���Ž�������ȡ����ֵ���жϷ����Ƿ�Ϊ0����ĸ�Ƿ�Ϊ0����������ʱ
//�ж�����������Ƿ�Ϊ0������Ϊ0ʱ������Ҫ������������֣����Ž�������ȡ�࣬�����Ϊ0�ҵ��������Ϊ0������Ҫ����Ҫ������
//֮���ӡ�ո����������(�Է�������ʽ)