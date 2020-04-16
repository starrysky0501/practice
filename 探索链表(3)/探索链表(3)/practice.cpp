//leetcode：反转链表
//题目描述：
//反转一个单链表。
//示例 :
//输入 : 1->2->3->4->5->NULL
//输出 : 5->4->3->2->1->NULL
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//方法一：迭代(三个指针)
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		if (head == NULL || head->next == NULL)
//			return head;
//		ListNode *p1 = head;
//		ListNode *p2 = p1->next;
//		ListNode *p3 = p2->next;
//		p1->next = NULL;
//		while (p2)
//		{
//			p2->next = p1;
//			p1 = p2;
//			p2 = p3;
//			if (p3)
//			{
//				p3 = p3->next;
//			}
//		}
//		return p1;
//	}
//};
//该方法思路：
//采用三个指针p1,p2,p3。首先判断该链表是否有节点以及是否只有一个节点，但满足时，我们直接返回。
//设三个指针分别指向第一个节点，指向第一个节点的后一个节点，指向第二个节点的后一个节点(链表至少存在2个节点)
//我们先让第一个节点的指针域置空，接着我们进入循环，使p2得指针域指向p1，移动p1的位置到p2，移动p2到p3的位置，当p3现
//在的位置不为空时，将p3继续向后移动,当p3移动到null，再一次进入循环中时，将此时的位置传给p2，此时p2的位置为null，则
//下一次会退出循环，p1的指向为链表的头位置。(p1一直保存头节点的位置，所以当p2为null时，链表已经翻转完毕)


//方法二：递归
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
//	ListNode* reverseList(ListNode* head) {
//		if (head == NULL || head->next == NULL)
//			return head;
//		ListNode *ret = reverseList(head->next);
//		head->next->next = head;
//		head->next = NULL;                      //必须加这句，否则会出错，因为这是递归，所以在每一个栈帧中链表都是独立的，假如不置空，会使链表形成环。
//		return ret;
//	}
//};
//该方法思路：
//该方法采用递归的思想。很显然，当链表没有节点或者只有一个节点时，直接返回头节点，没必要翻转。
//我们通过递归，找到翻转后链表的头部。所以递归结束的条件和当链表只有一个节点时，直接返回头节点的思想不谋而合。
//然后递归的参数应采用head的下一个节点，以保证我们存储到当前节点的前一个节点，也就是head节点。
//因为现在已知只有当前栈帧中的head，所以我们将head->next->next=head，也就是后一个节点的指针域指向前一个节点,然后
//将之前的前一个节点的指针域指向后一个节点这个关系断开，也就是置空。最后返回头节点。


//方法三：从头到尾局部翻转
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
//	ListNode* reverseList(ListNode* head) {
//		if (head == NULL)
//			return head;
//		ListNode *cur = head;
//		while (head->next != NULL)
//		{
//			ListNode *ret = head->next->next;  // 先保存起来，每次head的指针域会和cur都向后移动一个节点
//			head->next->next = cur;
//			cur = head->next;
//			head->next = ret;
//		}
//		return cur;
//	}
//};
//该方法思路：
//原链表的头结点就是反转之后链表的尾结点，使用 head标记 .
//定义指针 cur，初始化为 head .
//每次都让 head 下一个结点的 next 指向 cur ，实现一次局部反转
//局部反转完成之后，cur 和 head 的 next 指针同时 往前移动一个位置
//循环上述过程，直至 cur 到达链表的最后一个结点 .
