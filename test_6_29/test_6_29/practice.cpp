//��Ŀ����
//����ַ������ҳ������ظ�һ�ε����ַ�������󳤶�
//�������� :
//�ַ��������Ȳ�����1000
//������� :
//�ظ��Ӵ��ĳ��ȣ����������0
//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//int main()
//{
//	string ss;
//	cin >> ss;
//	int len = ss.size();
//	map<string, int> data;
//	for (int m = 1; m < len; m++)
//	{
//		for (int i = 0; i < len - m; i++)
//		{
//			string s = ss.substr(i, m);
//			data[s]++;
//		}
//	}
//	int max = 0;
//	for (auto c : data)
//	{
//		if (c.second > 1)
//		{
//			int temp = c.first.size();
//			if (temp > max)
//				max = temp;
//		}
//	}
//	cout << max << endl;
//	return 0;
//}