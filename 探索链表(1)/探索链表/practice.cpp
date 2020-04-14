//leetcode：设计链表
//题目描述：
//设计链表的实现。您可以选择使用单链表或双链表。单链表中的节点应该具有两个属性：val 和 next。val 是当前节点的值，next 是指向下一个节点的指针 / 引用。如果要使用双向链表，则还需要一个属性 prev 以指示链表中的上一个节点。假设链表中的所有节点都是 0 - index 的。
//在链表类中实现这些功能：
//get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回 - 1。
//addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
//addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
//addAtIndex(index, val)：在链表中的第 index 个节点之前添加值为 val  的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
//deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。
//
//class MyLinkedList {
//private:
//	struct ListNode
//	{
//		int val;
//		ListNode * next;
//		ListNode(int val) :val(val), next(nullptr){}
//	};
//	ListNode *head;
//public:
//	/** Initialize your data structure here. */
//	MyLinkedList() {
//		head = nullptr;
//	}
//
//	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
//	int get(int index) {          //下标不存在，直接返回
//		if (index<0)
//			return -1;
//		ListNode *p = head;
//		int i = 0;   //计数器
//		while (p && i<index)      //找到index对应的位置，返回对应的值
//		{
//			p = p->next;
//			i++;
//		}
//		if (p)
//		{
//			return p->val;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//
//	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
//	void addAtHead(int val) {                   //不用分类讨论
//		ListNode * node = new ListNode(val);
//		node->next = head;
//		head = node;
//	}
//
//	/** Append a node of value val to the last element of the linked list. */
//	void addAtTail(int val) {                  //分类讨论，头节点是否存在。(因为在循环中判断的是p->next，会出现解引用，当只有一个元素，则会解引用失败报错）
//		ListNode * node = new ListNode(val);
//		if (head == nullptr)
//		{
//			head = node;
//		}
//		else
//		{
//			ListNode * p = head;
//			while (p->next)      //寻找链表最后一个节点
//			{
//				p = p->next;
//			}
//			p->next = node;
//		}
//	}
//
//	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
//	void addAtIndex(int index, int val) {            //在某个位置的前面增加一个元素,所以我们要找寻这个位置的前一个元素
//		ListNode *node = new ListNode(val);
//		if (index <= 0)        //题目给出该条件
//		{
//			node->next = head;
//			head = node;
//			return;
//		}
//		int i = 0;
//		ListNode *p = head;
//		while (p && i<index - 1)      //写到这里可以发现，遍历链表，需要循环和判断以及计数器配合使用
//		{
//			p = p->next;
//			i++;
//		}
//		if (p)
//		{
//			node->next = p->next;
//			p->next = node;
//		}
//	}
//
//	/** Delete the index-th node in the linked list, if the index is valid. */
//	void deleteAtIndex(int index) {                 //分类讨论：删除头还是其他位置
//		ListNode *p = head;
//		if (index == 0 && head != nullptr)
//		{
//			head = head->next;
//			delete p;
//			return;
//		}
//		int i = 0;
//		while (p && i<index - 1)  //跳出这个循环有两种可能,p不存在,等于indx-1时  
//		{
//			p = p->next;
//			i++;
//		}
//		if (!p)  //下面会对p解引用
//			return;
//		if (p->next)    //会对p->next解引用
//		{
//			ListNode *del = p->next;
//			p->next = del->next;
//			delete del;
//		}
//	}
//};
//
///**
//* Your MyLinkedList object will be instantiated and called as such:
//* MyLinkedList* obj = new MyLinkedList();
//* int param_1 = obj->get(index);
//* obj->addAtHead(val);
//* obj->addAtTail(val);
//* obj->addAtIndex(index,val);
//* obj->deleteAtIndex(index);
//*/
//该题思路：
//该题就是链表的基础，有关增加或者删除一个下标，注意有的情况需要判断是否存在头节点。改代码写的是不带头，单向，不循环的链表。