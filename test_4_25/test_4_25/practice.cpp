//2018У�����⣺�ַ������
//��Ŀ����
//����һ���ַ�����������ַ����������ַ���������ϡ�
//�ٸ����ӣ��������abc�����������a��b��c��ab��bc��abc����ע�⣺����������Ҫȥ�أ���40�֣�
//�������� :
//һ���ַ���
//������� :
//һ�У�ÿ������Կո�ָ�����ͬ���ȵ������Ҫ���ֵ���������ȥ�ء�
//#include<iostream>
//#include<set>
//using namespace std;
//
//int main(void)
//{
//	string str, temp;
//	cin >> str;
//
//	set<string> set;
//	int i, j, len;
//	len = str.size();
//	for (i = 1; i <= len; i++)//����λ��
//	{
//		for (j = 0; j + i - 1 < len; j++)
//		{
//			temp = str.substr(j, i);
//			set.insert(temp);
//		}
//
//		//��set�����ܱ�֤ȥ�أ������Զ������ֵ�������
//		for (auto it : set)
//			cout << it << " ";
//
//		//ÿ�α��泤����ͬ���Ӵ�����������
//		set.clear();
//	}
//
//	cout << endl;
//
//	return 0;
//}