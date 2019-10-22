//c++实现最小栈
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

//该题思路：需要两个栈，一个是普通栈，一个是最小栈，当实现push功能时，普通栈直接进入，最小栈存储的是当前所有元素的最小值，所以当
//         push的x值（小于等于）最小栈的top值时，则入min栈，注意要考虑到min栈为空时，取top值会崩溃，所以要判空；模拟实现出栈时，
//         st一定会出栈，当min的栈顶元素等于st的栈顶元素时，要保证min栈顶元素出栈，因为最小值已经出st栈。
