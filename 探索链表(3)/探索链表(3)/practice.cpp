//leetcode����ת����
//��Ŀ������
//��תһ��������
//ʾ�� :
//���� : 1->2->3->4->5->NULL
//��� : 5->4->3->2->1->NULL
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//����һ������(����ָ��)
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
//�÷���˼·��
//��������ָ��p1,p2,p3�������жϸ������Ƿ��нڵ��Լ��Ƿ�ֻ��һ���ڵ㣬������ʱ������ֱ�ӷ��ء�
//������ָ��ֱ�ָ���һ���ڵ㣬ָ���һ���ڵ�ĺ�һ���ڵ㣬ָ��ڶ����ڵ�ĺ�һ���ڵ�(�������ٴ���2���ڵ�)
//�������õ�һ���ڵ��ָ�����ÿգ��������ǽ���ѭ����ʹp2��ָ����ָ��p1���ƶ�p1��λ�õ�p2���ƶ�p2��p3��λ�ã���p3��
//�ڵ�λ�ò�Ϊ��ʱ����p3��������ƶ�,��p3�ƶ���null����һ�ν���ѭ����ʱ������ʱ��λ�ô���p2����ʱp2��λ��Ϊnull����
//��һ�λ��˳�ѭ����p1��ָ��Ϊ�����ͷλ�á�(p1һֱ����ͷ�ڵ��λ�ã����Ե�p2Ϊnullʱ�������Ѿ���ת���)


//���������ݹ�
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
//		head->next = NULL;                      //�������䣬����������Ϊ���ǵݹ飬������ÿһ��ջ֡�������Ƕ����ģ����粻�ÿգ���ʹ�����γɻ���
//		return ret;
//	}
//};
//�÷���˼·��
//�÷������õݹ��˼�롣����Ȼ��������û�нڵ����ֻ��һ���ڵ�ʱ��ֱ�ӷ���ͷ�ڵ㣬û��Ҫ��ת��
//����ͨ���ݹ飬�ҵ���ת�������ͷ�������Եݹ�����������͵�����ֻ��һ���ڵ�ʱ��ֱ�ӷ���ͷ�ڵ��˼�벻ı���ϡ�
//Ȼ��ݹ�Ĳ���Ӧ����head����һ���ڵ㣬�Ա�֤���Ǵ洢����ǰ�ڵ��ǰһ���ڵ㣬Ҳ����head�ڵ㡣
//��Ϊ������ֻ֪�е�ǰջ֡�е�head���������ǽ�head->next->next=head��Ҳ���Ǻ�һ���ڵ��ָ����ָ��ǰһ���ڵ�,Ȼ��
//��֮ǰ��ǰһ���ڵ��ָ����ָ���һ���ڵ������ϵ�Ͽ���Ҳ�����ÿա���󷵻�ͷ�ڵ㡣


//����������ͷ��β�ֲ���ת
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
//			ListNode *ret = head->next->next;  // �ȱ���������ÿ��head��ָ������cur������ƶ�һ���ڵ�
//			head->next->next = cur;
//			cur = head->next;
//			head->next = ret;
//		}
//		return cur;
//	}
//};
//�÷���˼·��
//ԭ�����ͷ�����Ƿ�ת֮�������β��㣬ʹ�� head��� .
//����ָ�� cur����ʼ��Ϊ head .
//ÿ�ζ��� head ��һ������ next ָ�� cur ��ʵ��һ�ξֲ���ת
//�ֲ���ת���֮��cur �� head �� next ָ��ͬʱ ��ǰ�ƶ�һ��λ��
//ѭ���������̣�ֱ�� cur ������������һ����� .
