//ţ�ͣ��ֽ�����

//����һ�������¿ռ�
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		cout << num << " = ";
//		vector<int> nums;
//		int j = 0;
//		for (int i = 2; i <= sqrt(num); ++i)   //����ֽ������sqrt(num)����ʱ�����õ��ģ���Ϊֻ������һ�����ҽ�������������forѭ�������ж�
//		{									   
//			while (num%i == 0)
//			{
//				nums.push_back(i);
//				num = num / i;
//			}
//		}
//		if (num != 1)       //���һ����������
//		{
//			nums.push_back(num);
//		}
//		for (int i = 0; i< nums.size(); ++i)
//		{
//			if (i + 1< nums.size())
//			{
//				cout << nums[i] << " * ";
//			}
//			else
//			{
//				cout << nums[i] << endl;
//			}
//		}
//	}
//
//	return 0;
//}

//����������������
//1. 10=2*5--->5����sqrt(10)�����ֽ�ʱ��������ֻ���ܴ���һ������������
//2. 18=2*3*3--->������������С��sqrt(18)��

//���ͣ�Ϊʲô��i<=sqrt(num)?
//����һ������Ϊn����n=a*bʼ�ճ���(a,b>1),��a<=sqrt(n)ʱ
//����n/sqrt(n)=sqrt(n)
//���ԣ�n/a>=sqrt(n)
//����n/a=b
//����b>=sqrt
//����:һ����������������������һ��һ��С�ڵ���sqtr(����);��һ������û��һ��������С�ڵ���sqrt(����)ʱ����������


//�������������ٿռ䣬ֱ�ӿ��ǽ����һ������������
//#include<iostream>
//#include<cmath>
//#include<stdlib.h>
//using namespace std;
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		cout << num << " = ";
//
//		int j = 0;
//		for (int i = 2; i <= sqrt(num); ++i)
//		{
//			while (num != i)
//			{
//				if (num%i == 0)
//				{
//					cout << i << " * ";
//					num = num / i;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}