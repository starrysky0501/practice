//leetcode：设计循环队列
//题目描述：
//设计你的循环队列实现。 循环队列是一种线性数据结构，其操作表现基于 FIFO（先进先出）原则并且队尾被连接在队首之后以形成一个循环。它也被称为“环形缓冲器”。
//循环队列的一个好处是我们可以利用这个队列之前用过的空间。在一个普通队列里，一旦一个队列满了，我们就不能插入下一个元素，即使在队列前面仍有空间。但是使用循环队列，我们能使用这些空间去存储新的值。
//你的实现应该支持如下操作：
//MyCircularQueue(k) : 构造器，设置队列长度为 k 。
//Front : 从队首获取元素。如果队列为空，返回 - 1 。
//	Rear : 获取队尾元素。如果队列为空，返回 - 1 。
//		   enQueue(value) : 向循环队列插入一个元素。如果成功插入则返回真。
//		   deQueue() : 从循环队列中删除一个元素。如果成功删除则返回真。
//		   isEmpty() : 检查循环队列是否为空。
//		   isFull() : 检查循环队列是否已满。
//
//class MyCircularQueue {
//private:
//	int *arr;
//	int size;
//	int capacity;
//	int head;
//	int tail;
//public:
//	/** Initialize your data structure here. Set the size of the queue to be k. */
//	MyCircularQueue(int k) {
//		arr = new int[k];
//		capacity = k;
//		head = tail = 0;
//		size = 0;
//	}
//
//	/** Insert an element into the circular queue. Return true if the operation is successful. */
//	bool enQueue(int value) {
//		if (isFull())
//		{
//			return false;
//		}
//		arr[tail] = value;
//		++tail;
//		if (tail == capacity)
//		{
//			tail = 0;
//		}
//		++size;
//		return true;
//	}
//
//	/** Delete an element from the circular queue. Return true if the operation is successful. */
//	bool deQueue() {
//		if (isEmpty())
//		{
//			return false;
//		}
//		++head;
//		if (head == capacity)
//		{
//			head = 0;
//		}
//		--size;
//		return true;
//	}
//
//	/** Get the front item from the queue. */
//	int Front() {
//		if (isEmpty())
//			return -1;
//		return arr[head];
//	}
//
//	/** Get the last item from the queue. */
//	int Rear() {
//		if (isEmpty())
//			return -1;
//		int index = tail - 1;
//		if (index<0)
//		{
//			index = capacity - 1;
//		}
//		return arr[index];
//	}
//
//	/** Checks whether the circular queue is empty or not. */
//	bool isEmpty() {
//		return size == 0;
//	}
//
//	/** Checks whether the circular queue is full or not. */
//	bool isFull() {
//		return size == capacity;
//	}
//};
//
///**
//* Your MyCircularQueue object will be instantiated and called as such:
//* MyCircularQueue* obj = new MyCircularQueue(k);
//* bool param_1 = obj->enQueue(value);
//* bool param_2 = obj->deQueue();
//* int param_3 = obj->Front();
//* int param_4 = obj->Rear();
//* bool param_5 = obj->isEmpty();
//* bool param_6 = obj->isFull();
//*/
//该题思路：
//首先我们设置5个变量，一个数组，一个头/尾指针，一个大小/容量。
//容量为这个数组的大小，不能改变，变化的是size。
//入队需要考虑队列是否已满，出队需要判断是否队列为空，取队头/队尾时，也需要判断队列是否为空。
//我们需要注意：head节点指向队列的对头，tail指向最后一个元素的后一个位置。
//当我们寻找循环队列的最后一个值时，我们需要判断，tail是否为0，当为0时，则表示最后一个元素是队尾capacity-1;当tail没有指向0时，则
//直接采用tail-1。