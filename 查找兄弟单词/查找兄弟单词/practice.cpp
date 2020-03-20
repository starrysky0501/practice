//牛客：查找兄弟单词(查找)

//输入描述 :
//先输入字典中单词的个数n，再输入n个单词作为字典单词。
//再输入一个单词，查找其在字典中兄弟单词的个数m
//再输入数字k
//输出描述:
//根据输入，输出查找到的兄弟单词的个数m
//然后输出查找到的兄弟单词的第k个单词。

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool isbrother(string str1,string str2)
{
	if (str1 == str2)
		return false;
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	if (str1 == str2)
		return true;
	else
		return false;
}

int main()
{
	int num;
	while (cin >> num)
	{
		string word;
		vector<string> dic;
		for (int i = 0; i<num; ++i)
		{
			cin >> word;
			dic.push_back(word);
		}
		string bro, end;
		int index, count = 0;
		cin >> bro;
		cin >> index;
		sort(dic.begin(), dic.end());
		for (int i = 0; i<dic.size(); ++i)
		{
			if (isbrother(dic[i], bro))
			{
				count++;
				if (index == count)
					end = dic[i];
			}
		}
		cout << count << endl;
		if (count >= index)           //当兄弟单词的个数小于所要输出的下标时，则不进行输出，所以要进行判断
			cout << end << endl;
	}
	return 0;
}

//该题思路：
//首先，改题目坑点比较多，输出注意换行，并且进行边界判断
//将输入的单词存放在vector中，对vector进行字典排序，sort算法针对string的排序是字典排序(满足第二个输出条件),接着
//对vector中的数据进行遍历，判断是否满足兄弟单词(字符个数相等，起初不能相等，字符之间交换位置后相等)，判断的方法
//也成一个函数，先判断是否相等，不相等接着对两个字符串进行sort排序，之后如果相等，则为兄弟单词。用count记录兄弟单
//词的个数，当count与K相等时，则是所要查找的单词。
