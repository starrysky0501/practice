//c++ʵ����Сջ
class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		st.push(x);
		if (min.empty() || x <= min.top())
		{
			min.push(x);
		}
	}

	void pop() {
		if (st.top() == min.top())
		{
			min.pop();
		}
		st.pop();
	}

	int top() {
		return st.top();
	}

	int getMin() {
		return min.top();
	}

	stack<int> st;
	stack<int> min;
};

//����˼·����Ҫ����ջ��һ������ͨջ��һ������Сջ����ʵ��push����ʱ����ͨջֱ�ӽ��룬��Сջ�洢���ǵ�ǰ����Ԫ�ص���Сֵ�����Ե�
//         push��xֵ��С�ڵ��ڣ���Сջ��topֵʱ������minջ��ע��Ҫ���ǵ�minջΪ��ʱ��ȡtopֵ�����������Ҫ�пգ�ģ��ʵ�ֳ�ջʱ��
//         stһ�����ջ����min��ջ��Ԫ�ص���st��ջ��Ԫ��ʱ��Ҫ��֤minջ��Ԫ�س�ջ����Ϊ��Сֵ�Ѿ���stջ��
