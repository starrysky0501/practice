//��Ŀ����
//���������������У������е�K�����������{ 45��67��33��21 }����2����Ϊ45
//�������� :
//�����һ��Ϊ�������У������ÿո�ָ����磺45 67 33 21
//����ڶ���һ������K��K�����鳤�ȷ�Χ�ڣ��磺2
//������� :
//�����K�����������Ϊ��2������45
//#include<stdlib.h>
//#include<vector>
//#include<iostream>
//
//using namespace std;
//
//int choose(vector<int>, int);
//int main()
//{
//	vector<int> ac;
//	int a;
//	while (cin >> a)
//	{
//		ac.push_back(a);
//		if (cin.get() == '\n')
//			break;
//	}
//	int k;
//	cin >> k;
//	int e = choose(ac, k);
//	cout << e << endl;
//	return 0;
//}
//
//int choose(vector<int>ac, int k)
//{
//	int n = ac.size();
//	int temp;
//	for (int i = 1; i<n; i++)
//	for (int j = 0; j<n - i; j++)
//	{
//		if (ac[j]<ac[j + 1])
//		{
//			temp = ac[j];
//			ac[j] = ac[j + 1];
//			ac[j + 1] = temp;
//		}
//	}
//	return ac[k - 1];
//
//}
