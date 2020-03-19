//骆驼命名法

//题目描述
//从C / C++转到Java的程序员，一开始最不习惯的就是变量命名方式的改变。C语言风格使用下划线分隔多个单词，
//例如“hello_world”；而Java则采用一种叫骆驼命名法的规则：除首个单词以外，所有单词的首字母大写，例如
//“helloWorld”。请你帮可怜的程序员们自动转换变量名。
//输入描述 :
//输入包含多组数据。
//每组数据一行，包含一个C语言风格的变量名。每个变量名长度不超过100。
//输出描述 :
//对应每一组数据，输出变量名相应的骆驼命名法。

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	string cpp;
	while (cin >> cpp)
	{
		for (int i = 0; i<cpp.size(); ++i)
		{
			if (cpp[i] == '_')
			{
				cpp.erase(cpp.begin() + i);
				cpp[i] = toupper(cpp[i]);
			}
		}
		cout << cpp << endl;
		cpp.erase(cpp.begin(), cpp.end() - 1);//cpp.erase(0);
	}
	return 0;
}

//知识点回顾：
//string的erase用法：
//erase函数的原型如下：
//（1）string& erase(size_t pos = 0, size_t n = npos);
//（2）iterator erase(iterator position);
//（3）iterator erase(iterator first, iterator last);
//也就是说有三种用法：
//（1）erase(pos, n); 删除从pos开始的n个字符，比如erase(0, 1)就是删除第一个字符
//（2）erase(position); 删除position处的一个字符(position是个string类型的迭代器)
//（3）erase(first, last); 删除从first到last之间的字符（first和last都是迭代器，等于first和last）
//补充：
//例如;s.erase(13);//从索引13开始往后全删除 
//s.erase(7,5);//从索引7开始往后删5个

//#include<ctype.h>
//C 库函数 int toupper(int c) 把小写字母转换为大写字母。
//如果 c 有相对应的大写字母，则该函数返回 c 的大写字母，否则 c 保持不变。返回值是一个可被隐式转换为 char 类型的 int 值。
//C 库函数 int tolower(int c) 把给定的字母转换为小写字母。
//如果 c 有相对应的小写字母，则该函数返回 c 的小写字母，否则 c 保持不变。返回值是一个可被隐式转换为 char 类型的 int 值。
//C 库函数 int islower(int c) 检查所传的字符是否是小写字母。   
//如果 c 是一个小写字母，则该函数返回非零值（true），否则返回 0（false）。
//C 库函数 int isupper(int c) 检查所传的字符是否是大写字母。
//如果 c 是一个大写字母，则该函数返回非零值（true），否则返回 0（false）。
//C 库函数 void isalpha(int c) 检查所传的字符是否是字母。
//C 库函数 void isdigit(int c) 检查所传的字符是否是十进制数字字符。十进制数字是：0 1 2 3 4 5 6 7 8 9
