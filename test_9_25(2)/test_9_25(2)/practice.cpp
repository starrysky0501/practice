#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

string rotatePassword(vector<string>& s1, vector<string>& s2) {
	string str;
	for (int i = 0; i<s1.size(); ++i)
	{
		for (int j = 0; j<s1.size(); ++j)
		{
			if (s1[i][j] == '0')
			{
				str += s2[i][j];
			}
		}
	}
	for (int j = 0; j<s1.size(); ++j)
	{
		for (int i = s1.size() - 1; i >= 0; --i)
		{
			if (s1[i][j] == '0')
			{
				str += s2[i][j];
			}
		}
	}
	for (int i = s1.size() - 1; i >= 0; --i)
	{
		for (int j = s1.size() - 1; j >= 0; --j)
		{
			if (s1[i][j] == '0')
			{
				str += s2[i][j];
			}
		}
	}
	for (int j = s1.size() - 1; j >= 0; --j)
	{
		for (int i = 0; i<s1.size(); ++i)
		{
			if (s1[i][j] == '0')
			{
				str += s2[i][j];
			}
		}
	}
	str += '0';
	return str;
}
int main()
{
	vector<string> s1;
	vector<string> s2;
	string str;
	for (int i = 0; i < 4; ++i)
	{
		cin >> str;
		s1.push_back(str);
	}
	for (int i = 0; i < 4; ++i)
	{
		cin >> str;
		s2.push_back(str);
	}
	string str1 = rotatePassword(s1, s2);
	cout << str1<< endl;
	system("pause");
	return 0;
}