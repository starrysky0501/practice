//2018校招真题：小熊吃糖
//题目描述
//有n只小熊，他们有着各不相同的战斗力。每次他们吃糖时，会按照战斗力来排，战斗力高的小熊拥有优先选择权。前面的小熊吃饱了，后面的小熊才能吃。每只小熊有一个饥饿值，每次进食的时候，小熊们会选择最大的能填饱自己当前饥饿值的那颗糖来吃，可能吃完没饱会重复上述过程，但不会选择吃撑。
//现在给出n只小熊的战斗力和饥饿值，并且给出m颗糖能填饱的饥饿值。
//求所有小熊进食完之后，每只小熊剩余的饥饿值。
//输入描述 :
//第一行两个正整数n和m，分别表示小熊数量和糖的数量。（n <= 10, m <= 100）
//第二行m个正整数，每个表示着颗糖能填充的饥饿值。
//接下来的n行，每行2个正整数，分别代表每只小熊的战斗力和当前饥饿值。
//题目中所有输入的数值小于等于100。
//输出描述 :
//输出n行，每行一个整数，代表每只小熊剩余的饥饿值。
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct Bear
//{
//	int level;
//	int hungry;
//	int num;
//};
//bool func1(Bear a, Bear b)
//{
//	if (a.level >= b.level)
//		return true;
//	else
//		return false;
//}
//bool func2(int a, int b)
//{
//	if (a > b)
//		return true;
//	else
//		return false;
//}
//bool func3(Bear a, Bear b)
//{
//	if (a.num < b.num)
//		return true;
//	else
//		return false;
//}
//int main(void)
//{
//	int bearnum, candynum, itemp;
//	cin >> bearnum >> candynum;
//	vector<int> candy(candynum);
//	for (int i = 0; i < candynum; i++)
//	{
//		cin >> itemp;
//		candy[i] = itemp;
//	}
//	vector<Bear> bear(bearnum);
//	for (int i = 0; i < bearnum; i++)
//	{
//		Bear temp;
//		cin >> temp.level >> temp.hungry;
//		temp.num = i;
//		bear[i] = temp;
//	}
//	sort(bear.begin(), bear.end(), func1);
//	sort(candy.begin(), candy.end(), func2);
//	for (int i = 0; i < bearnum; i++)
//	{
//		int index = 0;
//		while (index < candynum)
//		{
//			if (bear[i].hungry >= candy[index])
//			{
//				bear[i].hungry = bear[i].hungry - candy[index];
//				candy[index] = 0;
//			}
//			index++;
//		}
//	}
//	sort(bear.begin(), bear.end(), func3);
//	for (auto c : bear)
//	{
//		cout << c.hungry << endl;
//	}
//	return 0;
//}
