//2018У�����⣺�����Ӵ�
//��Ŀ����
//����һ���ַ���s, ��������������������s��Ϊ�Ӵ�������ַ����� ע������s�������ص����֡�����, "ababa"��������"aba".
//��������:
//�������һ���ַ���s, �ַ�������length(1 �� length �� 50), s��ÿ���ַ�����Сд��ĸ.
//������� :
//	 ���һ���ַ���, ��������������s��Ϊ�Ӵ�������ַ�����
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	int l = s.length(); //�ַ�������
//	if (l == 0)
//		return 0;
//	if (l == 1)
//	{
//		cout << s + s << endl;
//		return 0;
//	}
//	int j = 1; //��ȡ�ַ�����
//	int count = 0;
//	string temp; //�����ȡ���ַ�
//	for (int i = l - 1; i>0; i--)
//	{
//		string s1 = s.substr(i, j); //�Ӻ���ǰ
//		string s2 = s.substr(0, j); //��ǰ����
//		j++;
//
//		if (s1 == s2)
//		{
//			temp = s2;
//			count++;
//		}
//		else
//		{
//			if (j == 1) //
//			{
//				break;
//			}
//		}
//	}
//	if (count == 0) //��ʾ�ظ��ĸ���Ϊ��
//	{
//		cout << s + s << endl;
//	}
//	else
//	{
//		string re = s.substr(temp.length(), l - temp.length()); //��ȡ���ظ��Ĳ���
//		cout << s + re << endl;
//	}
//	return 0;
//}
