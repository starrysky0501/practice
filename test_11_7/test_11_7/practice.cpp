//��Ӿ���
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//bool cmp(int a, int b)
//{
//	return a>b;
//}
//int main()
//{
//	vector<int> grade;
//	int a;
//	long long total = 0;
//	int n;
//	cin >> n;
//	for (int i = 0; i<3 * n; i++)
//	{
//		cin >> a;
//		grade.push_back(a);
//	}
//	sort(grade.begin(), grade.end(), cmp);
//	int k = 1;
//	while (n--)
//	{
//		total += grade[k];
//		k += 2;
//	}
//	cout << total << endl;
//	return 0;
//}

//sort���������������������鿪ʼλ�ã�����λ�ã��Լ��ȽϷ�ʽ��Ĭ��������
//ע�⣺ǧ���̻�˼ά��ȥ�ҹ��ɣ��ӹ���ת������������Ӵ�С����ÿ����Ϊһ�飬�δ�ֵ��Ϊ��Ҫ��ֵ����
//      ��ͷ��β��ÿ��+2,ֻ����n�Ρ�
//�״���Ŀ��֪����������ܻ�ܴ���������Ӧʹ��long long�洢����ֹ�����
//      long������linux��64λ��8���ֽڣ�32λ��4���ֽڣ���vs��64 / 32λ����32���ֽ�



//ɾ�������ַ�
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	getline(cin, a);
//	getline(cin, b);
//	for (int i = 0; i<b.size(); i++)
//	{
//		for (int j = 0; j<a.size(); j++)
//		{
//			if (a[j] == b[i] && b[i] != ' ')
//			{
//				a.erase(j, 1);
//				if (j>0)
//				{
//					j--;            //һ��Ҫ��ס
//				}
//				else
//				{
//					j = -1;
//				}
//			}
//		}
//	}
//	cout << a << endl;
//	return 0;
//}
//��ע��erase������string& erase ( size_t pos = 0, size_t n = npos );  ������֮һ��ԭ�ͣ�
//��һ������ʱλ�ã��ڶ�������ʱ��Ҫɾ���ĸ�����
//����д�ڶ�������ʱ��Ĭ��npos��ת��λsize_t���ͣ������������ֵ