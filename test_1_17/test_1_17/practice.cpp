//剑指offer:两个链表的第一个公共结点

//题目描述：输入两个链表，找出它们的第一个公共结点。


//class Solution {
//public:
//	ListNode* FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
//		ListNode *p1 = pHead1;
//		ListNode *p2 = pHead2;
//		while (p1 != p2){
//			p1 = (p1 == NULL ? pHead2 : p1->next);
//			p2 = (p2 == NULL ? pHead1 : p2->next);
//		}
//		return p1;
//	}
//};