//题目描述
//有三只球队，每只球队编号分别为球队1，球队2，球队3，这三只球队一共需要进行 n 场比赛。现在已经踢完了k场比赛，每场比赛不能打平，踢赢一场比赛得一分，输了不得分不减分。已知球队1和球队2的比分相差d1分，球队2和球队3的比分相差d2分，每场比赛可以任意选择两只队伍进行。求如果打完最后的(n - k) 场比赛，有没有可能三只球队的分数打平。
//输入描述 :
//第一行包含一个数字 t(1 <= t <= 10)
//接下来的t行每行包括四个数字 n, k, d1, d2(1 <= n <= 10 ^ 12; 0 <= k <= n, 0 <= d1, d2 <= k)
//输出描述 :
//	 每行的比分数据，最终三只球队若能够打平，则输出“yes”，否则输出“no”
//
//#include <iostream>
//using namespace std;
//int main(int argc, char *argv[])
//{
//	int t;
//	long int n, k, d1, d2, tmp, left;
//
//	cin >> t;
//	while (t > 0)
//	{
//		t--;
//		cin >> n >> k >> d1 >> d2;
//
//		tmp = k - d1 - d1 - d2; //球队1< 球队2，球队2<球队3        
//		if (tmp >= 0 && tmp % 3 == 0) //球队1的得分有解是大前提
//		{
//			left = (n - k) - (d1 + d2 + d2);
//			if (left >= 0 && left % 3 == 0)//剩下的场次不小于need，并且可以均分3场。
//			{
//				cout << "yes" << endl;
//				continue;
//			}
//		}
//
//		tmp = k - d1 - d1 + d2; //球队1< 球队2，球队2>球队3
//		if (tmp >= 0 && tmp % 3 == 0)
//		{
//			left = (n - k) - (d1 + d2);
//			if (left >= 0 && left % 3 == 0)
//			{
//				cout << "yes" << endl;
//				continue;
//			}
//		}
//
//		tmp = k + d1 + d1 + d2;//球队1> 球队2，球队2>球队3
//		if (tmp >= 0 && tmp % 3 == 0)
//		{
//			left = (n - k) - (d1 + d1 + d2);
//			if (left >= 0 && left % 3 == 0)
//			{
//				cout << "yes" << endl;
//				continue;
//			}
//		}
//
//		tmp = k + d1 + d1 - d2;//球队1>球队2，球队2<球队3
//		if (tmp >= 0 && tmp % 3 == 0)
//		{
//			if (d1 >= d2)
//			{
//				left = (n - k) - (d1 + d1 - d2);
//			}
//			else
//			{
//				left = (n - k) - (d2 + d2 - d1);
//			}
//			if (left >= 0 && left % 3 == 0)
//			{
//				cout << "yes" << endl;
//				continue;
//			}
//		}
//
//		cout << "no" << endl;
//	}
//
//	return 0;
//}