#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<vector<char>> &chess)
{
	for (int i = 0; i<16; ++i)
	{
		for (int j = 0; j<16; ++j)
		{
			if (chess[i][j] == '.')
				continue;
			int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
			for (int k = 1; k<5; ++k)
			{
				if (i + k<20 && chess[i][j] == chess[i + k][j])
					count1++;
				else
					break;
				if (j + k<20 && chess[i][j] == chess[i][j + k])
					count2++;
				else
					break;
				if (i + k<20 && j + k<20 && chess[i][j] == chess[i + k][j + k])
					count3++;
				else
					break;
				if (j - k>0 && i + k<20 && chess[i][j] ==chess[i + k][j - k])
					count4++;
				else
					break;
			}
			if (count1 == 5 || count2 == 5 || count3 == 5 || count4 == 5)
				return true;
		}

		
	}
	return false;
}
int main()
{
	vector<vector<char>>chess(20, vector<char>(20));
	while (cin >> chess[0][0])
	{
		for (int i = 0; i<20; ++i)
		{
			for (int j = 0; j<20; ++j)
			{
				if (i == 0 && j == 0)
					continue;
				cin >> chess[i][j];
			}
		}
		if (solve(chess))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}