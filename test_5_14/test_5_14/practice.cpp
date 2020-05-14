//2018校招真题：两个子串
//题目描述
//给定一个字符串s, 请计算输出含有连续两个s作为子串的最短字符串。 注意两个s可能有重叠部分。例如, "ababa"含有两个"aba".
//输入描述:
//输入包括一个字符串s, 字符串长度length(1 ≤ length ≤ 50), s中每个字符都是小写字母.
//输出描述 :
//	 输出一个字符串, 即含有连续两个s作为子串的最短字符串。
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	int l = s.length(); //字符串长度
//	if (l == 0)
//		return 0;
//	if (l == 1)
//	{
//		cout << s + s << endl;
//		return 0;
//	}
//	int j = 1; //截取字符个数
//	int count = 0;
//	string temp; //保存截取的字符
//	for (int i = l - 1; i>0; i--)
//	{
//		string s1 = s.substr(i, j); //从后往前
//		string s2 = s.substr(0, j); //从前往后
//		j++;
//
//		if (s1 == s2)
//		{
//			temp = s2;
//			count++;
//		}
//		else
//		{
//			if (j == 1) //
//			{
//				break;
//			}
//		}
//	}
//	if (count == 0) //表示重复的个数为零
//	{
//		cout << s + s << endl;
//	}
//	else
//	{
//		string re = s.substr(temp.length(), l - temp.length()); //截取不重复的部分
//		cout << s + re << endl;
//	}
//	return 0;
//}
