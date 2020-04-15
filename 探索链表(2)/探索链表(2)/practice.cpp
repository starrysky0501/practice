//leetcode:环形链表
//题目描述：
//给定一个链表，判断链表中是否有环。
//为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 - 1，则在该
//链表中没有环。
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
//该题思路：
//采用快慢指针解决问题，当该链表存在环，则快指针和慢指针一定会相遇，它们都从head出发，在环中进行追击问题，快指针到
//慢指针的距离会每次减一，直到相遇；慢指针到快指针的距离每次会加一。当链表不存在环时，则一定会退出while循环。




//leetcode：环形链表II
//题目描述：
//给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
//为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 - 1，则在该
//链表中没有环。
//说明：不允许修改给定的链表。
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
//该题思路：
//这道题我们仍然采用快慢指针，快指针的速度是慢指针的2倍，所以一定先进入环中，并且我们假设当慢指针到达Y位置，快指针
//在慢指针的前面一个位置，此时两指针的距离最大，但我们发现慢指针最多走环的长度-1个位置是相遇，所以慢指针一定只走小
//于一圈。我们假设X,Y,Z分别是链表的起始位置，进入环的位置和两指针相遇的位置。所以存在一个等式：
//2(X+Y)=X+Y+N(Y+Z)--->X=(N-1)(Y+Z)+Z
//所以从链表起始点到达进入环的点一定会和相遇点到达进入环的位置的点相遇。
//所以我们先找到环中的相遇点，接着将其中一个指针放在链表的开始位置，然后按照相同的速度开始运动，最后相遇点等于进入环
//的初始点。




//leetcode：相交链表
//题目描述：
//编写一个程序，找到两个单链表相交的起始节点。
//注意：
//如果两个链表没有交点，返回 null.
//在返回结果后，两个链表仍须保持原有的结构。
//可假定整个链表结构中没有循环。
//程序尽量满足 O(n) 时间复杂度，且仅用 O(1) 内存。
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
//		while (dis--)    //走dis步
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
//该题思路：
//求所谓的相交链表，我们先求出两个链表的长度(遍历链表），然后我们找出较长的那条链表，让较长的链表先走两个链表相差
//的距离，让长链表和短链表剩余相同的长度。接着我们让两个链表同步向前移动，当地址相等时，则相遇，也就是相交点；否则
//走完链表后未满足相等，则没有相交点。




//leetcode：删除链表的倒数第N个节点
//题目描述：
//给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
//说明：
//给定的 n 保证是有效的。
//进阶：
//你能尝试使用一趟扫描实现吗？
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
//		if (fast == NULL)      //由于题目说n有效，则当fast为NULL时，说明n为链表的长度
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
//该题思路：
//仍然采用快慢指针技巧，求倒数第K个，我们先让快指针走K步。
//但是存在一种情况：求第K个，刚好是链表的长度，但是从头向后让快指针移动，显然最多只能走k-1个，所以我们加上一种特殊情况，用if条件判断。
//接着我们让快慢指针一起向前移动，直到快指针的next域为NULL，说明此时快指针已走到最后一个节点，则慢指针走到要删除的
//节点的前一个(删除节点必须找到删除位置的前一个),此时删除慢指针后面的一个节点，并且返回头节点。




//在这里，提供了一个模板，用于解决链表中的双指针问题。
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