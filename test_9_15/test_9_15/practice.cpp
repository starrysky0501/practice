#include <iostream>
#include <vector>
#include <string>
using namespace std;
int findroad[4][2] = { { 0, 1 }, {1, 0},{0, -1},{-1, 0} }; //四个方向

bool DFS(vector<vector<char>>&board, string &word, int row, int col, int index)
{

	if (row<0 || row >= board.size() || col<0 || col >= board[0].size() || board[row][col] != word[index])  //边界
		return false;
	if (index == word.size() - 1)  //最后一个都被匹配
	{
		return true;
	}
	board[row][col] = '*'; //此处已判断不能走
	char huanyuan = word[index];
	int new_row, new_col;
	for (int i = 0; i<4; ++i)
	{
		new_row =row+ findroad[i][0];
		new_col =col+ findroad[i][1];
		if (DFS(board, word, new_row, new_col, index + 1))
		{
			return true;
		}
	}
	board[row][col] = huanyuan;
	return false;
}

bool exist(vector<vector<char>> &board,string word)
{
	if (board.size() == 0 || board[0].size() == 0)
		return false;
	int row = board.size();
	int col = board[0].size();
	for (int i = 0; i<row; ++i)
	{
		for (int j = 0; j<col; ++j)
		{
			if (DFS(board, word, i, j, 0))
			{
				return true;
			}
		}
	}
	return false;
}


int main()
{
	string word;
	vector<vector<char>> board;
	string str;
	cin >> str;
	int count = 0;
	vector<string> arr;
	string s1;
	for (int i = 0; i<str.size(); ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			
			s1 += str[i];
			count++;

		}
	}
	s1 += '\0';
	arr.push_back(s1);
	string s2;
	for (int i = 0; i<count - 1; ++i)
	{
		cin >> s2;
		string s3;
		for (int j = 0; j<s2.size(); ++j)
		{
			if (str[j] >= 'A' && str[j] <= 'Z' || str[j] >= 'a' && str[j] <= 'z')
			{
				
				s3 += str[i];
				count++;
			}
		}
		arr.push_back(s3);
	}
	cin >> word;
	for (int i = 0; i<str.size(); ++i)
	{
		for (int j = 0; j<str.size(); ++j)
		{
			board[i][j] = arr[i][j];
		}
	}
	if (exist(board, word))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	return 0;
}