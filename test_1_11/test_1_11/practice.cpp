//��ָoffer���ϲ��������������

//��Ŀ�����������������������������������ϳɺ��������Ȼ������Ҫ�ϳɺ���������㵥����������

/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
//class Solution {
//public:
//	ListNode* Merge(ListNode* head1, ListNode* head2)
//	{
//		if (head1 == nullptr && head2 == nullptr)
//			return nullptr;
//		if (head1 == nullptr)
//			return head2;
//		if (head2 == nullptr)
//			return head1;
//
//		ListNode* result = nullptr;
//		if (head1->val <= head2->val)
//		{
//			result = head1;
//			result->next = Merge(head1->next, head2);
//		}
//		else if (head1->val > head2->val)
//		{
//			result = head2;
//			result->next = Merge(head1, head2->next);
//		}
//		return result;
//	}
//};