//牛客：淘宝网店

//题目描述
//NowCoder在淘宝上开了一家网店。他发现在月份为素数的时候，当月每天能赚1元；否则每天能赚2元。
//现在给你一段时间区间，请你帮他计算总收益有多少。
//输入描述 :
//输入包含多组数据。
//每组数据包含两个日期from和to(2000 - 01 - 01 ≤ from ≤ to ≤ 2999 - 12 - 31)。
//日期用三个正整数表示，用空格隔开：year month day。
//输出描述 :
//对应每一组数据，输出在给定的日期范围（包含开始和结束日期）内能赚多少钱。


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
//int same_month(int month, int day1, int day2) //同年同月不同日
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
//int same_year(int year, int month1, int month2, int day1, int day2) //同年不同月
//{
//	int sum = 0;
//	//计算第一个月
//	if (isleap(year) && month1 == 2)
//	{
//		sum += same_month(month1, day1, arr[month1 - 1] + 1);
//	}
//	else
//	{
//		sum += same_month(month1, day1, arr[month1 - 1]);
//	}
//
//	//计算中间月份
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
//	//计算最后一个月
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


//该题思路：
//有三种情况：
//同年同月不同日：只需要判断天数只差，还应判断改月是否为素月，所以该模块的函数只需要month1,day1,day2这3个参数
//同年不同月：则一个一个月的计算，先算第一个月，接着算中间月，最后算最后一个月；由于闰年的2月是29天，则该模块需要5个参数，year,month1,month2,day1,day2
//不同年：在主函数中判断，一年一年的去计算，先算第一年，接着算中间年，最后算最后一个年；分别去调用同年不同月的函数。
//主函数：用if条件，去判断这三种情况
//本题还需一个数组存放每个月具体的天数，由于每个模块都会用到，则设置为全局变量