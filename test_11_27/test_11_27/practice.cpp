//ţ�ͣ��ַ���ͨ���
//#include<iostream>
//#include<string>
//#include<stdlib.h>
//#include<ctype.h>
//using namespace std;
//
//int Match1(string Match_string, string Source_string)
//{
//	int i = 0, j = 0;
//	while (i<Match_string.size() && j<Source_string.size())
//	{
//		if ((Match_string[i] >= '0' && Match_string[i] <= '9') || (Match_string[i] >= 'a' && Match_string[i] <= 'z') || (Match_string[i] >= 'A' && Match_string[i] <= 'Z'))
//		{
//			if (toupper(Match_string[i]) == toupper(Source_string[j]) && i<Match_string.size() && j<Source_string.size())
//			{
//				i++;
//				j++;
//			}
//		}
//		if (Match_string[i] == '*' && i<Match_string.size() && j<Source_string.size())
//		{
//			if (i == Match_string.size() - 1)       //�����һ��Ϊͨ�����ֱ�ӷ�����
//			{
//				return 1;
//			}
//			else
//			{
//				i++;
//				if (Match_string[i] == '?')          //����*��?һ�����õ�ʱ��
//				{
//					i++;
//				}
//				if (Match_string[i] == Source_string[j])
//				{
//					while (Source_string[j] == Source_string[j + 1])      //������g*sgewtihjlen  gssgewtihjlen�������
//					{
//						j++;
//					}
//				}
//				while (toupper(Match_string[i]) != toupper(Source_string[j]) && j<Source_string.size())
//				{
//					j++;
//				}
//				if (toupper(Match_string[i]) == toupper(Source_string[j]))
//				{
//					i++;
//					j++;
//				}
//				else
//				{
//					return 0;
//				}
//			}
//
//		}
//		while (Match_string[i] == '?' && i<Match_string.size() && j<Source_string.size())  //���?����  ������Ҫѭ������
//		{
//			i++;
//			j++;
//		}
//		if (Match_string[i] != '*' && Match_string[i] != '?')                  //���㲻����������  ����д ������ѭ��
//		{
//			if (toupper(Match_string[i]) != toupper(Source_string[j]))
//			{
//				return 0;
//			}
//		}
//	}
//	if (i == Match_string.size())
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	string Match;
//	string Source;
//
//	int judge;
//	while (cin >> Match >> Source)
//	{
//		judge = Match1(Match, Source);
//		if (judge == 1)
//		{
//			cout << "true" << endl;
//		}
//		else
//		{
//			cout << "false" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//toupper��Сд��ĸת��Ϊ��д��ĸ


//ţ�ͣ�ͳ��ÿ�������ӵ�����
//#include<iostream>
//using namespace std;
//int getTotalCount(int month)
//{
//	if (month == 0)
//	{
//		return 0;
//	}
//	if (month == 1 || month == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return getTotalCount(month - 1) + getTotalCount(month - 2);
//		//��n�µ��������������ϸ�����������+�������δ֪�����°������������ϵ����ӵ�����
//		//��Ϊ�������µ����ӿ�����һֻ����
//		//����쳲���������
//	}
//}
//int main()
//{
//	int month = 0;
//	while (cin >> month)
//	{
//		int total = getTotalCount(month);
//		cout << total << endl;
//	}
//	return 0;
//}

//ͬʱ�����Ի�ͼ�ҹ���