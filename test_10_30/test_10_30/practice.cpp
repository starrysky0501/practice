//��ָoffer����β��ͷ��ӡ����
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

//˼·������vector�ķ���insert��ÿ��ɨ��һ���ڵ㣬���ýڵ��������ĵ�һ��λ�ã�ֱ�������������
//iterator insert (iterator position, const value_type& val)