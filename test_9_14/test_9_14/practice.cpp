#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		vector<string> arr;
		int count = 0;
		for (int i = 0; i<str.size(); ++i)
		{
			int start=0, end=0;
			if (str[i] >= '5' && str[i] <= '8')
			{
				start = end = i;
				++i;
				while (i<str.size() && str[i] >= '5' && str[i] <= '8')
				{
					end = i;
					++i;
				}

			}
			if (end - start >= 1)
			{
				string s;
				while (start <= end)
				{
					s += str[start];
					start++;
				}
				s += '\0';
				arr.push_back(s);
			}
		}
		if (arr.size() != 0)
		{
			int maxlength = arr[0].size();
			string strlength;
			for (int i = 0; i<arr.size(); ++i)
			{
				if (arr[i].size() >= maxlength)
				{
					maxlength = arr[i].size();
					strlength = arr[i];
				}
			}
			cout << strlength << endl;
		}
		
	}
	return 0;
}