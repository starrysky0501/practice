//class MyQueue {
//public:
//	/** Initialize your data structure here. */
//	stack<int> a;
//	stack<int> b;
//	MyQueue() {
//
//	}
//
//	/** Push element x to the back of queue. */
//	void push(int x) {
//		a.push(x);
//	}
//
//	/** Removes the element from in front of queue and returns that element. */
//	int pop() {
//		int len;
//		len = a.size();
//		for (int i = 0; i<len; i++)
//		{
//			b.push(a.top());
//			a.pop();
//		}
//		int cur;
//		cur = b.top();
//		b.pop();
//		for (int j = 0; j<len - 1; j++)
//		{
//			a.push(b.top());
//			b.pop();
//		}
//		return cur;
//	}
//
//	/** Get the front element. */
//	int peek() {
//		int len;
//		len = a.size();
//		for (int i = 0; i<len; i++)
//		{
//			b.push(a.top());
//			a.pop();
//		}
//		int cur;
//		cur = b.top();
//		for (int j = 0; j<len; j++)
//		{
//			a.push(b.top());
//			b.pop();
//		}
//		return cur;
//	}
//
//	/** Returns whether the queue is empty. */
//	bool empty() {
//		return a.empty() && b.empty();
//	}
//};

//该题思路：通过b栈将原a栈的数据倒置，此时栈的top就是队列的peek。操作完后还应再把b栈的内容换回a栈，这样当在
//         push数据进栈的时候顺序才能正确