#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{
	int right = 0;
	int down = 1;
	int left = 2;
	int up = 3;
	int M, N;
	cin >> M >> N;
	vector<vector<char>>board(M, vector<char>(N, ' '));
	int yidong = right;
	int row = 0;
	int col = 0;
	char c = 'A';
	for (int i = 1; i<=M*N; ++i)
	{
		board[row][col] = c;  //��ֵ

		if (++c>'Z')  //������һ��ֵ
		{
			c = 'A';
		}

		//������һ��λ��
		if (yidong == right)
		{
			if (col + 1 == N)   //˵����ʱ�Ѿ������һ���ˣ���һ��Ӧ����
			{
				row++;
				yidong = down;
			}
			else if (board[row][col + 1] != ' ')
			{
				row++;
				yidong = down;
			}
			else
			{
				col++;
			}
		}
		else if (yidong == down)
		{
			if (row + 1 == M)
			{
				col--;
				yidong = left;
			}
			else if (board[row + 1][col] != ' ')
			{
				col--;
				yidong = left;
			}
			else
			{
				row++;
			}
		}
		else if (yidong == left)
		{
			if (col == 0)
			{
				row--;
				yidong = up;
			}
			else if (board[row][col - 1] != ' ')
			{
				row--;
				yidong = up;
			}
			else
			{
				col--;
			}
		}
		else if (yidong == up)
		{
			if (row == 0)
			{
				col++;
				yidong = right;
			}
			else if (board[row-1][col] != ' ')
			{
				col++;
				yidong = right;
			}
			else
			{
				row--;
			}
		}
	}
	for (int i = 0; i<M; ++i)
	{
		for (int j = 0; j<N; ++j)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
