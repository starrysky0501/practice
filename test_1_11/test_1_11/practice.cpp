//剑指offer：合并两个排序的链表

//题目：输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。

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