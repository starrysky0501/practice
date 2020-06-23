//题目描述
//输入一串字符，包含数字[0 - 9]和小写字母[a - z]，要求按数字从小到大、字母从a到z排序，并且所有数字排在字母后面
//输入描述 :
//一串字符
//输出描述 :
//按规则排序的一串字符

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	string s, s1 = "", s2 = "";
//	cin >> s;
//	for (int i = 0; i<s.size(); i++)
//	{
//		if (s[i] >= '0'&&s[i] <= '9')
//			s1 += s[i];
//		else if (s[i] >= 'a'&&s[i] <= 'z')
//			s2 += s[i];
//	}
//	sort(s1.begin(), s1.end());
//	sort(s2.begin(), s2.end());
//	s1 = s2 + s1;
//	cout << s1 << endl;
//	return 0;
//}
