//�Ϸ����������ж�
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
//				if (!a.empty())      //��ע������Ҫ�ж�ջ�Ƿ�Ϊ��
//				{
//					a.pop();
//				}
//			}
//			if (A[i] != '(' && A[i] != ')')   //�˴��ж��ַ��Ƿ�Ϊ'('��')',�ų��Ƿ��ַ�
//			{
//				return false;
//			}
//			i++;          //Ҫ��������ѭ���������������ס��һ��Ҫi++;
//		}
//		return a.empty();    //���ջΪ���򷵻�true
//	}
//};