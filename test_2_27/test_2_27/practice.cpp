//2018校招真题：缺失的括号

//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//int main(){
//	string str;
//	int num;
//	num = 0;
//	cin >> str;
//	stack<char> I;
//	for (int i = 0; i<str.size(); i++){
//		if (str[i] == '(') I.push('(');
//		if (str[i] == ')'){
//			if (I.size() == 0){
//				num++;
//			}
//			else{
//				I.pop();
//			}
//		}
//	}
//	num = num + I.size();
//	cout << num;
//	return 0;
//}