//牛客：mkdir

//题目描述：
//工作中，每当要部署一台新机器的时候，就意味着有一堆目录需要创建。例如要创建目录“ / usr / local / bin”，就需要
//此次创建“ / usr”、“ / usr / local”以及“ / usr / local / bin”。好在，Linux下mkdir提供了强大的“ - p”选项，
//只要一条命令“mkdir - p / usr / local / bin”就能自动创建需要的上级目录。
//现在给你一些需要创建的文件夹目录，请你帮忙生成相应的“mkdir - p”命令。
//输入描述 :
//输入包含多组数据。
//每组数据第一行为一个正整数n(1≤n≤1024)。
//紧接着n行，每行包含一个待创建的目录名，目录名仅由数字和字母组成，长度不超过200个字符。
//输出描述 :
//对应每一组数据，输出相应的、按照字典顺序排序的“mkdir - p”命令。
//每组数据之后输出一个空行作为分隔。

//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		set<string> dir;
//		string temp;
//		for (int i = 0; i<num; ++i)
//		{
//			cin >> temp;
//			dir.insert(temp);
//		}
//		for (auto it = dir.begin(); it != (--dir.end()); ++it)   //由于下面会有it,++以后的解引用，则it不能等于最后一个元素
//		{
//			auto i = it++;         //it和i两个变量定义set集合中前后相邻的两个目录
//			auto pos = (*it).find(*i);
//			if (pos == string::npos || pos != 0 || (*it)[(*i).size()] != '\/')
//			{
//				cout << "mkdir -p " << *i << endl;
//			}
//			it = i;   //将it变回之前的位置
//		}
//		cout << "mkdir -p " << *(--dir.end()) << endl;   //无论何种情况，最后一个一定会输出
//		cout << endl;
//	}
//	return 0;
//}

//该题思路：
//该题充分利用set集合的特性，自动对元素排序。
//例如对于string排序结果：a<ab<abc<bcd，则可以看到对于该题，目录包含与被包含之间的关系一定是被包含在前，包含在后.
//利用两个变量控制set集合前后相邻的两个目录,判断后一个元素是否包含前一个元素；记住判断完毕后一定要将it变回之前的位置.

//set会对集合中的元素排序，下面是int类型和string类型的排序结果的测试：
//#include <iostream>
//#include<string>
//#include <set>
//#include<stdlib.h>
//using namespace std;
//
//int main()
//{
//	set<int> st;
//	set<int>::iterator it;
//	st.insert(11);
//	st.insert(122);
//	st.insert(13);
//	st.insert(1);
//	for (it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	set<string> st1;
//	set<string>::iterator it1;
//	st1.insert("abc");
//	st1.insert("bca");
//	st1.insert("ab");
//	st1.insert("a");
//	for (it1 = st1.begin(); it1 != st1.end(); it1++)
//	{
//		cout<<*it1 << endl;
//	}
//	system("pause");
//	return 0;
//}