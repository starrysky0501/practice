//leetcode���ϲ�������������
//��Ŀ������
//��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     ListNode *next;
//*     ListNode(int x) : val(x), next(NULL) {}
//* };
//*/
//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		if (l1 == NULL)
//			return l2;
//		if (l2 == NULL)
//			return l1;
//		ListNode *head = NULL;
//		ListNode *tail = NULL;
//		head = tail = (ListNode *)malloc(sizeof(ListNode));
//		while (l1 != NULL && l2 != NULL)
//		{
//			if (l1->val < l2->val)
//			{
//				tail->next = l1;
//				l1 = l1->next;
//			}
//			else
//			{
//				tail->next = l2;
//				l2 = l2->next;
//			}
//			tail = tail->next;
//		}
//		if (l1 != NULL)
//		{
//			tail->next = l1;
//		}
//		if (l2 != NULL)
//		{
//			tail->next = l2;
//		}
//		ListNode *list = head->next;
//		free(head);
//		return list;
//	}
//};
//����˼·��
//����һ���ڱ��ڵ����ܶ࣬���÷��������Ƿ����ͷ�ڵ㡣
//���ж��������������Ƿ��п������������ֱ�ӷ�����һ���ǿ�����
//���ŵ�����������Ϊ��ʱ���������ж������Ӧ��ֵ������С�Ľڵ��������µ������ϡ��ֱ����������ͷ�ڵ�����ƶ��������ƶ�tailָ��.
//�˳�ѭ�����򽫻��нڵ������ֱ�����ӵ�������ĺ󷽡�
//�������Ҫ�ͷŴ�����ͷ�ڵ㣬����������




//leetcode:�������
//��Ŀ������
//�������� �ǿ� ������������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ��� ���� �ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�
//��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�
//�����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��
//
//����һ��
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
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode *head = NULL;
//		ListNode *tail = NULL;
//		head = tail = (ListNode *)malloc(sizeof(ListNode));
//		int carry = 0;
//		while (l1 != NULL && l2 != NULL)
//		{
//			tail->next = new ListNode((carry + l1->val + l2->val) % 10);
//			carry = (carry + l1->val + l2->val) / 10;
//			l1 = l1->next;
//			l2 = l2->next;
//			tail = tail->next;
//		}
//		if (l1 == NULL && l2 == NULL)
//		{
//			if (carry == 1)
//			{
//				tail->next = new ListNode(1);
//				tail = tail->next;
//				ListNode *list = head->next;
//				free(head);
//				return list;
//			}
//		}
//		while (l1 != NULL)
//		{
//			tail->next = new ListNode((carry + l1->val) % 10);
//			tail = tail->next;
//			carry = (carry + l1->val) / 10;
//			l1 = l1->next;
//			if (l1 == NULL)
//			{
//				if (carry == 1)
//				{
//					tail->next = new ListNode(1);
//				}
//			}
//		}
//		while (l2 != NULL)
//		{
//			tail->next = new ListNode((carry + l2->val) % 10);
//			tail = tail->next;
//			carry = (carry + l2->val) / 10;
//			l2 = l2->next;
//			if (l2 == NULL)
//			{
//				if (carry == 1)
//				{
//					tail->next = new ListNode(1);
//				}
//			}
//		}
//		ListNode *list = head->next;
//		free(head);
//		return list;
//	}
//};
//����˼·��
//�÷�������������࣬�����ǽ����´��¹��̣�
//����һ���ڱ��ڵ㡣���жϵ�����������Ϊ��ʱ�ļ������������жϵ�������Ϊ�յ����ڽ�λλ�Ľ��������жϵ������ֱ�Ϊ�յĽ����

//��������
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode *head = new ListNode(-1);           //����һ���ڱ��ڵ�
//		ListNode *tail = head;
//		int sum = 0;
//		bool carry = false;
//		while (l1 != NULL || l2 != NULL)             //��whileѭ��������������������Ƿ���ڽڵ�
//		{
//			sum = 0;
//			if (l1 != NULL)
//			{
//				sum += l1->val;
//				l1 = l1->next;
//			}
//			if (l2 != NULL)
//			{
//				sum += l2->val;
//				l2 = l2->next;
//			}
//			if (carry)
//			{
//				sum += 1;
//			}
//			tail->next = new ListNode(sum % 10);     //���������Ӧ�ڵ�ĺͳ����������ֵ�⣬������һλ��λ������ֵ��
//			tail = tail->next;
//			carry = sum / 10;
//		}
//		if (carry)
//		{
//			tail->next = new ListNode(1);
//		}
//		return head->next;
//	}
//};
//�÷���˼·��
//while�����е��жϲ��û����ӣ���ʾֻҪ���ڽڵ㣬����Խ��뵽ѭ���У���һ������sum��¼��Ӧλ�ĺͣ��ú�����������ɻ����������
//��һ������ɡ����˳�ѭ���⣬�����жϽ�λλ�Ƿ�Ϊtrue,������Ϊtrueʱ������Ҫ����һ���µĽڵ㣬��¼�Ľ�λλ��ֵ��

//����һ��˼·��������������룬�̵������ֲ���������ĳ��ȡ�Ȼ����м��㡣