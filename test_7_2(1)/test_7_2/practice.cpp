//题目描述
//对于输入的字符串，从左到右扫描字符串，如果存在由三个以上（包括三个）连续相同字符组成的子串，就将这个子串从原串中去掉，并将原有字符串剩下的部分拼接到一起。重复上述过程，直到无法去掉任何子串
//输入描述 :
//输入的字符串
//输出描述 :
//最后剩下的子串

//#include<stdio.h>
//int main()
//{
//	char s[100];
//	int i = 0;
//	while (scanf("%c", &s[i]) != EOF)
//	{
//		if (i >= 2 && s[i] == s[i - 1] && s[i] == s[i - 2]) i = i - 2;
//		else i++;
//	}
//	for (int k = 0; k<i; k++)
//		printf("%c", s[k]);
//	return 0;
//}