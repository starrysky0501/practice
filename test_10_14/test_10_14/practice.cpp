//С������Ƥ��
//ʱ�����ƣ� 1000MS
//�ڴ����ƣ� 65536KB
//��Ŀ������
//С���ǳ�ϲ������Ƥ�ǣ�����С���������С��һ������Ƥ�ǣ�������n����Ƥ�ǡ�ÿ��С�����Գ�1������2����Ƥ�ǣ���ôС���ж����ַ������Գ���������Ƥ���أ�
//ע�⣺n ��һ����������
//��������
//����һ��������n
//�������
//���һ������������ʾ�ж����ַ���
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