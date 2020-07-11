//题目描述
//牛牛有两个字符串A和B, 其中A串是一个01串, B串中除了可能有0和1, 还可能有'?', B中的'?'可以确定为0或者1。 寻找一个字符串T是否在字符串S中出现的过程, 称为字符串匹配。牛牛现在考虑所有可能的字符串B, 有多少种可以在字符串A中完成匹配。
//例如 : A = "00010001", B = "??"
//	 字符串B可能的字符串是"00", "01", "10", "11", 只有"11"没有出现在字符串A中, 所以输出3
// 输入描述 :
//输入包括两行, 第一行一个字符串A, 字符串A长度length(1 ≤ length ≤ 50), A中每个字符都是'0'或者'1'。
//第二行一个字符串B, 字符串B长度length(1 ≤ length ≤ 50), B中的字符包括'0', '1'和'?'。
//输出描述 :
//输出一个整数, 表示能完成匹配的字符串种数。

//#include <stdio.h>
//#include <string.h>
//char str[60][60];
//int num = 0;
//
//int getcnt(int x, char* B)
//{
//	int sum = 0;
//	for (int i = 0; i<num; i++)
//	{
//		bool flag = true;
//		for (int j = 0; j<x; j++)
//		{
//			if (str[i][j] != B[j] && B[j] != '?')
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			sum++;
//		}
//
//	}
//	return sum;
//}
//bool have(char* s)
//{
//	for (int i = 0; i<num; i++)
//	{
//		if (strcmp(s, str[i]) == 0)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	char A[60];
//	char B[60];
//	scanf("%s%s", A, B);
//	int lena = strlen(A);
//	int lenb = strlen(B);
//	int l = 0, r = lenb - 1;
//	while (r<lena)
//	{
//		char tmp[60];
//		for (int i = l; i <= r; i++)
//		{
//			tmp[i - l] = A[i];
//		}
//		tmp[lenb] = '\0';
//		if (!have(tmp))
//		{
//			strcpy(str[num++], tmp);
//		}
//		l++;
//		r++;
//	}
//	int cnt = 0;
//	cnt = getcnt(lenb, B);
//	printf("%d\n", cnt);
//	return 0;
//
//}
