//罗马数字转整形

#include<iostream>
#include<string>
using namespace std;

int ToCharArray(string s)
{
	int result = 0;
	for (int i = 0; i<s.length(); ++i) {
		switch (s[i]){
		case 'M':
			result += 1000;
			break;
		case 'D':
			result += 500;
			break;
		case 'L':
			result += 50;
			break;
		case 'V':
			result += 5;
			break;
		case 'I':
			if (i + 1<s.length() && (s[i + 1] == 'V' || s[i + 1] == 'X')){
				result -= 1;
			}
			else {
				result += 1;
			}
			break;
		case 'X':
			if (i + 1<s.length() && (s[i + 1] == 'L' || s[i + 1] == 'C')){
				result -= 10;
			}
			else {
				result += 10;
			}
			break;
		case 'C':
			if (i + 1<s.length() && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
				result -= 100;
			}
			else {
				result += 100;
			}
			break;
		}
	}
	return result;
}

int main()
{
	string s;
	while (cin >> s)
	{
		int result=ToCharArray(s);
		cout << result << endl;
	}
	return 0;
}
