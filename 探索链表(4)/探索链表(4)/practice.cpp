//leetcode：移除链表元素
//该题描述：
//删除链表中等于给定值 val 的所有节点。
//方法一：不创建哨兵
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
//该题思路：
//移除链表中指定的元素，需要遍历整个数组，因为不止删除一个。由于删除某个位置时，我们需要知道前一个位置，所以定义两个指针，一个指
//向当前，一个指向前面一个元素。循环结束条件为当前元素到链表结尾。在循环中我们需要讨论该节点是否为头节点，还需继续判断该节点的值
//是否为指定元素。请注意:pre这个指针移动每次是被cur赋值，而不是自己向前移动。

//方法二：创建一个哨兵
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
//		ListNode* p = new ListNode(0);
//		p->next = head;
//		ListNode *pre = p;
//		ListNode *cur = pre->next;
//		while (cur)
//		{
//			if (cur->val == val)
//			{
//				ListNode* del = cur;
//				cur = cur->next;
//				pre->next = del->next;
//				delete del;
//			}
//			else
//			{
//				pre = cur;
//				cur = cur->next;
//			}
//		}
//		return p->next;
//	}
//};
//该题思路：借助一个节点，作为链表的头节点，pre指针指向该节点，则不再需要讨论是否为头节点。
