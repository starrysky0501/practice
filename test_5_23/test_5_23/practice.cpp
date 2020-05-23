//2018校招真题：缩写
//题目描述
//在英文中, 我们会把一些长的名字或者短语进行缩写。例如"looks good to me"缩写为"lgtm", 短语中的每个单词的首字母组成缩写。现在给出一个字符串s, 字符串s中包括一个或者多个单词, 单词之间以空格分割, 请输出这个字符串的缩写。
//输入描述 :
//输入包括一个字符串s, 字符串长度length(1 ≤ length ≤ 50), 字符串中只包括小写字母('a'~'z')和空格。
//输出描述 :
//输出一个字符串, 即缩写的结果。
//#include <iostream>
//using namespace std;
//
//int main(){
//	string s, r;
//	getline(cin, s);
//	r.push_back(s[0]);
//
//	for (int i = 1; i < s.size(); i++){
//
//		if (s[i - 1] == ' ') r.push_back(s[i]);
//	}
//
//	cout << r;
//	return 0;
//}
