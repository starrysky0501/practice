//题目描述
//给定一个非空字符串, 按照如下方式编码, 使得编码后长度最小, 返回编码后的长度:
//编码规则为 : k[encoding_string], 表示重复k次encoding_strng,
//	例如'abcdefabcdefabc'可表示为'2[abcdef]abc', 但是'aaa'仅能编码成'aaa',
//	因为len('3[a]')>len('aaa').
//补充:
//		1. k为正整数, []内的encoding_string不得含有空格不得为空;
//		2.[]内的encoding_string 本身可以为编码过的字符串, 例如'abcdabcdeabcdabcde' 可以编码为 '2[abcdabcde]'(编码后长度从18减少到12), []内的'abcdabcde'又可以编码为 '2[abcd]e', 最终编码为 '2[2[abcd]e]', 编码后长度为11, 应返回11; 这个编码路径也能是: 'abcdabcdeabcdabcde' -> '2[abcd]e2[abcd]e' -> '2[2[abcd]e]';
//		2. 输入字符串为全小写英文字母, 长度 <= 160;
//		3. 如果编码后长度没有更小, 则保留原有字符串;
//	输入描述:
//		一行数据, 表示输入字符串
//		输出描述 :
//		输出一个字符串表示编码后长度
////#include <iostream>
////#include <string>
////using namespace std;
////string encode(string s) {
////	int lenth  = s.size();
////	vector<vector<string>> dp(lenth, vector<string>(lenth, ""));
////	for (int step = 1; step <= lenth; step++){
////		for (int i = 0; i + step - 1<lenth; i++){
////			int j = i + step - 1;
////			dp[i][j] = s.substr(i, step);
////			for (int k = i; k<j; k++){
////				string left  = dp[i][k];
////				string right  = dp[k + 1][j];
////				if (left.size() + right.size()<dp[i][j].size()){
////					dp[i][j] = left + right;
////				}
////			}
////			string t  = s.substr(i, j - i + 1), replace = "";
////			auto pos  = (t + t).find(t, 1);
////			if (pos >= t.size()) replace = t;
////			else replace  = to_string(t.size() / pos) + '[' + dp[i][i  + pos  - 1] + ']';
////			if (replace.size()<dp[i][j].size()) dp[i][j] = replace;
////		}
////	}
////	return dp[0][lenth - 1];
////}
////
////int main(){
////	string s;
////	cin >> s;
////	cout << encode(s).length() << endl;
////}
