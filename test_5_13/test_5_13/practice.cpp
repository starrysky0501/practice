//2018У�����⣺С�ܳ���
//��Ŀ����
//��nֻС�ܣ��������Ÿ�����ͬ��ս������ÿ�����ǳ���ʱ���ᰴ��ս�������ţ�ս�����ߵ�С��ӵ������ѡ��Ȩ��ǰ���С�ܳԱ��ˣ������С�ܲ��ܳԡ�ÿֻС����һ������ֵ��ÿ�ν�ʳ��ʱ��С���ǻ�ѡ����������Լ���ǰ����ֵ���ǿ������ԣ����ܳ���û�����ظ��������̣�������ѡ��Գš�
//���ڸ���nֻС�ܵ�ս�����ͼ���ֵ�����Ҹ���m��������ļ���ֵ��
//������С�ܽ�ʳ��֮��ÿֻС��ʣ��ļ���ֵ��
//�������� :
//��һ������������n��m���ֱ��ʾС���������ǵ���������n <= 10, m <= 100��
//�ڶ���m����������ÿ����ʾ�ſ��������ļ���ֵ��
//��������n�У�ÿ��2�����������ֱ����ÿֻС�ܵ�ս�����͵�ǰ����ֵ��
//��Ŀ�������������ֵС�ڵ���100��
//������� :
//���n�У�ÿ��һ������������ÿֻС��ʣ��ļ���ֵ��
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
