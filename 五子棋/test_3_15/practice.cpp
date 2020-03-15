//ţ�ͣ�������

//��Ŀ������
//NowCoder��������������壬���ڸ���һ����֣������æ�ж�������û���������飨�������Ҳ�㣩��
//�������� :
//�����ж������ݣ�ÿ������Ϊһ��20x20�����̡�
//���к����á�*����ʾ�������á� + ����ʾ���հ�λ���á�.����ʾ��
//������� :
//��������ϴ����������飨����������ɫ�����ӣ������롰Yes�������������No����

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int arr[4][2][2] = { { { -1, 0 }, { 1, 0 } }, { { 0, -1 }, { 0, 1 } }, { { -1, -1 }, { 1, 1 } }, { { -1, 1 }, { 1, -1 } } };
//����ά���������˼����һ����Ϊ���ģ����ĸ����򣬴��������������С���֣�ÿһ�����ɺ����������깹��
int count(vector<string> &chess, char value, int x, int y)    
{
	int max_c = 0;
	for (int i = 0; i<4; ++i)   //�ĸ����򣬺������Խ�
	{
		int c = 0;              //��¼һ����������Ҫ��ĵ����
		for (int j = 0; j<2; ++j)   //�����ڵ�����С��֧
		{
			int x1 = x, y1 = y;
			while (x1 >= 0 && x1<20 && y1 >= 0 && y1<20 && chess[x1][y1] == value)
			{
				x1 = x1 + arr[i][j][0];
				y1 = y1 + arr[i][j][1];
				c++;
			}
		}
		max_c = max(c, max_c);
	}
	return max_c - 1;   //��Ϊ��x,y����������
}
bool result(vector<string> &chess)
{
	for (int i = 0; i<chess.size(); ++i)            //���ܽ���˫��forѭ����������������,��Ϊһ���ҵ�>=5�ĵ��Ӧ�ý������������������û�취ֹͣ
	{
		for (int j = 0; j<chess[i].size(); ++j)
		{
			if (chess[i][j] == '*' || chess[i][j] == '+')
			{
				if (count(chess, chess[i][j], i, j) >= 5)
				{
					return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	vector<string> chess(20);
	while (cin >> chess[0])
	{
		for (int i = 1; i<chess.size(); ++i)
		{
			cin >> chess[i];
		}
		if (result(chess))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
