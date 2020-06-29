//题目描述
//请从字符串中找出至少重复一次的子字符串的最大长度
//输入描述 :
//字符串，长度不超过1000
//输出描述 :
//重复子串的长度，不存在输出0
//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//int main()
//{
//	string ss;
//	cin >> ss;
//	int len = ss.size();
//	map<string, int> data;
//	for (int m = 1; m < len; m++)
//	{
//		for (int i = 0; i < len - m; i++)
//		{
//			string s = ss.substr(i, m);
//			data[s]++;
//		}
//	}
//	int max = 0;
//	for (auto c : data)
//	{
//		if (c.second > 1)
//		{
//			int temp = c.first.size();
//			if (temp > max)
//				max = temp;
//		}
//	}
//	cout << max << endl;
//	return 0;
//}