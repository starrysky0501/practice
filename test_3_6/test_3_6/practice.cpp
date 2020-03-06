//牛客：收件人列表

//题目描述
//NowCoder每天要给许多客户写电子邮件。正如你所知，如果一封邮件中包含多个收件人，收件人姓名之间会用一个逗号和空格隔
//开；如果收件人姓名也包含空格或逗号，则姓名需要用双引号包含。现在给你一组收件人姓名，请你帮他生成相应的收件人列表。
//输入描述 :
//输入包含多组数据。
//每组数据的第一行是一个整数n(1≤n≤128)，表示后面有n个姓名。
//紧接着n行，每一行包含一个收件人的姓名。姓名长度不超过16个字符。
//输出描述 :
//对应每一组输入，输出一行收件人列表。

//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		getchar();       //cin.get()也可以
//		while (n--)
//		{
//			string str;
//			getline(cin, str);
//			if (str.find(',') != str.npos || str.find(' ') != str.npos)
//			{
//				str.insert(str.begin(), '"');
//				str.insert(str.end(), '"');
//			}
//
//			if (n>0)
//			{
//				cout << str << ", ";
//			}
//			else
//			{
//				cout << str << endl;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//该题思路：
//采用string中的函数find和insert函数结合使用。
//1.用find函数查找字符串中是否含有逗号和空格，如果字符串中没有对应的字符，则会返回npos(-1)，反之，使用insert函数
//在指定的位置插入指定的字符。
//2.还需注意接收方需将名字用逗号和空格隔开


//知识点：
//1.string的find函数：
//int find(char c, int pos = 0) const;//从pos开始查找字符c在当前字符串的位置
//int find(const char *s, int pos = 0) const;//从pos开始查找字符串s在当前串中的位置
//int find(const char *s, int pos, int n) const;//从pos开始查找字符串s中前n个字符在当前串中的位置
//int find(const string &s, int pos = 0) const;//从pos开始查找字符串s在当前串中的位置
//查找成功时返回所在位置，失败返回string::npos的值 
//2.string的insert函数：
//iterator insert(iterator it, char c);//在it处插入字符c，返回插入后迭代器的位置
//void insert(iterator it, const_iterator first, const_iterator last);//在it处插入从first开始至last-1的所有字符
//string &insert(int p0, const char *s); ——在p0位置插入字符串s
//string &insert(int p0, const char *s, int n); ——在p0位置插入字符串s的前n个字符
//string &insert(int p0, const string &s); ——在p0位置插入字符串s
//string &insert(int p0, const string &s, int pos, int n); ——在p0位置插入字符串s从pos开始的连续n个字符
//string &insert(int p0, int n, char c);//在p0处插入n个字符c
//3.cin对象中的getline和get函数的区别：
//在读取字符串上的区别：getline遇到换行符结束并抛弃，而get遇到换行符结束，但并不抛弃换行符，留在缓存中
//getline：cin.getline(数组名，字符个数)---实际读取(字符个数-1)个,最后一个自动补'\0'
//		   getline(cin,数组名)
//get：cin.get()---读取一个字符，吸收换行符
//	   char c;   c=cin.get()  /  cin.get(c)
//	   cin.get(数组名，字符个数)




//由于我感觉第一个方法运行打印出来的结果不规范，所以我准备在第一种方法基础之上修改
//#include<iostream>
//#include<string>
//#include<vector>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<string> out;
//		cin.get();
//		while (n--)
//		{
//			string str;
//			getline(cin, str);
//			if (str.find(',') != str.npos || str.find(' ') != str.npos)
//			{
//				str.insert(str.begin(), '"');
//				str.insert(str.end(), '"');
//			}
//
//			if (n>0)
//			{
//				str += ", ";
//				out.push_back(str);
//			}
//			else
//			{
//				out.push_back(str);
//			}
//		}
//		for (int i = 0; i<out.size(); ++i)
//		{
//			cout << out[i];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}