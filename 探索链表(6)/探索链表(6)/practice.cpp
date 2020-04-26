//leetcode:设计链表

//题目描述：
//设计链表的实现。您可以选择使用单链表或双链表。单链表中的节点应该具有两个属性：val 和 next。val 是当前节点的值，next 是指向下一个节点的指针 / 引用。如果要使用双向链表，则还需要一个属性 prev 以指示链表中的上一个节点。假设链表中的所有节点都是 0 - index 的。
//在链表类中实现这些功能：
//get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回 - 1。
//addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
//addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
//addAtIndex(index, val)：在链表中的第 index 个节点之前添加值为 val  的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
//deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。

//class MyLinkedList {
//private:
//	struct ListNode
//	{
//		int val;
//		ListNode *prev, *next;
//		ListNode(int x) :val(x), prev(nullptr), next(nullptr){}
//	};
//private:
//	ListNode *head, *tail;          //对于该题，加上tail指针更加方便
//	int size;
//public:
//	/** 对链表进行初始化 */
//	MyLinkedList()
//		:size(0), head(nullptr), tail(nullptr){}
//
//	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
//	int get(int index) {
//		int i = 0;
//		ListNode *p = head;
//		while (p && i<index)
//		{
//			p = p->next;
//			i++;
//		}
//		if (p)
//			return p->val;
//		else
//			return -1;
//	}
//
//	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
//	void addAtHead(int val) {           //分类讨论：当前链表是否存在节点，当head==NULL，则表示链表为空。
//		if (head)
//		{
//			ListNode *node = new ListNode(val);
//			node->next = head;
//			head->prev = node;
//			head = node;
//		}
//		else
//		{
//			head = new ListNode(val);
//			tail = head;
//		}
//		++size;
//	}
//
//	/** Append a node of value val to the last element of the linked list. */
//	void addAtTail(int val) {                       //分类讨论：当前链表是否存在节点，当tail为NULL，则表示该链表为NULL。
//		if (tail)
//		{
//			ListNode *node = new ListNode(val);
//			node->prev = tail;
//			tail->next = node;
//			tail = node;
//		}
//		else
//		{
//			tail = new ListNode(val);
//			head = tail;
//		}
//		++size;
//	}
//
//	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
//	void addAtIndex(int index, int val) {
//		if (index <= 0)      //根据题目要求，先写出3个满足要求的if条件
//		{
//			addAtHead(val);
//			return;
//		}
//		if (index == size)
//		{
//			addAtTail(val);
//			return;
//		}
//		if (index>size)
//		{
//			return;
//		}
//		int i = 0;
//		ListNode *p = nullptr;             //定义两个指针，一个标记要添加的位置,一个标记该位置的前一个位置
//		ListNode *cur = head;
//		while (cur && i<index)             //在链表的(除头和尾)某个位置插入
//		{
//			p = cur;
//			cur = cur->next;
//			i++;
//		}
//		ListNode *node = new ListNode(val);
//		p->next = node;
//		node->prev = p;
//		node->next = cur;
//		cur->prev = node;
//		size++;
//	}
//
//	/** Delete the index-th node in the linked list, if the index is valid. */
//	void deleteAtIndex(int index) {        //分类讨论：当删除为头节点时(还有讨论是有1个还是多个节点)，当删除为尾节点时，当删除中间节点时。
//		if (!head)
//			return;
//		if (index == 0)
//		{
//			ListNode *del = head;
//			head = head->next;
//			if (head)   //该链表有1个节点，还是多个节点
//			{
//				head->prev = nullptr;    // 删除节点时，需要将改变后的head的prev指向nullptr。当添加节点时不需要，创建节点时会初始化。
//			}
//			else
//			{
//				tail = nullptr;
//			}
//			delete del;
//			size--;
//			return;
//		}
//		if (index == size - 1)   //走到此处，节点的个数大于等于2
//		{
//			ListNode *del = tail;
//			tail = tail->prev;
//			tail->next = nullptr;
//			delete del;
//			size--;
//			return;
//		}
//		ListNode *cur = head;
//		ListNode *p = nullptr;
//		int i = 0;
//		while (cur && i<index)  //处理链表中间的节点
//		{
//			p = cur;
//			cur = cur->next;
//			i++;
//		}
//		if (cur && i == index)
//		{
//			ListNode *del = cur;
//			p->next = cur->next;
//			cur->next->prev = p;   //不用讨论cur->next是否存在，因为当删除最后一个节点时，在上一个if条件中已经处理
//			delete del;
//			size--;
//			return;
//		}
//	}
//};
////注：双链表的任意位置添加元素或者删除元素，一定要定义双指针，一前一后。当只写一个时，虽然逻辑正确，但代码并不能编过。
///**
//* Your MyLinkedList object will be instantiated and called as such:
//* MyLinkedList* obj = new MyLinkedList();
//* int param_1 = obj->get(index);
//* obj->addAtHead(val);
//* obj->addAtTail(val);
//* obj->addAtIndex(index,val);
//* obj->deleteAtIndex(index);
//*/