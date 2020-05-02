//2018校招真题：计算1年中的第几天
//题目描述
//今年的第几天？
//输入年、月、日，计算该天是本年的第几天。
//输入描述 :
//包括三个整数年(1 <= Y <= 3000)、月(1 <= M <= 12)、日(1 <= D <= 31)。
//输出描述 :
//输入可能有多组测试数据，对于每一组测试数据，
//输出一个整数，代表Input中的年、月、日对应本年的第几天。
//#include <iostream>
//#include <vector>
//using namespace std;
//int main(void)
//{
//	int year, month, day;
//	while (cin >> year >> month >> day)
//	{
//		int count = 0;
//		int Feb = 28;
//		if (year % 4 == 0 || year % 400 == 0)
//		{
//			Feb = 29;
//		}
//		vector<int> monthcount = { 0, 31, Feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		for (int i = 0; i < month; i++)
//		{
//			count += monthcount[i];
//		}
//		count += day;
//		cout << count << endl;
//	}
//	return 0;
//}
