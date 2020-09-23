//36进制由0到9和a到z组成
//不知道问什么用例就过了90%
#include <iostream>
#include <string>
using namespace std;
long long zhuanhuan(string s)
{
	long long jinzhi = 36;
	long long jieguo = 0;
	for (int i = 0; i<s.size(); ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			jieguo *= jinzhi;
			jieguo += s[i] - '0';
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			jieguo *= jinzhi;
			jieguo += s[i] - 'a' + 10;  //a就是10
		}

		if (jieguo>9223372036854775807)
		{
			jieguo = 9223372036854775807;
			return jieguo;
		}

		if (jieguo < -9223372036854775807)
		{
			jieguo = -9223372036854775807;
			return jieguo;
		}
	}
	return jieguo;
}
int main()
{
	string s;
	cin >> s;
	long long jieguo = 0;
	if (s[0] == '-')
	{
		string tmp;
		tmp = s.substr(1, s.size() - 1);
		jieguo = -zhuanhuan(tmp);
		cout << jieguo << endl;
	}
	else if (s[0] >= '0'&& s[0] <= '9' || s[0] >= 'a' && s[0] <= 'z')
	{
		jieguo = zhuanhuan(s);
		cout << jieguo << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}