//题目描述
//有一种将字母编码成数字的方式：'a'->1, 'b->2', ..., 'z->26'。
//现在给一串数字，给出有多少种可能的译码结果。
//输入描述 :
//编码后数字串
//输出描述 :
//可能的译码结果数
//#include <iostream>
//#include <string>
//using namespace std;
//int n;
//int DFS(string &s, int pos){
//	if (s[pos] == '0')return 0;
//	if (pos >= n - 1)return 1;
//	if (s[pos] != '1' && s[pos] != '2'){
//		return DFS(s, pos + 1);
//	}
//	else if (s[pos] == '1'){
//		if (s[pos + 1] == '0')return DFS(s, pos + 2);
//		else{
//			return DFS(s, pos + 2) + DFS(s, pos + 1);
//		}
//	}
//	else{
//		if (s[pos + 1] == '0' || s[pos + 1] - '0'>6)return DFS(s, pos + 2);
//		else{
//			return DFS(s, pos + 2) + DFS(s, pos + 1);
//		}
//	}
//
//}
//int main(){
//	string s;
//	while (cin >> s){
//		n = s.size();
//
//		cout << DFS(s, 0) << endl;
//
//	}
//}
