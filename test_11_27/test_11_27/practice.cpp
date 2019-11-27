//牛客：字符串通配符
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
//			if (i == Match_string.size() - 1)       //当最后一个为通配符，直接返回真
//			{
//				return 1;
//			}
//			else
//			{
//				i++;
//				if (Match_string[i] == '?')          //考虑*和?一起连用的时候
//				{
//					i++;
//				}
//				if (Match_string[i] == Source_string[j])
//				{
//					while (Source_string[j] == Source_string[j + 1])      //当出现g*sgewtihjlen  gssgewtihjlen这种情况
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
//		while (Match_string[i] == '?' && i<Match_string.size() && j<Source_string.size())  //多个?连续  所以需要循环处理
//		{
//			i++;
//			j++;
//		}
//		if (Match_string[i] != '*' && Match_string[i] != '?')                  //满足不了所有条件  必须写 否则死循环
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

//toupper将小写字母转化为大写字母


//牛客：统计每个月兔子的总数
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
//		//第n月的兔子数量等于上个月兔子数量+到这个月未知三个月包括三个月以上的兔子的数量
//		//因为满三个月的兔子可以生一只兔子
//		//满足斐波那契数列
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

//同时，可以画图找规律