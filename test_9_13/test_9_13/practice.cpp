#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	int count;
	while (cin >> count)
	{
		string str;
		string real;
		getchar();
		getline(cin, str);
		stack<char> s;
		int length = 0;
		while (length<str.size())
		{
			for (int i = 0; i<count; ++i)
			{
				s.push(str[length++]);
				if (length == str.size())
				{
					break;
				}
			}
			while (!s.empty())
			{
				real += s.top();
				s.pop();
			}
			
		}
		real[length] = '\0';
		cout << real << endl;
	}
	return 0;
}