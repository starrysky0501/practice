//�沨�����ʽ��ֵ��
//����˼·������ֱ�Ӹ����Ǻ�׺���ʽ������һ��ջ�����������е��ַ������������֣���ջ�������Ӽ��˳����ţ���ջ��Ԫ�ص���������
//��������һ��Ϊ�Ҳ��������ڶ���������������ǧ���������Ȼ�󽫼����ֵ����ѹ��ջ�С�ֱ����������꣬��ջ��Ԫ�ص�ֵ���Ǳ��ʽ��
//ֵ��ע�⣺�˴���Ӧ����atoi������Ӧ�Ƚ�string����ת����Ϊc�����ַ�����֮�����ν��ַ�ת��Ϊ���֡�

//class Solution {
//public:
//	int evalRPN(vector<string>& tokens) {    //��string�洢������Ϊ�еĲ�������ֹһ���ַ���
//		stack<int> st;
//		for (const auto& str : tokens)
//		{
//			if (str == "+" || str == "-" || str == "*" || str == "/")
//			{
//				int right = st.top();
//				st.pop();
//				int left = st.top();
//				st.pop();
//				switch (str[0])      //�˴�����Ĳ������ַ��ĸ���ֻ����һ��������ȡ�����еĵ�һ��Ԫ��
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

//ջ��ѹ�룬�������У�
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

//����˼·������һ��ջ������Ԫ�صĽ�ջ��ջ˳����������ָ�룬�ֱ�ָ��ѹ������͵����������Ԫ��
//����Ƚ�ջ��Ȼ��Ƚ�ջ��ջ��Ԫ���Ƿ�ͳ�ջ�±����ڵ�Ԫ����ͬ����ͬ���ջ�������ջ��������ѭ�����̵�
//�̵�������ջ�Ƿ�Ϊ�ա����ż����ж�ѹ�������Ƿ��ߵ�Ԫ��ĩβ������ѹ������������������������ջ��
//�Ƿ���Ԫ��������ֵ��