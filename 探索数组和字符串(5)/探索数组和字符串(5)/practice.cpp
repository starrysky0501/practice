//leetcode:实现strStr()
//题目描述：
//实现 strStr() 函数。
//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置(从0开始)。如果不存在，则返回 - 1。
//说明 :
//当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。
//对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与C语言的 strstr() 以及 Java的 indexOf() 定义相符。

//class Solution {
//public:
//	int strStr(string haystack, string needle) {
//		int n = haystack.size();
//		int m = needle.size();
//		if (m == 0)
//			return 0;
//		for (int i = 0; i<n - m + 1; ++i)
//		{
//			int j;
//			for (j = 0; j<m; ++j)
//			{
//				if (haystack[i + j] != needle[j])    //两个指针需要一起前进，当不相等时，haystack在原来的基础上向后移动一格，needle重新开始比较
//				{
//					break;
//				}
//			}
//			if (j == m)
//				return i;
//		}
//		return -1;
//	}
//};
//该题思路：
//采用双指针法，也可以理解为暴力搜索法，时间复杂度为O(M*N)
//一个指针i控制haystack字符串，一个 指针j控制needle字符串，构成双层for循环，当字符不相等时，退出内层循环，外层控制的指针向后移动
//一步和子字符串重新比较，当j指针指向子字符串的结尾的后一个位置，说明已经比较完成，返回该下标。当目标串没有字串时，则返回1.



//leetcode：最长公共前缀
//题目描述：
//编写一个函数来查找字符串数组中的最长公共前缀。
//如果不存在公共前缀，返回空字符串 ""。
//方法一：
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		int n = strs.size();
//		if (n == 0)
//			return "";
//		if (n == 1)
//			return strs[0];
//		sort(strs.begin(), strs.end());
//		for (int i = 0; i<strs[0].size(); ++i)    //第一个字符串一定大于或等于其余字符串的个数
//		{
//			if (strs[0][i] != strs[n - 1][i])
//				return strs[0].substr(0, i);
//		}
//		return strs[0];                          //在循环中没有不等于的时候，说明第一个字符串为公共前缀
//	}
//};
//该方法思路：
//首先，假设有两个单词 "abcd"和"abcde"，那么在一本涵盖了所有字母排列的字典中，这两个单词之间的单词也一定有前缀"abcd"。于是，我们
//就只需要sort一遍数组，比较第一个字符串和最后一个字符串的公共前缀。
//方法二：巧用substr函数
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		string tmp = strs.size() ? strs[0] : "";
//		for (auto s : strs)
//		{
//			while (s.substr(0, tmp.size()) != tmp)
//			{
//				tmp = tmp.substr(0, tmp.size() - 1);
//				if (tmp == "")
//					return "";
//			}
//		}
//		return tmp;
//	}
//};
//该方法思路：
//3个字符串的最长公共前缀一定被包含在前2个字符串的最长公共前缀之中，同理，N个字符串的前缀一定是其中（N-1）个字符串的最长公共前
//缀与第N个字符串的最长公共前缀。所以当求出前两个字符串的最长公共前缀，则最终结构只会比该前缀短或者相等。
//因为是最长公共前缀，则我们采用从右向左的思想依次减一(巧用substr函数)。
//substr函数第一个参数是求子字符串的开始位置，第二个参数是子字符串的长度。



