#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	int num;
	string arr = "22233344455566677778889999";
	while (cin >> num)
	{
		set<string> data;
		for (int i = 0; i<num; ++i)
		{
			string tel;
			cin >> tel;
			int count = 0;
			string tmp;
			for (int j = 0; j<tel.length(); ++j)
			{
				if (tel[j] >= 'A' && tel[j] <= 'Z')
				{
					tmp += arr[tel[j] - 'A'];
					count++;
					if (count == 3)
						tmp += '-';
				}
				else if (tel[j] >= '0' && tel[j] <= '9')
				{
					tmp += tel[j];
					count++;
					if (count == 3)
						tmp += '-';
				}
			}
			data.insert(tmp);
		}
		for (set<string>::iterator it = data.begin(); it != data.end(); ++it)
		{
			cout << *it << endl;
		}
		cout << endl;
	}
	return 0;
}