//牛客：字符串计数

//题目描述
//求字典序在s1和s2之间的，长度在len1到len2的字符串的个数，结果mod 1000007。
//输入描述 :
//每组数据包涵s1（长度小于100），s2（长度小于100），len1（小于100000），len2（大于len1，小于100000）
//输出描述 :
//输出答案。

//#include<iostream>
//#include<string>
//#include<math.h>
//using namespace std;
//int main()
//{
//	string str1, str2;
//	int len1, len2;
//	while (cin >> str1 >> str2 >> len1 >> len2)
//	{
//		int sum = 0;
//		//将str1和str2的长度补到len2的长度
//		if (str1.size()<len2)
//		{
//			str1.append(len2 - str1.size(), 'a');
//		}
//		if (str2.size()<len2)
//		{
//			str2.append(len2 - str2.size(), 'a');
//		}
//		for (int i = len1; i <= len2; ++i)
//		{
//			for (int j = 0; j<i; ++j)
//			{
//				sum = sum + (str2[j] - str1[j])*pow(26, i - j - 1);
//			}
//		}
//		cout << sum -1 << endl;    //结果应不包含str2自身，所以要减1
//	}
//	return 0;
//}

//根据给的测试样例发现，只是小写字母之间的比较，不包含大写字母

//该题思路：
//起初，并未理解该题的意思，最后看了一位大佬的评论才理解：
//首先搞清楚字典序的意思：即从两个字符串的下标为0开始进行对比，字典序是从左向右进行对比的
//例如：ab和bb之间的字符串个数为ac,ad,ae...az,ba这26个字符串，所以高位的字符串个数是26的i次幂
//其次，要理解题目的"长度在len1到len2的字符串的个数",指的是长度在len1的字符串个数，长度在len1+1的字符串的个数...长度在len2的字符串的个数
//例如：abcde和acede这两个字符串，长度为1到4表示的是长度为1的时候，两个字符a,a之间的个数,长度为2的时候两个字符ab,ac之间的个数，长度为3的时候abc,ace两个字符串之间的个数, 长度为4的时候abcd,aced之间的个数
//所以计算的时候应该是以长度为变量遍历len1到len2之间的字符串个数，最后相加

//知识点补充：
//basic_string &append(size_type num, char ch);
//在字符串的末尾添加num个字符ch