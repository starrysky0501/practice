//leetcode:扁平化多级双向链表
//题目描述：
//多级双向链表中，除了指向下一个节点和前一个节点指针之外，它还有一个子链表指针，可能指向单独的双向链表。这些子列表也可能会有一个或多个自己的子项，依此类推，生成多级数据结构，如下面的示例所示。
//给你位于列表第一级的头节点，请你扁平化列表，使所有结点出现在单级双链表中。
//输入：head = [1, 2, 3, 4, 5, 6, null, null, null, 7, 8, 9, 10, null, null, 11, 12]
//输出：[1, 2, 3, 7, 8, 11, 12, 9, 10, 4, 5, 6]
/*
// Definition for a Node.
class Node {
public:
int val;
Node* prev;
Node* next;
Node* child;
};
*/

//class Solution {
//public:
//	Node* flatten(Node* head) {
//		if (!head)
//			return nullptr;
//		Node *cur = head;
//		while (cur)
//		{
//			Node *_next = cur->next;
//			if (cur->child)
//			{
//				先将cur与child链表的第一个节点链接起来
//				Node *_child = cur->child;
//				cur->next = _child;
//				_child->prev = cur;
//				cur->child = nullptr;
//				接着找到该孩子节点的最后一个节点，便于将该孩子链表插入到cur和next之间
//				Node *tail = _child;
//				while (tail->next)
//				{
//					tail = tail->next;
//				}
//				将该孩子链表插入到cur和next之间
//				tail->next = _next;
//				if (_next)
//				{
//					_next->prev = tail;
//				}
//			}
//			cur = cur->next;
//		}
//		return head;
//	}
//};
//该题描述：先判断是否存在孩子节点，如果存在分三步：
//1.先将cur与child链表的第一个节点链接起来
//2.接着找到该孩子节点的最后一个节点，便于将该孩子链表插入到cur和next之间
//3.将该孩子链表插入到cur和next之间
//在循环中依次遍历每个节点，让cur一直向前移动，并且需要创建_next节点，便于将孩子链表插入到cur和_next之间




//leetcode： 复制带随机指针的链表
//题目描述：
//给定一个链表，每个节点包含一个额外增加的随机指针，该指针可以指向链表中的任何节点或空节点。
//要求返回这个链表的 深拷贝。
//我们用一个由 n 个节点组成的链表来表示输入 / 输出中的链表。每个节点用一个[val, random_index] 表示：
//val：一个表示 Node.val 的整数。
//random_index：随机指针指向的节点索引（范围从 0 到 n - 1）；如果不指向任何节点，则为  null 。
//
///*
//// Definition for a Node.
//class Node {
//public:
//int val;
//Node* next;
//Node* random;
//
//Node(int _val) {
//val = _val;
//next = NULL;
//random = NULL;
//}
//};
//*/
//class Solution {
//public:
//	Node* copyRandomList(Node* head) {
//		if (!head)
//			return nullptr;
//		//创建副本，将副本依次插入每个节点的后面
//		Node *cur = head;
//		while (cur)
//		{
//			Node *node = new Node(cur->val);
//			Node *next = cur->next;
//			node->next = next;
//			cur->next = node;
//			cur = next;
//		}
//		//设置新节点的random的指向
//		cur = head;
//		while (cur)
//		{
//			cur->next->random = cur->random ? cur->random->next : nullptr;
//			cur = cur->next->next;    //当next存在，则cur->next一定存在,所以不用考虑是否可以解引用成功
//		}
//		//分解出两个链表
//		cur = head;
//		Node *new_cur = head->next;
//		Node *_head = head->next;      //保存新链表的头节点，最后返回值需要
//		while (cur)
//		{
//			//旧链表
//			cur->next = cur->next->next;
//			cur = cur->next;
//			//新链表
//			new_cur->next = cur ? cur->next : nullptr;
//			new_cur = new_cur->next;
//		}
//		return _head;
//	}
//};
//该题描述：
//该题是深拷贝，那么存在一个难点，就是如何赋值链表的random指针的指向。
//所以我们该题想到了一个非常巧妙的思想：
//1.将原链表的每一个节点都对应创建一个新的节点，依次插入到对应节点的后方。
//2.接下来置random指针的指向，新节点的random的指向就是对应原节点random指向的下一个节点.
//3.分离原链表和新链表，形成两个链表，最后返回新链表的头节点。




//leetcode：旋转链表
//给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//方法一：
//class Solution {
//public:
//	ListNode* rotateRight(ListNode* head, int k) {
//		if (head == nullptr)
//			return nullptr;
//		ListNode *cur = head;
//		int count = 0;
//		while (cur)
//		{
//			cur = cur->next;
//			count++;
//		}
//		int len = k%count;
//		if (len == 0)
//			return head;
//		ListNode *fast = head;
//		ListNode *slow = head;
//		while (len--)
//		{
//			fast = fast->next;
//		}
//		while (fast->next)
//		{
//			slow = slow->next;
//			fast = fast->next;
//		}
//		ListNode *new_head = slow->next;     //此时fast是存在的，slow一定存在，并且最多是倒数第二个元素。
//		ListNode *tail = new_head;
//		slow->next = nullptr;
//		while (tail->next)                  //tail一定存在
//		{
//			tail = tail->next;
//		}
//		tail->next = head;
//		return new_head;
//	}
//
//};
//该题思路：
//先求出链表的长度，然后将求得位置和链表长度求余。余数为实际移动的位数K。
//当为0时，则不用移动，直接返回头节点。
//采用快慢指针，先让快指针走K步，接着让快慢指针一起移动，当fast->next为NULL时，我们将slow->next置为NULL，后面的节点
//移动到此时链表的最前方。
//所以接着寻找断开后，后面的链表的尾节点，将他的next链接到head，注意一定要保存后面链表的头节点，因为它是因链表的头节点。