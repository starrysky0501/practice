//2018校招真题：删除重复字符

//题目描述：牛牛有一个由小写字母组成的字符串s,在s中可能有一些字母重复出现。比如在"banana"中,
//字母'a'和字母'n'分别出现了三次和两次。但是牛牛不喜欢重复。对于同一个字母, 他只想保留第一次
//出现并删除掉后面出现的字母。请帮助牛牛完成对s的操作。

//#include <iostream>
//#include <cstdio>
//#include <cstring>
//
//using namespace std;

//int main()
//{
//	string str;
//	bool hasGot[201] = { false };
//	cin >> str;
//	int len = str.length();
//	for (int i = 0; i<len; i++)
//	{
//		if (hasGot[str[i]] == false)
//		{
//			cout << str[i];
//			hasGot[str[i]] = true;
//		}
//	}
//	cout << endl;
//	return 0;
//}