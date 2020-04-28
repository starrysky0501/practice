//leetcode:��ƽ���༶˫������
//��Ŀ������
//�༶˫�������У�����ָ����һ���ڵ��ǰһ���ڵ�ָ��֮�⣬������һ��������ָ�룬����ָ�򵥶���˫��������Щ���б�Ҳ���ܻ���һ�������Լ�������������ƣ����ɶ༶���ݽṹ���������ʾ����ʾ��
//����λ���б��һ����ͷ�ڵ㣬�����ƽ���б�ʹ���н������ڵ���˫�����С�
//���룺head = [1, 2, 3, 4, 5, 6, null, null, null, 7, 8, 9, 10, null, null, 11, 12]
//�����[1, 2, 3, 7, 8, 11, 12, 9, 10, 4, 5, 6]
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
//				�Ƚ�cur��child����ĵ�һ���ڵ���������
//				Node *_child = cur->child;
//				cur->next = _child;
//				_child->prev = cur;
//				cur->child = nullptr;
//				�����ҵ��ú��ӽڵ�����һ���ڵ㣬���ڽ��ú���������뵽cur��next֮��
//				Node *tail = _child;
//				while (tail->next)
//				{
//					tail = tail->next;
//				}
//				���ú���������뵽cur��next֮��
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
//�������������ж��Ƿ���ں��ӽڵ㣬������ڷ�������
//1.�Ƚ�cur��child����ĵ�һ���ڵ���������
//2.�����ҵ��ú��ӽڵ�����һ���ڵ㣬���ڽ��ú���������뵽cur��next֮��
//3.���ú���������뵽cur��next֮��
//��ѭ�������α���ÿ���ڵ㣬��curһֱ��ǰ�ƶ���������Ҫ����_next�ڵ㣬���ڽ�����������뵽cur��_next֮��




//leetcode�� ���ƴ����ָ�������
//��Ŀ������
//����һ������ÿ���ڵ����һ���������ӵ����ָ�룬��ָ�����ָ�������е��κνڵ��սڵ㡣
//Ҫ�󷵻��������� �����
//������һ���� n ���ڵ���ɵ���������ʾ���� / ����е�����ÿ���ڵ���һ��[val, random_index] ��ʾ��
//val��һ����ʾ Node.val ��������
//random_index�����ָ��ָ��Ľڵ���������Χ�� 0 �� n - 1���������ָ���κνڵ㣬��Ϊ  null ��
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
//		//�������������������β���ÿ���ڵ�ĺ���
//		Node *cur = head;
//		while (cur)
//		{
//			Node *node = new Node(cur->val);
//			Node *next = cur->next;
//			node->next = next;
//			cur->next = node;
//			cur = next;
//		}
//		//�����½ڵ��random��ָ��
//		cur = head;
//		while (cur)
//		{
//			cur->next->random = cur->random ? cur->random->next : nullptr;
//			cur = cur->next->next;    //��next���ڣ���cur->nextһ������,���Բ��ÿ����Ƿ���Խ����óɹ�
//		}
//		//�ֽ����������
//		cur = head;
//		Node *new_cur = head->next;
//		Node *_head = head->next;      //�����������ͷ�ڵ㣬��󷵻�ֵ��Ҫ
//		while (cur)
//		{
//			//������
//			cur->next = cur->next->next;
//			cur = cur->next;
//			//������
//			new_cur->next = cur ? cur->next : nullptr;
//			new_cur = new_cur->next;
//		}
//		return _head;
//	}
//};
//����������
//�������������ô����һ���ѵ㣬������θ�ֵ�����randomָ���ָ��
//�������Ǹ����뵽��һ���ǳ������˼�룺
//1.��ԭ�����ÿһ���ڵ㶼��Ӧ����һ���µĽڵ㣬���β��뵽��Ӧ�ڵ�ĺ󷽡�
//2.��������randomָ���ָ���½ڵ��random��ָ����Ƕ�Ӧԭ�ڵ�randomָ�����һ���ڵ�.
//3.����ԭ������������γ�����������󷵻��������ͷ�ڵ㡣




//leetcode����ת����
//����һ��������ת����������ÿ���ڵ������ƶ� k ��λ�ã����� k �ǷǸ�����
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//����һ��
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
//		ListNode *new_head = slow->next;     //��ʱfast�Ǵ��ڵģ�slowһ�����ڣ���������ǵ����ڶ���Ԫ�ء�
//		ListNode *tail = new_head;
//		slow->next = nullptr;
//		while (tail->next)                  //tailһ������
//		{
//			tail = tail->next;
//		}
//		tail->next = head;
//		return new_head;
//	}
//
//};
//����˼·��
//���������ĳ��ȣ�Ȼ�����λ�ú����������ࡣ����Ϊʵ���ƶ���λ��K��
//��Ϊ0ʱ�������ƶ���ֱ�ӷ���ͷ�ڵ㡣
//���ÿ���ָ�룬���ÿ�ָ����K���������ÿ���ָ��һ���ƶ�����fast->nextΪNULLʱ�����ǽ�slow->next��ΪNULL������Ľڵ�
//�ƶ�����ʱ�������ǰ����
//���Խ���Ѱ�ҶϿ��󣬺���������β�ڵ㣬������next���ӵ�head��ע��һ��Ҫ������������ͷ�ڵ㣬��Ϊ�����������ͷ�ڵ㡣