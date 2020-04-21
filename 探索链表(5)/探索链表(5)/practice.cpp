//leetcode：奇偶链表
//题目描述：
//给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。
//请尝试使用原地算法完成。你的算法的空间复杂度应为 O(1)，时间复杂度应为 O(nodes)，nodes 为节点总数。
//说明 :
//应当保持奇数节点和偶数节点的相对顺序。
//链表的第一个节点视为奇数节点，第二个节点视为偶数节点，以此类推。
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
//	ListNode* oddEvenList(ListNode* head) {
//		//采用三个指针
//		if (head == NULL)
//			return head;
//		ListNode *odd = head;
//		ListNode *even = head->next;
//		ListNode *evenhead = even;
//		while (even != NULL && even->next != NULL)    //将链表只有两个或者一个元素时排除掉
//		{
//			odd->next = even->next;
//			odd = even->next;
//			even->next = odd->next;
//			even = odd->next;
//		}
//		odd->next = evenhead;
//		return head;
//	}
//};
//该题思路：
//采用三个指针。由于我们的空间复杂度为O(1),所以我们需要在原链表上操作。最后一步操作我们要将偶链表链接到寄链表的后面，所以哦我们
//需要一个变量记录偶链表的头节点。在定义两个变量odd和even，分别记录奇偶链表向后移动的位置。
//当一个链表不管有奇数个值还是偶数个值时，even指针总在odd指针的后方，并且循环中还涉及到even指针的下一个位置，所以循环必须满足even
//不为NULL且even->next不为NULL。在循环中，先链接奇链表，在链接偶链表。退出循环后，将even的头指针链接到odd指针的后方。




//leetcode：回文链表
//题目描述：
//请判断一个链表是否为回文链表。
//方法一：拷贝到数组中
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
//	bool isPalindrome(ListNode* head) {
//		vector<int> arr;
//		while (head)
//		{
//			arr.push_back(head->val);
//			head = head->next;
//		}
//		for (int i = 0; i<arr.size() / 2; ++i)
//		{
//			if (arr[i] != arr[arr.size() - 1 - i])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};
//
//时间复杂度：O(N)
//空间复杂度：O(N)
//方法二：反转部分链表+快慢指针
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
//	bool isPalindrome(ListNode* head) {
//		if (head == NULL || head->next == NULL)
//			return true;
//		//找到链表中间位置
//		ListNode *slow = head;
//		ListNode *fast = head;
//		while (fast && fast->next)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		//反转链表后半部分
//		ListNode *pre = slow;
//		ListNode *cur = pre->next;
//		while (cur)
//		{
//			ListNode *tmp = cur->next;
//			cur->next = pre;
//			pre = cur;
//			cur = tmp;
//		}
//		slow->next = nullptr;
//		//两指针技巧
//		while (pre && head)
//		{
//			if (pre->val != head->val)
//				return false;
//			pre = pre->next;
//			head = head->next;
//		}
//		return true;
//	}
//};
//该方法思路：
//我们要想使空间复杂度为0(1)，则必须是在原链表上操作，但我们都知道链表不具有随机访问的特点，要想在同一时间判断是否为回文，则我们
//应将链表的后半部分逆转，要想找到后半分，我们还应找到链表的中点位置，则我们采用快慢指针法进行查找，找到该位置，则开始进行逆转，
//逆转结束后我们将最后一个元素的next值域置空，否则会出现环。最后我们判断是否为回文，定义两个指针，分别指向前半部分链表的头和后半
//部分链表的头，如果该两个位置对应的值相等，则继续向前移动，否则退出，循环结束的条件为移动的两个指针任意为NULL时(不论链表有奇数
//个还是偶数个，都成立)
//时间复杂度：O(N)
//空间复杂度：O(1)