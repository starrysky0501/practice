//leetcode���Ƴ�����Ԫ��
//����������
//ɾ�������е��ڸ���ֵ val �����нڵ㡣
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
//	ListNode* removeElements(ListNode* head, int val) {
//		if (head == NULL)
//			return head;
//		ListNode *cur = head;
//		ListNode *pre = NULL;
//		while (cur)
//		{
//			if (cur == head)
//			{
//				if (cur->val == val)
//				{
//					head = cur->next;
//					cur = cur->next;
//				}
//				else
//				{
//					pre = cur;
//					cur = cur->next;
//				}
//			}
//			else
//			{
//				if (cur->val == val)
//				{
//					ListNode *del = cur;
//					cur = cur->next;
//					pre->next = del->next;
//					delete del;
//				}
//				else
//				{
//					pre = cur;
//					cur = cur->next;
//				}
//			}
//		}
//		return head;
//	}
//};
//����˼·��
//�Ƴ�������ָ����Ԫ�أ���Ҫ�����������飬��Ϊ��ֹɾ��һ��������ɾ��ĳ��λ��ʱ��������Ҫ֪��ǰһ��λ�ã����Զ�������ָ�룬һ��ָ
//��ǰ��һ��ָ��ǰ��һ��Ԫ�ء�ѭ����������Ϊ��ǰԪ�ص������β����ѭ����������Ҫ���۸ýڵ��Ƿ�Ϊͷ�ڵ㣬��������жϸýڵ��ֵ
//�Ƿ�Ϊָ��Ԫ�ء���ע��:pre���ָ���ƶ�ÿ���Ǳ�cur��ֵ���������Լ���ǰ�ƶ���