//逆波兰表达式求值：
//该题思路：该题直接给的是后缀表达式。定义一个栈，遍历数组中的字符串，遇到数字，入栈，遇到加减乘除符号，将栈顶元素弹出，连续
//出两个第一个为右操作数，第二个是做操作数，千万别整反。然后将计算的值继续压入栈中。直到数组遍历完，则栈顶元素的值就是表达式的
//值。注意：此代码应用了atoi函数，应先将string类型转化成为c风格的字符串，之后依次将字符转化为数字。

//class Solution {
//public:
//	int evalRPN(vector<string>& tokens) {    //用string存储，是因为有的操作数不止一个字符。
//		stack<int> st;
//		for (const auto& str : tokens)
//		{
//			if (str == "+" || str == "-" || str == "*" || str == "/")
//			{
//				int right = st.top();
//				st.pop();
//				int left = st.top();
//				st.pop();
//				switch (str[0])      //此处计算的操作符字符的个数只可能一个，所以取数组中的第一个元素
//				{
//				case '+':
//					st.push(left + right);
//					break;
//				case '-':
//					st.push(left - right);
//					break;
//				case '*':
//					st.push(left*right);
//					break;
//				case '/':
//					st.push(left / right);
//					break;
//				}
//			}
//			else
//			{
//				st.push(atoi(str.c_str()));
//			}
//		}
//		return st.top();
//	}
//};

//栈的压入，弹出序列：
//class Solution {
//public:
//	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//		int pushIndex = 0;
//		int popIndex = 0;
//		stack<int> st;
//		while (pushIndex<pushV.size())
//		{
//			st.push(pushV[pushIndex++]);
//			while (!st.empty())
//			{
//				if (st.top() == popV[popIndex])
//				{
//					st.pop();
//					popIndex++;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		return (st.empty());
//	}
//};

//该题思路：定义一个栈，保存元素的进栈出栈顺序；设置两个指针，分别指向压入数组和弹出数组的首元素
//起初先进栈，然后比较栈的栈顶元素是否和出栈下标所在的元素相同，相同则出栈，否则进栈，跳出此循环过程的
//程的条件是栈是否为空。接着继续判断压入数组是否走到元素末尾，走完压入数组则整体结束；最后利用栈中
//是否有元素做返回值。