//题目描述
//请从字符串中提取以最后一个[img]开头、以最后一个[\img]结尾的字符串，未找到匹配的字符串返回"null"
//输入描述:
//可能包含[img][\img]的字符串
//输出描述 :
//截取后的字符串

//#include<iostream>
//using namespace std;
//int main() {
//	string str;
//	cin >> str;
//	int l = -1, r = -1;
//
//	for (int i = 0; i <= str.size() - 5; i++) {
//		if (str[i] == '[') {
//			if (str[i + 1] == 'i' && str[i + 2] == 'm' && str[i + 3] == 'g' && str[i + 4] == ']') {
//				l = i;
//				i += 4;
//			}
//		}
//	}
//
//	for (int i = str.size() - 6; i >= 0; i--) {
//		if (str[i] == '[') {
//			if (str[i + 1] == '\\' && str[i + 2] == 'i' && str[i + 3] == 'm' && str[i + 4] == 'g' && str[i + 5] == ']') {
//				r = i;
//				i -= 5;
//				break;
//			}
//		}
//	}
//
//	if (l == -1 || r == -1 || l > r)
//		cout << "null";
//	else
//		cout << str.substr(l, r - l + 6);
//	return 0;
//}