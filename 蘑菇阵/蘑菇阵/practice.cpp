//ţ�ͣ�Ģ����

//��������������A��B��ס��һƬ����Ģ������n��m��������ɵĲݵأ�A��(1, 1), B��(n, m)������A��Ҫ�ݷ�B��������ֻ��ȥ
//B�ļң�����ÿ����ֻ����(i, j + 1)��(i + 1, j)������·�ߣ��ڲݵ�����k��Ģ�����ڸ�����(���Ģ��������ͬһ����), �ʣ�
//A���ÿһ�����ѡ��Ļ�(�����ڱ߽��ϣ���ֻ��һ��ѡ��)����ô��������Ģ���ߵ�B�ļҵĸ����Ƕ��٣�
//�������� :
//��һ��N��M��K(1 �� N, M �� 20, k �� 100), N, MΪ�ݵش�С��������K�У�ÿ����������x��y������(x, y)����һ��Ģ����
//������� :
//���һ�У������������(������2λС��)


#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int road[21][21];
double board[21][21];
int main()
{
	int n, m, k;
	while (cin >> n >> m >> k)
	{
		memset(road, 0, sizeof(road)); //sizeof(road)=4*21*21
		memset(board, 0, sizeof(board));
		int x, y;
		for (int i = 0; i<k; ++i)
		{
			cin >> x >> y;
			road[x][y] = 1;
		}

		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				if (i == 1 && j == 1)     //��ʼ����
				{
					board[i][j] = 1;
					continue;
				}
				if (i == n && j == m)     //��λ�ü�¼�������
				{
					board[i][j] = board[i - 1][j] + board[i][j - 1];
					continue;
				}
				if (road[i][j])           //��Ϊ1ʱ����˵���ô���Ģ��
				{
					board[i][j] = 0;
					continue;
				}
				//�ĸ�����������
				if (i == n)           
				{
					board[i][j] = board[i][j - 1] + 0.5*board[i - 1][j];
					continue;
				}
				if (j == m)
				{
					board[i][j] = board[i - 1][j] + 0.5*board[i][j - 1];
					continue;
				}
				if (i == 1)
				{
					board[i][j] = 0.5*board[i][j - 1];
					continue;
				}
				if (j == 1)
				{
					board[i][j] = 0.5*board[i - 1][j];
					continue;
				}

				board[i][j] = 0.5*board[i - 1][j] + 0.5*board[i][j - 1];
			}
		}

		cout << fixed << setprecision(2) << board[n][m] << endl;
	}
}

//�������������һ����ӣ�
//��˫��forѭ����if�����жϣ�i==n /j==m������i==1/j==1֮ǰ����Ϊ�����������ֻ��1�л�һ�е����ʱ��
//��i==1/j==1����ǰ�棬����ֽ���������

//ע�⣺���ⲻ���ÿɴ�·����/��·��������ʣ���Ϊÿ��·���ĸ��ʲ�ͬ��ע������
//
//֪ʶ�㲹�䣺
//1.memset������
//ͷ�ļ���#include<string.h> /#include<cstring>
//���ã������ǽ�ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ�� �������ͨ��Ϊ��������ڴ�����ʼ��������
//����ԭ�ͣ�void *memset(void *s, int ch, size_t n);
//�������ͣ���s�е�ǰλ�ú����n���ֽ� ��typedef unsigned int size_t ���� ch �滻������ s ��
//2.c++�к���setprecision��fixed��
//setprecision�����ǿ����������ʾ����������Ч���ָ����������fixed���õĻ������Կ���С��������м�λ��
//�÷���⣺
//http://c.biancheng.net/view/1340.html
//https://zhidao.baidu.com/question/31863763.html