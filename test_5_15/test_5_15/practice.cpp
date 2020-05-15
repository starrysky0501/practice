//2018校招真题：回文
//题目描述
//京京和东东是好朋友。东东很喜欢回文。回文是指从前往后读和从后往前读是一样的词语。京京准备给东东一个惊喜, 先取定一个字符串s, 然后在后面附上0个或者更多个字母形成回文, 京京希望这个回文越短越好。请帮助京京计算他能够得到的最短的回文长度。
//输入描述 :
//输入包括一个字符串s, 字符串s长度length(1 ≤ length ≤ 50)
//输出描述 :
//输出一个整数, 表示牛牛能够得到的最短的回文长度。
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//bool huiwen(string s)
//{
//	string s2 = s; 
//	reverse(s2.begin(), s2.end()); 
//	if (s2 == s) 
//		return true; 
//	else 
//		return false;
//}
//int main()
//{
//	string s; 
//	cin >> s;
//	if (huiwen(s))//如果s本身就是回文就不需要再添加字母，直接输出s的长度就行
//	{
//		cout << s.size() << endl;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 1; i < s.size(); ++i) {
//			string tmp = s;
//			string tmp1 = tmp.substr(0, i);
//			reverse(tmp1.begin(), tmp1.end());
//			tmp = tmp + tmp1;
//			if (huiwen(tmp) == true)
//			{
//				cout << tmp.size() << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
