//leetcode:��������
//��Ŀ������
//����һ�������ж��������Ƿ��л���
//Ϊ�˱�ʾ���������еĻ�������ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ���� ��� pos �� - 1�����ڸ�
//������û�л���
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	bool hasCycle(ListNode *head) {
//		ListNode *fast = head;
//		ListNode *slow = head;
//		while (fast && fast->next)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (slow == fast)
//				return true;
//		}
//		return false;
//	}
//};
//����˼·��
//���ÿ���ָ�������⣬����������ڻ������ָ�����ָ��һ�������������Ƕ���head�������ڻ��н���׷�����⣬��ָ�뵽
//��ָ��ľ����ÿ�μ�һ��ֱ����������ָ�뵽��ָ��ľ���ÿ�λ��һ�����������ڻ�ʱ����һ�����˳�whileѭ����




//leetcode����������II
//��Ŀ������
//����һ��������������ʼ�뻷�ĵ�һ���ڵ㡣 ��������޻����򷵻� null��
//Ϊ�˱�ʾ���������еĻ�������ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ���� ��� pos �� - 1�����ڸ�
//������û�л���
//˵�����������޸ĸ���������
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	ListNode *detectCycle(ListNode *head) {
//		if (head == nullptr)
//			return NULL;
//		ListNode *fast = head;
//		ListNode *slow = head;
//		int pos = 0;
//		while (fast && fast->next)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (slow == fast)
//			{
//				slow = head;
//				pos = 1;
//				break;
//			}
//		}
//		if (pos == 0)
//			return NULL;
//		while (fast != slow && slow && fast)
//		{
//			slow = slow->next;
//			fast = fast->next;
//		}
//		return slow;
//
//	}
//};
//����˼·��
//�����������Ȼ���ÿ���ָ�룬��ָ����ٶ�����ָ���2��������һ���Ƚ��뻷�У��������Ǽ��赱��ָ�뵽��Yλ�ã���ָ��
//����ָ���ǰ��һ��λ�ã���ʱ��ָ��ľ�����󣬵����Ƿ�����ָ������߻��ĳ���-1��λ����������������ָ��һ��ֻ��С
//��һȦ�����Ǽ���X,Y,Z�ֱ����������ʼλ�ã����뻷��λ�ú���ָ��������λ�á����Դ���һ����ʽ��
//2(X+Y)=X+Y+N(Y+Z)--->X=(N-1)(Y+Z)+Z
//���Դ�������ʼ�㵽����뻷�ĵ�һ����������㵽����뻷��λ�õĵ�������
//�����������ҵ����е������㣬���Ž�����һ��ָ���������Ŀ�ʼλ�ã�Ȼ������ͬ���ٶȿ�ʼ�˶��������������ڽ��뻷
//�ĳ�ʼ�㡣




//leetcode���ཻ����
//��Ŀ������
//��дһ�������ҵ������������ཻ����ʼ�ڵ㡣
//ע�⣺
//�����������û�н��㣬���� null.
//�ڷ��ؽ���������������뱣��ԭ�еĽṹ��
//�ɼٶ���������ṹ��û��ѭ����
//���������� O(n) ʱ�临�Ӷȣ��ҽ��� O(1) �ڴ档
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//		ListNode *curA = headA;
//		ListNode *curB = headB;
//		int lenA = 0, lenB = 0;
//		while (curA)
//		{
//			lenA++;
//			curA = curA->next;
//		}
//		while (curB)
//		{
//			lenB++;
//			curB = curB->next;
//		}
//		int dis = abs(lenA - lenB);
//		ListNode *longlist = headA;
//		ListNode *shortlist = headB;
//		if (lenB>lenA)
//		{
//			longlist = headB;
//			shortlist = headA;
//		}
//		while (dis--)    //��dis��
//		{
//			longlist = longlist->next;
//		}
//		while (shortlist != longlist && shortlist && longlist)
//		{
//			longlist = longlist->next;
//			shortlist = shortlist->next;
//		}
//		if (shortlist == longlist)
//		{
//			return shortlist;
//		}
//		else
//		{
//			return NULL;
//		}
//
//	}
//};
//����˼·��
//����ν���ཻ���������������������ĳ���(����������Ȼ�������ҳ��ϳ������������ýϳ����������������������
//�ľ��룬�ó�����Ͷ�����ʣ����ͬ�ĳ��ȡ�������������������ͬ����ǰ�ƶ�������ַ���ʱ����������Ҳ�����ཻ�㣻����
//���������δ������ȣ���û���ཻ�㡣




//leetcode��ɾ������ĵ�����N���ڵ�
//��Ŀ������
//����һ������ɾ������ĵ����� n ���ڵ㣬���ҷ��������ͷ��㡣
//˵����
//������ n ��֤����Ч�ġ�
//���ף�
//���ܳ���ʹ��һ��ɨ��ʵ����
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	ListNode* removeNthFromEnd(ListNode* head, int n) {
//		ListNode* fast = head;
//		ListNode* slow = head;
//		while (n-- && fast)
//		{
//			fast = fast->next;
//		}
//		if (fast == NULL)      //������Ŀ˵n��Ч����fastΪNULLʱ��˵��nΪ����ĳ���
//		{
//			head = head->next;
//			return head;
//		}
//		while (fast->next)
//		{
//			fast = fast->next;
//			slow = slow->next;
//		}
//		ListNode *del = slow->next;
//		slow->next = del->next;
//		delete del;
//		return head;
//	}
//};
//����˼·��
//��Ȼ���ÿ���ָ�뼼�ɣ�������K�����������ÿ�ָ����K����
//���Ǵ���һ����������K�����պ�������ĳ��ȣ����Ǵ�ͷ����ÿ�ָ���ƶ�����Ȼ���ֻ����k-1�����������Ǽ���һ�������������if�����жϡ�
//���������ÿ���ָ��һ����ǰ�ƶ���ֱ����ָ���next��ΪNULL��˵����ʱ��ָ�����ߵ����һ���ڵ㣬����ָ���ߵ�Ҫɾ����
//�ڵ��ǰһ��(ɾ���ڵ�����ҵ�ɾ��λ�õ�ǰһ��),��ʱɾ����ָ������һ���ڵ㣬���ҷ���ͷ�ڵ㡣




//������ṩ��һ��ģ�壬���ڽ�������е�˫ָ�����⡣
//ListNode* slow = head;
//ListNode* fast = head;
//while (slow && fast && fast->next) {
//	slow = slow->next;          
//	fast = fast->next->next;    
//	if (slow == fast) {         
//		return true;
//	}
//}
//return false;   