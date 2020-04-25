//2018校招真题：字符串组合
//题目描述
//输入一个字符串，输出该字符串中相邻字符的所有组合。
//举个例子，如果输入abc，它的组合有a、b、c、ab、bc、abc。（注意：输出的组合需要去重）（40分）
//输入描述 :
//一个字符串
//输出描述 :
//一行，每个组合以空格分隔，相同长度的组合需要以字典序排序，且去重。
//#include<iostream>
//#include<set>
//using namespace std;
//
//int main(void)
//{
//	string str, temp;
//	cin >> str;
//
//	set<string> set;
//	int i, j, len;
//	len = str.size();
//	for (i = 1; i <= len; i++)//定义位置
//	{
//		for (j = 0; j + i - 1 < len; j++)
//		{
//			temp = str.substr(j, i);
//			set.insert(temp);
//		}
//
//		//用set，既能保证去重，又能自动按照字典序排序
//		for (auto it : set)
//			cout << it << " ";
//
//		//每次保存长度相同的子串，输出后清空
//		set.clear();
//	}
//
//	cout << endl;
//
//	return 0;
//}