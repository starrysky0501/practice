//2018У�����⣺��С�ڱ���
//��Ŀ����
//����5��������, ���ǵ���С���ڱ�����ָ���ܹ�������������������������С�������� ����5����ͬ��������, �����������ǵ���С�ڱ�����
//�������� :
//�������һ��, һ���������������ͬ��������a, b, c, d, e(1 �� a, b, c, d, e �� 100), �Կո�ָ�
//������� :
//���һ������, ��ʾ���ǵ���С�ڱ���
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int func(int a, int b)
//{
//	int temp1 = a, temp2 = b, temp = 0;
//	while (temp2>0)
//	{
//		temp = temp1%temp2;
//		temp1 = temp2;
//		temp2 = temp;
//	}
//	return a*b / temp1;
//}
//int main()
//{
//	int arr[6] = { 0 }, a[11] = { 0 }, c = 1;
//	for (int i = 1; i <= 5; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr + 1, arr + 6);
//	for (int i = 1; i <= 3; i++)
//	{
//		for (int j = i + 1; j <= 4; j++)
//		{
//			for (int k = j + 1; k <= 5; k++)
//			{
//				a[c] = func(func(arr[i], arr[j]), arr[k]);
//				c++;
//			}
//		}
//	}
//	sort(a + 1, a + 11);
//	cout << a[1] << endl;
//}
