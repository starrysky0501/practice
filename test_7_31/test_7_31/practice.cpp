//��Ŀ����
//���������������У��������ǿ��Ӵ����ͣ�����{ -23 17 - 7 11 - 2 1 - 34 }���Ӵ�Ϊ{ 17, -7, 11 }������Ϊ21
//�������� :
//����Ϊ�������У������ÿո�ָ����磺 - 23 17 - 7 11 - 2 1 - 34
//������� :
//���Ϊ�����е����ͣ�21
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
////#include<algorithm>
//#include<string>
//using namespace std;
//int maxac(vector<int>);
//int main()
//{
//	vector<int> vc;
//	int a;
//	while (cin >> a)
//	{
//		vc.push_back(a);
//		if (a == '\n')//��Ч��cin.get()=='\n'
//			break;
//	}
//
//	cout << maxac(vc) << endl;
//	return 0;
//}
//
//int maxac(vector<int> vc)
//{
//	int n = vc.size();
//	int max = vc[0];
//	int max1 = vc[0];
//	if (n == 0)
//		return -1;
//	if (n == 1)
//		return vc[0];
//
//	for (int i = 1; i<n; i++)
//	{
//		if (vc[i]<max1 + vc[i])
//			max1 = max1 + vc[i];
//		else
//			max1 = vc[i];
//
//		if (max<max1)
//			max = max1;
//	}
//	return max;
//}
