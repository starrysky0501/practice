//leetcode���������
//��Ŀ������
//��������ʵ�֡�������ѡ��ʹ�õ������˫�����������еĽڵ�Ӧ�þ����������ԣ�val �� next��val �ǵ�ǰ�ڵ��ֵ��next ��ָ����һ���ڵ��ָ�� / ���á����Ҫʹ��˫����������Ҫһ������ prev ��ָʾ�����е���һ���ڵ㡣���������е����нڵ㶼�� 0 - index �ġ�
//����������ʵ����Щ���ܣ�
//get(index)����ȡ�����е� index ���ڵ��ֵ�����������Ч���򷵻� - 1��
//addAtHead(val)��������ĵ�һ��Ԫ��֮ǰ���һ��ֵΪ val �Ľڵ㡣������½ڵ㽫��Ϊ����ĵ�һ���ڵ㡣
//addAtTail(val)����ֵΪ val �Ľڵ�׷�ӵ���������һ��Ԫ�ء�
//addAtIndex(index, val)���������еĵ� index ���ڵ�֮ǰ���ֵΪ val  �Ľڵ㡣��� index ��������ĳ��ȣ���ýڵ㽫���ӵ������ĩβ����� index ���������ȣ��򲻻����ڵ㡣���indexС��0������ͷ������ڵ㡣
//deleteAtIndex(index)��������� index ��Ч����ɾ�������еĵ� index ���ڵ㡣
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
//	int get(int index) {          //�±겻���ڣ�ֱ�ӷ���
//		if (index<0)
//			return -1;
//		ListNode *p = head;
//		int i = 0;   //������
//		while (p && i<index)      //�ҵ�index��Ӧ��λ�ã����ض�Ӧ��ֵ
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
//	void addAtHead(int val) {                   //���÷�������
//		ListNode * node = new ListNode(val);
//		node->next = head;
//		head = node;
//	}
//
//	/** Append a node of value val to the last element of the linked list. */
//	void addAtTail(int val) {                  //�������ۣ�ͷ�ڵ��Ƿ���ڡ�(��Ϊ��ѭ�����жϵ���p->next������ֽ����ã���ֻ��һ��Ԫ�أ���������ʧ�ܱ���
//		ListNode * node = new ListNode(val);
//		if (head == nullptr)
//		{
//			head = node;
//		}
//		else
//		{
//			ListNode * p = head;
//			while (p->next)      //Ѱ���������һ���ڵ�
//			{
//				p = p->next;
//			}
//			p->next = node;
//		}
//	}
//
//	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
//	void addAtIndex(int index, int val) {            //��ĳ��λ�õ�ǰ������һ��Ԫ��,��������Ҫ��Ѱ���λ�õ�ǰһ��Ԫ��
//		ListNode *node = new ListNode(val);
//		if (index <= 0)        //��Ŀ����������
//		{
//			node->next = head;
//			head = node;
//			return;
//		}
//		int i = 0;
//		ListNode *p = head;
//		while (p && i<index - 1)      //д��������Է��֣�����������Ҫѭ�����ж��Լ����������ʹ��
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
//	void deleteAtIndex(int index) {                 //�������ۣ�ɾ��ͷ��������λ��
//		ListNode *p = head;
//		if (index == 0 && head != nullptr)
//		{
//			head = head->next;
//			delete p;
//			return;
//		}
//		int i = 0;
//		while (p && i<index - 1)  //�������ѭ�������ֿ���,p������,����indx-1ʱ  
//		{
//			p = p->next;
//			i++;
//		}
//		if (!p)  //������p������
//			return;
//		if (p->next)    //���p->next������
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
//����˼·��
//�����������Ļ������й����ӻ���ɾ��һ���±꣬ע���е������Ҫ�ж��Ƿ����ͷ�ڵ㡣�Ĵ���д���ǲ���ͷ�����򣬲�ѭ��������