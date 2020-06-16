//题目描述
//给出两个相同长度的由字符 a 和 b 构成的字符串，定义它们的距离为对应位置不同的字符 的数量。如串”aab”与串”aba”的距离为 2; 串”ba”与串”aa”的距离为 1; 串”baa”和串”baa”的 距离为 0。下面给出两个字符串 S 与 T，其中 S 的长度不小于 T 的长度。我们用 | S | 代表 S 的 长度， | T | 代表 T 的长度，那么在 S 中一共有 | S | -| T | +1 个与 T 长度相同的子串，现在你需要计 算 T 串与这些 | S | -| T | +1 个子串的距离的和。
//输入描述 :
//第一行包含一个字符串 S。
//第二行包含一个字符串 T。
//S和T均由字符a和b组成，1≤ | T | ≤ | S | ≤105。
//输出描述 :
//输出对应的答案。
//#include <iostream>
//using namespace std;
//int main(){
//	string s1, s2;
//	cin >> s1;
//	cin >> s2;
//	long long numa, numb, total, pos;
//	numa = numb = total = pos = 0;
//	for (int i = 0; i<s1.length(); ++i){
//		if (i<s2.length()){
//			if (s2[i] == 'a') numa++;
//			else numb++;
//		}
//		if (s1[i] == 'a') total += numb;
//		else total += numa;
//		if (i >= s1.length() - s2.length()){
//			if (s2[pos++] == 'a') numa--;
//			else numb--;
//		}
//	}
//
//	cout << total;
//
//}