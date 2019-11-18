//密码强度等级
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int getgrade(string a)
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
	vector<int> b1, b2, b3, b4;

	if (a.size() <= 4)
		a1 = 5;
	else if (a.size() >= 5 && a.size() <= 7)
		a1 = 10;
	else
		a1 = 25;

	for (int i = 0; i<a.size(); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			b1.push_back(a[i]);
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			b2.push_back(a[i]);
		}
		else if (a[i] >= '1' && a[i] <= '9')
		{
			b3.push_back(a[i]);
		}
		else
		{
			b4.push_back(a[i]);
		}
	}

	if (b1.size() == 0 && b2.size() == 0)
		a2 = 0;
	else if (b1.size() != 0 && b2.size() != 0)
		a2 = 20;
	else
		a2 = 10;

	if (b3.size() == 0)
		a3 = 0;
	else if (b3.size() == 1)
		a3 = 10;
	else
		a3 = 20;

	if (b4.size() == 0)
		a4 = 0;
	else if (b4.size() == 1)
		a4 = 10;
	else
		a4 = 25;

	if (b1.size() && b2.size() && b3.size() && b4.size())
		a5 = 5;
	else if ((b1.size() || b2.size()) && b3.size() && b4.size())
		a5 = 3;
	else if ((b1.size() || b2.size()) && b3.size())
		a5 = 2;
	else
		a5 = 0;

	int total = a1 + a2 + a3 + a4 + a5;
	return total;
}
int main()
{
	string a;
	while (cin >> a)
	{
		int sum = getgrade(a);
		switch (sum / 10)
		{
		case 9:
			cout << "VERY_SECURE" << endl;
			break;
		case 8:
			cout << "SECURE" << endl;
			break;
		case 7:
			cout << "VERY_STRONG" << endl;
			break;
		case 6:
			cout << "STRONG" << endl;
			break;
		case 5:
			cout << "AVERAGE" << endl;
			break;
		default:
		{
				   if (sum >= 25)
					   cout << "WEAK" << endl;
				   else
					   cout << "VERY_WEAK" << endl;
		}
		}
	}
	return 0;
}