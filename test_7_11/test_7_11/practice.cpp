//��Ŀ����
//ţţ�������ַ���A��B, ����A����һ��01��, B���г��˿�����0��1, ��������'?', B�е�'?'����ȷ��Ϊ0����1�� Ѱ��һ���ַ���T�Ƿ����ַ���S�г��ֵĹ���, ��Ϊ�ַ���ƥ�䡣ţţ���ڿ������п��ܵ��ַ���B, �ж����ֿ������ַ���A�����ƥ�䡣
//���� : A = "00010001", B = "??"
//	 �ַ���B���ܵ��ַ�����"00", "01", "10", "11", ֻ��"11"û�г������ַ���A��, �������3
// �������� :
//�����������, ��һ��һ���ַ���A, �ַ���A����length(1 �� length �� 50), A��ÿ���ַ�����'0'����'1'��
//�ڶ���һ���ַ���B, �ַ���B����length(1 �� length �� 50), B�е��ַ�����'0', '1'��'?'��
//������� :
//���һ������, ��ʾ�����ƥ����ַ���������

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
