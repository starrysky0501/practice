//合法括号序列判断
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n)
//	{
//		stack<char> a;
//		int i = 0;
//		while (i<n)
//		{
//			if (A[i] == '(')
//			{
//				a.push(A[i]);
//			}
//			if (A[i] == ')')
//			{
//				if (!a.empty())      //请注意这里要判断栈是否为空
//				{
//					a.pop();
//				}
//			}
//			if (A[i] != '(' && A[i] != ')')   //此处判断字符是否为'('和')',排除非法字符
//			{
//				return false;
//			}
//			i++;          //要想让整个循环运作起来，请记住，一定要i++;
//		}
//		return a.empty();    //如果栈为空则返回true
//	}
//};