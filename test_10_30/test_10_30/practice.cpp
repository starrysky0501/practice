//剑指offer：从尾到头打印链表
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) {
//		vector<int> arraylist;
//		if (head != NULL)
//		{
//			arraylist.insert(arraylist.begin(), head->val);
//			//iterator insert (iterator position, const value_type& val)
//			while (head->next != NULL)
//			{
//				arraylist.insert(arraylist.begin(), head->next->val);
//				head = head->next;
//			}
//		}
//		return arraylist;
//	}
//};

//思路：巧用vector的方法insert，每次扫描一个节点，将该节点插在链表的第一个位置，直到遍历完该链表
//iterator insert (iterator position, const value_type& val)