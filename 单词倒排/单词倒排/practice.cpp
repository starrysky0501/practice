//牛客：单词倒排

//题目描述
//对字符串中的所有单词进行倒排。
//说明：
//1、每个单词是以26个大写或小写英文字母构成；
//2、非构成单词的字符均视为单词间隔符；
//3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
//4、每个单词最长20个字母；
//输入描述 :
//输入一行以空格来分隔的句子
//输出描述 :
//输出句子的逆序

#include<iostream>
#include<vector>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		vector<string> word;
		string tmp;
		for (int i = 0; i<str.size(); ++i)
		{
			if (isupper(str[i]) || islower(str[i]))   
			{
				tmp += str[i];
			}
			else
			{
				if (tmp.size()>0)
				{
					word.push_back(tmp);
					tmp = "";
				}
			}
		}
		if (tmp.size()>0)
		{
			word.push_back(tmp);
			//tmp="";
		}
		for (int i = word.size() - 1; i>0; --i)
		{
			cout << word[i] << " ";
		}
		cout << word[0] << endl;
	}
	return 0;
}

//该题思路：
//利用vector<string>将每一个单词存储起来，最后逆序输出。
//遍历输入的语句时，当为满足要求的字母，则补充到tmp字符串后；否则，则说明遇到分隔符，当tmp字符串的长度大于0，将
//该单词push_back到vector中，当长度=0时，有可能是输入句子的开头就碰到分隔符，则不做处理；也有可能:题目有说，有
//可能会遇到连续的间隔符，则当遇到第一个间隔符，就插入单词，tmp置空，接连第二次为间隔符时，但tmp已为空，则不做处理。

//知识点补充：
//vector的clear函数：
//clear（）函数的调用方式是，vector<datatype> temp（50）;
//定义了50个datatype大小的空间。temp.clear();
//作用：将会清空temp中的所有元素，包括temp开辟的空间（size），但是capacity会保留，即不可以以temp[1]这种形式赋初值，
//只能通过temp.push_back(value)的形式赋初值。
//调用clear之后, vector的尺寸(size)将变成zero. 但它的容量(capacity)却并不发生变化, vector本身并不释放任何内存.