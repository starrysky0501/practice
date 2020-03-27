//牛客：剪花布条

//题目描述:
//一块花布条，里面有些图案，另有一块直接可用的小饰条，里面也有一些图案。对于给定的花布条和小饰条，计算一下能从花
//布条中尽可能剪出几块小饰条来呢？
//输入描述 :
//输入包含多组数据。
//每组数据包含两个字符串s, t，分别是成对出现的花布条和小饰条，其布条都是用可见ASCII字符表示的，可见的ASCII字符有多少个，布条的花纹也有多少种花样。花纹条和小饰条不会超过1000个字符长。
//输出描述 :
//对应每组输入，输出能从花纹布中剪出的最多小饰条个数，如果一块都没有，那就输出0，每个结果占一行。

//#include<iostream>
//#include<stdlib.h>
//#include<string>
//using namespace std;
//int main()
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		int i = 0;
//		int sum = 0;
//		while (i<str1.size())
//		{
//			if (str1.substr(i, str2.size()) == str2)   //c++中的string字符串可以直接比较是否相等
//			{
//				i += str2.size();
//				sum++;
//			}
//			else
//			{
//				i++;
//			}
//		}
//		cout << sum << endl;
//	}
//	system("pause");
//	return 0;
//}

//该题思路：
//考察字符串的查找
//首先需明白string创建的字符串可以直接比较是否相等
//其次需要了解string的substr函数的用法：
//1.用途：一种构造string的方法
//2.形式：s.substr(pos, n)
//3.解释：返回一个string，包含s中从pos开始的n个字符的拷贝（pos的默认值是0，n的默认值是s.size() - pos，
//即不加参数会默认拷贝整个s）
//4.补充：若pos的值超过了string的大小，则substr函数会抛出一个out_of_range异常；若pos + n的值超过了string
//的大小，则substr会调整n的值，只拷贝到string的末尾


