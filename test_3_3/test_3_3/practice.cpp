//牛客：美国节日

//题目描述:
//和中国的节日不同，美国的节假日通常是选择某个月的第几个星期几这种形式，因此每一年的放假日期都不相同。具体规则如下：
//* 1月1日：元旦
//* 1月的第三个星期一：马丁·路德·金纪念日
//* 2月的第三个星期一：总统节
//* 5月的最后一个星期一：阵亡将士纪念日
//* 7月4日：美国国庆
//* 9月的第一个星期一：劳动节
//* 11月的第四个星期四：感恩节
//* 12月25日：圣诞节
//现在给出一个年份，请你帮忙生成当年节日的日期。
//
//输入描述 :
//输入包含多组数据，每组数据包含一个正整数year（2000≤year≤9999）。
//输出描述 :
//对应每一组数据，以“YYYY - MM - DD”格式输出当年所有的节日日期，每个日期占一行。
//
//每组数据之后输出一个空行作为分隔。

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//bool isleap(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void Festival(int year)
//{
//	int days = 0;   //该变量记录某一年之前(不包含该年的天数)
//	for (int i = 2000; i<year; ++i)   //这种方法已知2000/01/01是星期六
//	{
//		if (isleap(i))
//		{
//			days += 366;
//		}
//		else
//		{
//			days += 365;
//		}
//	}
//	
//	//判断year.1.1是周几
//	int day = abs(days - 1) % 7;   //星期天为0，星期1为1....星期六为6；该变量判断每月初为星期几
//	if (year == 2000)
//	{
//		day = 6;
//	}
//	cout << year << "-" << 0 << 1 << "-" << 0 << 1 << endl;   //元旦
//
//	int ret;   //该变量判断具体日期
//	if (day == 1)
//	{
//		ret = 2 * 7 + 1;
//	}
//	else if (day == 0)
//	{
//		ret = 2* 7 + 2;
//	}
//	else
//	{
//		ret = 2 * 7 + 1 + (7 - day + 1);       //将第一个星期一之前的天数应考虑到
//	}
//	cout << year << "-" << 0 << 1 << "-" << ret << endl;   //马丁.路德.金纪念日
//
//	day = (days + 31 - 1) % 7;   //2.1号星期几
//	if (day == 1)
//	{
//		ret = 2 * 7 + 1;
//	}
//	else if (day == 0)
//	{
//		ret = 2 * 7 + 2;
//	}
//	else
//	{
//		ret = 2 * 7 + 1 + (7 - day + 1);
//	}
//	cout << year << "-" << 0 << 2 << "-" << ret << endl;   //总统日
//
//	if (isleap(year))
//	{
//		day = (days + 152 - 1) % 7;
//	}
//	else
//	{
//		day = (days + 151 - 1) % 7;
//	}
//	if (day == 1)
//	{
//		ret = 31 - 7 + 1;
//	}
//	else if (day == 0)
//	{
//		ret = 31 - 6 + 1;
//	}
//	else
//	{
//		ret = 31 - day + 2;
//	}
//	cout << year << "-" << 0 << 5 << "-" << ret << endl;   //阵亡将士纪念日
//
//	cout << year << "-" << 0 << 7 << "-" << 0 << 4 << endl;   //美国国庆
//
//	if (isleap(year))
//	{
//		day = (days + 244 - 1) % 7;
//	}
//	else
//	{
//		day = (days + 243 - 1) % 7;
//	}
//	if (day == 1)
//	{
//		ret = 1;
//	}
//	else if (day == 0)
//	{
//		ret = 2;
//	}
//	else
//	{
//		ret=1 + (7 - day + 1);
//	}
//	cout << year << "-" << 0 << 9 << "-" << 0 << ret << endl;   //劳动节
//
//	if (isleap(year))
//	{
//		day = (days + 305 - 1) % 7;
//	}
//	else
//	{
//		day = (days + 304 - 1) % 7;
//	}
//	if (day <= 4)
//	{
//		ret = 2 * 7 + 4 + (7 - day + 1);   //0也满足
//	}
//	else
//	{
//		ret = 3 * 7 + 4 + (7 - day + 1);
//	}
//	cout << year << "-" << 11 << "-" << ret << endl;   //感恩节
//
//	cout << year << "-" << 12 << "-" << 25 << endl;   //圣诞节
//}
//
//int main()
//{
//	int year;
//	while (cin >> year)
//	{
//		Festival(year);
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

//该题思路：
//该题的解法是已知2000.01.01是星期六，在该日期基础上建立的有关日期的数学运算，做该题时可以去细看日历的排布和规律
//求每个月的第几个星期几：
//先求出改月的1号是星期几，则在此基础上接着计算具体日期
