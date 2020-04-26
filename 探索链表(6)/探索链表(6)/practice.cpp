//leetcode:�������

//��Ŀ������
//��������ʵ�֡�������ѡ��ʹ�õ������˫�����������еĽڵ�Ӧ�þ����������ԣ�val �� next��val �ǵ�ǰ�ڵ��ֵ��next ��ָ����һ���ڵ��ָ�� / ���á����Ҫʹ��˫����������Ҫһ������ prev ��ָʾ�����е���һ���ڵ㡣���������е����нڵ㶼�� 0 - index �ġ�
//����������ʵ����Щ���ܣ�
//get(index)����ȡ�����е� index ���ڵ��ֵ�����������Ч���򷵻� - 1��
//addAtHead(val)��������ĵ�һ��Ԫ��֮ǰ���һ��ֵΪ val �Ľڵ㡣������½ڵ㽫��Ϊ����ĵ�һ���ڵ㡣
//addAtTail(val)����ֵΪ val �Ľڵ�׷�ӵ���������һ��Ԫ�ء�
//addAtIndex(index, val)���������еĵ� index ���ڵ�֮ǰ���ֵΪ val  �Ľڵ㡣��� index ��������ĳ��ȣ���ýڵ㽫���ӵ������ĩβ����� index ���������ȣ��򲻻����ڵ㡣���indexС��0������ͷ������ڵ㡣
//deleteAtIndex(index)��������� index ��Ч����ɾ�������еĵ� index ���ڵ㡣

//class MyLinkedList {
//private:
//	struct ListNode
//	{
//		int val;
//		ListNode *prev, *next;
//		ListNode(int x) :val(x), prev(nullptr), next(nullptr){}
//	};
//private:
//	ListNode *head, *tail;          //���ڸ��⣬����tailָ����ӷ���
//	int size;
//public:
//	/** ��������г�ʼ�� */
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
//	void addAtHead(int val) {           //�������ۣ���ǰ�����Ƿ���ڽڵ㣬��head==NULL�����ʾ����Ϊ�ա�
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
//	void addAtTail(int val) {                       //�������ۣ���ǰ�����Ƿ���ڽڵ㣬��tailΪNULL�����ʾ������ΪNULL��
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
//		if (index <= 0)      //������ĿҪ����д��3������Ҫ���if����
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
//		ListNode *p = nullptr;             //��������ָ�룬һ�����Ҫ��ӵ�λ��,һ����Ǹ�λ�õ�ǰһ��λ��
//		ListNode *cur = head;
//		while (cur && i<index)             //�������(��ͷ��β)ĳ��λ�ò���
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
//	void deleteAtIndex(int index) {        //�������ۣ���ɾ��Ϊͷ�ڵ�ʱ(������������1�����Ƕ���ڵ�)����ɾ��Ϊβ�ڵ�ʱ����ɾ���м�ڵ�ʱ��
//		if (!head)
//			return;
//		if (index == 0)
//		{
//			ListNode *del = head;
//			head = head->next;
//			if (head)   //��������1���ڵ㣬���Ƕ���ڵ�
//			{
//				head->prev = nullptr;    // ɾ���ڵ�ʱ����Ҫ���ı���head��prevָ��nullptr������ӽڵ�ʱ����Ҫ�������ڵ�ʱ���ʼ����
//			}
//			else
//			{
//				tail = nullptr;
//			}
//			delete del;
//			size--;
//			return;
//		}
//		if (index == size - 1)   //�ߵ��˴����ڵ�ĸ������ڵ���2
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
//		while (cur && i<index)  //���������м�Ľڵ�
//		{
//			p = cur;
//			cur = cur->next;
//			i++;
//		}
//		if (cur && i == index)
//		{
//			ListNode *del = cur;
//			p->next = cur->next;
//			cur->next->prev = p;   //��������cur->next�Ƿ���ڣ���Ϊ��ɾ�����һ���ڵ�ʱ������һ��if�������Ѿ�����
//			delete del;
//			size--;
//			return;
//		}
//	}
//};
////ע��˫���������λ�����Ԫ�ػ���ɾ��Ԫ�أ�һ��Ҫ����˫ָ�룬һǰһ�󡣵�ֻдһ��ʱ����Ȼ�߼���ȷ�������벢���ܱ����
///**
//* Your MyLinkedList object will be instantiated and called as such:
//* MyLinkedList* obj = new MyLinkedList();
//* int param_1 = obj->get(index);
//* obj->addAtHead(val);
//* obj->addAtTail(val);
//* obj->addAtIndex(index,val);
//* obj->deleteAtIndex(index);
//*/