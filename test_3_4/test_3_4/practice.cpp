//ţ�ͣ��Ա�����

//��Ŀ����
//NowCoder���Ա��Ͽ���һ�����ꡣ���������·�Ϊ������ʱ�򣬵���ÿ����׬1Ԫ������ÿ����׬2Ԫ��
//���ڸ���һ��ʱ�����䣬������������������ж��١�
//�������� :
//��������������ݡ�
//ÿ�����ݰ�����������from��to(2000 - 01 - 01 �� from �� to �� 2999 - 12 - 31)��
//������������������ʾ���ÿո������year month day��
//������� :
//��Ӧÿһ�����ݣ�����ڸ��������ڷ�Χ��������ʼ�ͽ������ڣ�����׬����Ǯ��


//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//bool isleap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool isprime(int month)
//{
//	if (month == 2 || month == 3 || month == 5 || month == 7 || month == 11)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int same_month(int month, int day1, int day2) //ͬ��ͬ�²�ͬ��
//{
//	if (isprime(month))
//	{
//		return (day2 - day1 + 1);
//	}
//	else
//	{
//		return 2 * (day2 - day1 + 1);
//	}
//}
//
//int same_year(int year, int month1, int month2, int day1, int day2) //ͬ�겻ͬ��
//{
//	int sum = 0;
//	//�����һ����
//	if (isleap(year) && month1 == 2)
//	{
//		sum += same_month(month1, day1, arr[month1 - 1] + 1);
//	}
//	else
//	{
//		sum += same_month(month1, day1, arr[month1 - 1]);
//	}
//
//	//�����м��·�
//	for (int i = month1 + 1; i<month2; ++i)
//	{
//		if (isleap(year) && i == 2)
//		{
//			sum += same_month(i, 1, arr[i - 1] + 1);
//		}
//		else
//		{
//			sum += same_month(i, 1, arr[i - 1]);
//		}
//	}
//
//	//�������һ����
//	sum += same_month(month2, 1, day2);
//	return sum;
//}
//
//int main()
//{
//	
//	int year1, year2, month1, month2, day1, day2;
//	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
//	{
//		int total = 0;
//		if (year1 == year2)
//		{
//			if (month1 == month2)
//			{
//				total += same_month(month1, day1, day2);
//			}
//			else
//			{
//				total += same_year(year1, month1, month2, day1, day2);
//			}
//		}
//		else
//		{
//			total += same_year(year1, month1, 12, day1, 31);
//			for (int i = year1 + 1; i<year2; ++i)
//			{
//				total += same_year(i, 1, 12, 1, 31);
//			}
//			total += same_year(year2, 1, month2, 1, day2);
//		}
//		cout << total << endl;
//	}
//	system("pause");
//	return 0;
//}


//����˼·��
//�����������
//ͬ��ͬ�²�ͬ�գ�ֻ��Ҫ�ж�����ֻ���Ӧ�жϸ����Ƿ�Ϊ���£����Ը�ģ��ĺ���ֻ��Ҫmonth1,day1,day2��3������
//ͬ�겻ͬ�£���һ��һ���µļ��㣬�����һ���£��������м��£���������һ���£����������2����29�죬���ģ����Ҫ5��������year,month1,month2,day1,day2
//��ͬ�꣺�����������жϣ�һ��һ���ȥ���㣬�����һ�꣬�������м��꣬��������һ���ꣻ�ֱ�ȥ����ͬ�겻ͬ�µĺ�����
//����������if������ȥ�ж����������
//���⻹��һ��������ÿ���¾��������������ÿ��ģ�鶼���õ���������Ϊȫ�ֱ���