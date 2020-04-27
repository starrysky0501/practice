//leetcode：合并两个有序链表
//题目描述：
//将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
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
//该题思路：
//创建一个哨兵节点会简便很多，不用分论讨论是否存在头节点。
//先判断这两个链表中是否有空链表，如果有则直接返回另一个非空链表。
//接着当两个链表都不为空时，则我们判断链表对应的值，将较小的节点链接在新的链表上。分别将两个链表的头节点向后移动，并且移动tail指针.
//退出循环后，则将还有节点的链表直接链接到新链表的后方。
//最后我们要释放创建的头节点，返回新链表。




//leetcode:两数相加
//题目描述：
//给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
//如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
//您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
//
//方法一：
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
//该题思路：
//该方法代码过于冗余，但还是解释下大致过程：
//创建一个哨兵节点。先判断当两个链表都不为空时的计算结果；接着判断当两个都为空但存在进位位的结果；最后判断当两个分别为空的结果。

//方法二：
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode *head = new ListNode(-1);           //创建一个哨兵节点
//		ListNode *tail = head;
//		int sum = 0;
//		bool carry = false;
//		while (l1 != NULL || l2 != NULL)             //在while循环里分类讨论两个链表是否存在节点
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
//			tail->next = new ListNode(sum % 10);     //两个链表对应节点的和除了链表本身的值外，还有上一位进位产生的值。
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
//该方法思路：
//while条件中的判断采用或连接，表示只要存在节点，则可以进入到循环中，用一个变量sum记录对应位的和，该和由三部分组成或两部分组成
//或一部分组成。则退出循环外，还需判断进位位是否为true,当满足为true时，还需要创建一个新的节点，记录改进位位的值。

//还有一种思路：将两个链表对齐，短的链表弥补到长链表的长度。然后进行计算。