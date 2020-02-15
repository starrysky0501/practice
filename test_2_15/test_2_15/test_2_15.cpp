//2018校招真题：字符串价值

//#include<stdio.h>
//int main()
//{
//	char s[50];
//	scanf("%s", &s);
//	int k;
//	scanf("%d", &k);
//	int a[26] = { 0 };
//	int l = strlen(s);
//	int m = 0;
//	for (int j = 'a'; j<'z' + 1; j++)
//	{
//		for (int i = 0; i<l; i++)
//		{
//			if (j == s[i])
//				a[m] = a[m] + 1;
//		}
//		m++;
//	}
//	int t;
//
//	while (k != 0)
//	{
//		int max = 0;
//		for (int i = 0; i<26; i++)
//		{
//			if (a[i] >= max)
//			{
//				max = a[i];
//				t = i;
//			}
//		}
//		a[t]--;
//		k--;
//	}
//	int sum = 0;
//	for (int i = 0; i<26; i++)
//	{
//		sum = sum + a[i] * a[i];
//	}
//	printf("%d", sum);
//
//}