//牛客：抄送列表

//题目描述：
//NowCoder每天要处理许多邮件，但他并不是在收件人列表中，有时候只是被抄送。他认为这些抄送的邮件重要性比自己在收件人
//列表里的邮件低，因此他要过滤掉这些次要的邮件，优先处理重要的邮件。现在给你一串抄送列表，请你判断目标用户是否在抄
//送列表中。
//输入描述 :
//输入有多组数据，每组数据有两行。
//第一行抄送列表，姓名之间用一个逗号隔开。如果姓名中包含空格或逗号，则姓名包含在双引号里。总长度不超过512个字符。
//第二行只包含一个姓名，是待查找的用户的名字（姓名要完全匹配）。长度不超过16个字符。
//输出描述 :
//如果第二行的名字出现在收件人列表中，则输出“Ignore”，表示这封邮件不重要；否则，输出“Important!”，表示这封邮件
//需要被优先处理。

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string names;
//	while (getline(cin, names))
//	{
//		int pos = 0;   //标记位置
//		vector<string> list;
//		while (pos<names.size())
//		{
//			if (names[pos] == '\"')   //名字中逗号或空格的   
//			{
//				size_t end = names.find('\"', pos + 1);
//				list.push_back(names.substr(pos + 1, end - pos - 1));
//				pos = end + 2;   //跳过双引号和逗号，此处，是end+2，而不是+=2。当目标姓名为空字符串时，+=2会出现问题
//			}
//			else   //名字中没有逗号和空格的
//			{
//				size_t end = names.find(',', pos);
//				if (end == names.npos)   //没找到逗号，说明到字符串结尾了
//				{
//					list.push_back(names.substr(pos, end - pos));
//					break;
//				}
//				else   //找到逗号，未到字符串结尾
//				{
//					list.push_back(names.substr(pos, end - pos));
//					pos = end + 1;   //跳过逗号
//				}
//			}
//		}
//		string name;
//		getline(cin, name);
//		if (list.end() == find(list.begin(), list.end(), name))
//		{
//			cout << "Important!" << endl;   //没找到
//		}
//		else
//		{
//			cout << "Ignore" << endl;   //找到了
//		}
//	}
//}

//该题思路：
//判断抄送列表中是否含有目标姓名，应先将抄送列表中的一个个名字分割，并剥离双引号放入字符串数组中
//结合string的find函数和substr函数，最后输入姓名，和数组中的姓名进行比对。
//1.输入抄送列表，用while循环控制是否到达字符串结尾
//2.抄送列表中有两种情况，第一：用双引号引起来的名字；第二名字没有双引号引起来
//3.还需在第二点基础上讨论是否到达字符串结尾，双引号的名字无需讨论；则需要在没有双引号的版块讨论是否有逗号，如果
//  有，则未结束，如果没有，则到达结尾。
//4.由于vector没有find函数，则采用find算法 
//  find(起始位置，终止位置，查找的字符串)---返回一个迭代器，如果找到，则返回下标位置，如果没有，则返回end位置

