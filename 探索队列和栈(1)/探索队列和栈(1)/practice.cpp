//leetcode�����ѭ������
//��Ŀ������
//������ѭ������ʵ�֡� ѭ��������һ���������ݽṹ����������ֻ��� FIFO���Ƚ��ȳ���ԭ���Ҷ�β�������ڶ���֮�����γ�һ��ѭ������Ҳ����Ϊ�����λ���������
//ѭ�����е�һ���ô������ǿ��������������֮ǰ�ù��Ŀռ䡣��һ����ͨ�����һ��һ���������ˣ����ǾͲ��ܲ�����һ��Ԫ�أ���ʹ�ڶ���ǰ�����пռ䡣����ʹ��ѭ�����У�������ʹ����Щ�ռ�ȥ�洢�µ�ֵ��
//���ʵ��Ӧ��֧�����²�����
//MyCircularQueue(k) : �����������ö��г���Ϊ k ��
//Front : �Ӷ��׻�ȡԪ�ء��������Ϊ�գ����� - 1 ��
//	Rear : ��ȡ��βԪ�ء��������Ϊ�գ����� - 1 ��
//		   enQueue(value) : ��ѭ�����в���һ��Ԫ�ء�����ɹ������򷵻��档
//		   deQueue() : ��ѭ��������ɾ��һ��Ԫ�ء�����ɹ�ɾ���򷵻��档
//		   isEmpty() : ���ѭ�������Ƿ�Ϊ�ա�
//		   isFull() : ���ѭ�������Ƿ�������
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
//����˼·��
//������������5��������һ�����飬һ��ͷ/βָ�룬һ����С/������
//����Ϊ�������Ĵ�С�����ܸı䣬�仯����size��
//�����Ҫ���Ƕ����Ƿ�������������Ҫ�ж��Ƿ����Ϊ�գ�ȡ��ͷ/��βʱ��Ҳ��Ҫ�ж϶����Ƿ�Ϊ�ա�
//������Ҫע�⣺head�ڵ�ָ����еĶ�ͷ��tailָ�����һ��Ԫ�صĺ�һ��λ�á�
//������Ѱ��ѭ�����е����һ��ֵʱ��������Ҫ�жϣ�tail�Ƿ�Ϊ0����Ϊ0ʱ�����ʾ���һ��Ԫ���Ƕ�βcapacity-1;��tailû��ָ��0ʱ����
//ֱ�Ӳ���tail-1��