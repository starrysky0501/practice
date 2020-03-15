//栈的应用：后缀表达式

//题目描述:
//Emacs号称神的编辑器，它自带了一个计算器。与其他计算器不同，它是基于后缀表达式的，即运算符在操作数的后面。
//例如“2 3 + ”等价于中缀表达式的“2 + 3”。请你实现一个后缀表达式的计算器。
//输入描述 :
//输入包含多组数据。
//每组数据包括两行：第一行是一个正整数n(3≤n≤50)；紧接着第二行包含n个由数值和运算符组成的列表。
//“ + -*/ ”分别为加减乘除四则运算，其中除法为整除，即“5 / 3 = 1”。
//输出描述 :
//对应每一组数据，输出它们的运算结果。

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int n;
	stack<int> st;
	while (cin >> n)
	{
		getchar();
		for (int i = 0; i<n; ++i)
		{
			string str;      //当数字大于等于10，不可以用char表示
			cin >> str;
			if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')   
			{
				int right = st.top();
				st.pop();
				int left = st.top();
				st.pop();
				int num;
				if (str[0] == '+')
				{
					num = left + right;
				}
				if (str[0] == '-')
				{
					num = left - right;
				}
				if (str[0] == '*')
				{
					num = left*right;
				}
				if (str[0] == '/')
				{
					if (right != 0)
					{
						num = left / right;
					}
					else
					{
						return 0;
					}

				}
				st.push(num);
			}
			else
			{
				st.push(atoi(str.c_str()));
			}
		}
		cout << st.top() << endl;
	}
	return 0;
}

//该题思路：
//这个是求后缀表达式，是典型的栈的应用,用栈存储每次计算的结果，以及数字
//从第一个字符开始扫描，碰到数字入栈，碰到运算符则连续出两个数，第一个是运算符后面的数字，第二个是左边的数字。计算
//得到结果后，将结果入栈，接着扫描。最后栈中仅可能剩一个数字，就是运算的结果.

//知识点补充：
//atoi函数：
//C 库函数 int atoi(const char *str) 把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。
//函数声明：
//int atoi(const char *str)
//参数：
//str -- 要转换为整数的字符串。
//返回值：
//该函数返回转换后的长整数，如果没有执行有效的转换，则返回零。(如果字符串不全部是数字，则转换时返回0)