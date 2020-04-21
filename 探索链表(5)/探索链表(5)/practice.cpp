//leetcode����ż����
//��Ŀ������
//����һ�������������е������ڵ��ż���ڵ�ֱ�����һ����ע�⣬����������ڵ��ż���ڵ�ָ���ǽڵ��ŵ���ż�ԣ������ǽڵ��ֵ����ż�ԡ�
//�볢��ʹ��ԭ���㷨��ɡ�����㷨�Ŀռ临�Ӷ�ӦΪ O(1)��ʱ�临�Ӷ�ӦΪ O(nodes)��nodes Ϊ�ڵ�������
//˵�� :
//Ӧ�����������ڵ��ż���ڵ�����˳��
//����ĵ�һ���ڵ���Ϊ�����ڵ㣬�ڶ����ڵ���Ϊż���ڵ㣬�Դ����ơ�
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
//		//��������ָ��
//		if (head == NULL)
//			return head;
//		ListNode *odd = head;
//		ListNode *even = head->next;
//		ListNode *evenhead = even;
//		while (even != NULL && even->next != NULL)    //������ֻ����������һ��Ԫ��ʱ�ų���
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
//����˼·��
//��������ָ�롣�������ǵĿռ临�Ӷ�ΪO(1),����������Ҫ��ԭ�����ϲ��������һ����������Ҫ��ż�������ӵ�������ĺ��棬����Ŷ����
//��Ҫһ��������¼ż�����ͷ�ڵ㡣�ڶ�����������odd��even���ֱ��¼��ż��������ƶ���λ�á�
//��һ����������������ֵ����ż����ֵʱ��evenָ������oddָ��ĺ󷽣�����ѭ���л��漰��evenָ�����һ��λ�ã�����ѭ����������even
//��ΪNULL��even->next��ΪNULL����ѭ���У�������������������ż�����˳�ѭ���󣬽�even��ͷָ�����ӵ�oddָ��ĺ󷽡�




//leetcode����������
//��Ŀ������
//���ж�һ�������Ƿ�Ϊ��������
//����һ��������������
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
//ʱ�临�Ӷȣ�O(N)
//�ռ临�Ӷȣ�O(N)
//����������ת��������+����ָ��
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
//		//�ҵ������м�λ��
//		ListNode *slow = head;
//		ListNode *fast = head;
//		while (fast && fast->next)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		//��ת�����벿��
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
//		//��ָ�뼼��
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
//�÷���˼·��
//����Ҫ��ʹ�ռ临�Ӷ�Ϊ0(1)�����������ԭ�����ϲ����������Ƕ�֪����������������ʵ��ص㣬Ҫ����ͬһʱ���ж��Ƿ�Ϊ���ģ�������
//Ӧ������ĺ�벿����ת��Ҫ���ҵ����֣����ǻ�Ӧ�ҵ�������е�λ�ã������ǲ��ÿ���ָ�뷨���в��ң��ҵ���λ�ã���ʼ������ת��
//��ת���������ǽ����һ��Ԫ�ص�nextֵ���ÿգ��������ֻ�����������ж��Ƿ�Ϊ���ģ���������ָ�룬�ֱ�ָ��ǰ�벿�������ͷ�ͺ��
//���������ͷ�����������λ�ö�Ӧ��ֵ��ȣ��������ǰ�ƶ��������˳���ѭ������������Ϊ�ƶ�������ָ������ΪNULLʱ(��������������
//������ż������������)
//ʱ�临�Ӷȣ�O(N)
//�ռ临�Ӷȣ�O(1)