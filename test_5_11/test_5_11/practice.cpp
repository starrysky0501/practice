//2018У�����⣺���˻�
//��Ŀ����
//����һ���������飬����������������0��Ҫ������ҳ�3�����ĳ˻���ʹ�ó˻����Ҫ��ʱ�临�Ӷȣ�O(n)���ռ临�Ӷȣ�O(1)
//��������:
//��һ���������Сn���ڶ�����������������A[n]
//������� :
//�������������˻�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		long t;
//		long fu1 = 0; long fu2 = 0;
//		long z1 = 0; long z2 = 0; long z3 = 0;
//		for (int i = 0; i<n; i++)
//		{
//			cin >> t;
//			if (t<0)
//			{
//				if (t<fu1) //��С����
//				{
//					fu2 = fu1;
//					fu1 = t;
//				}
//				else if (t<fu2) //��С����
//					fu2 = t;
//			}
//			else //�������������
//			{
//
//				if (t>z1)
//				{
//					z3 = z2;
//					z2 = z1;
//					z1 = t;
//
//				}
//				else if (t>z2)
//				{
//					z3 = z2;
//					z2 = t;
//				}
//				else if (t>z3)
//					z3 = t;
//			}
//		}
//		long long result1 = fu1*fu2*z1;
//		long long result2 = z1*z2*z3;
//		long long max = result1>result2 ? result1 : result2;
//		cout << max << endl;
//	}
//	return 0;
//}
