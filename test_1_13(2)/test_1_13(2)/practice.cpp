//��ָoffer����������ĸ���

//��Ŀ������
//����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬һ��ָ����һ���ڵ㣬��һ������
//ָ��ָ������һ���ڵ㣩�����ؽ��Ϊ���ƺ��������head����ע�⣬���������벻Ҫ��
//�ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�


//class Solution {
//public:
//	RandomListNode* Clone(RandomListNode* pHead)
//	{
//		if (!pHead) return NULL;
//		RandomListNode *currNode = pHead;
//		while (currNode){
//			RandomListNode *node = new RandomListNode(currNode->label);
//			node->next = currNode->next;
//			currNode->next = node;
//			currNode = node->next;
//		}
//		currNode = pHead;
//		while (currNode){
//			RandomListNode *node = currNode->next;
//			if (currNode->random){
//				node->random = currNode->random->next;
//			}
//			currNode = node->next;
//		}
//		//���
//		RandomListNode *pCloneHead = pHead->next;
//		RandomListNode *tmp;
//		currNode = pHead;
//		while (currNode->next){
//			tmp = currNode->next;
//			currNode->next = tmp->next;
//			currNode = tmp;
//		}
//		return pCloneHead;
//	}
//};

//����˼·��
//	1������ÿ���ڵ㣬�磺���ƽڵ�A�õ�A1����A1����ڵ�A����
//	2����������A1->random = A->random->next;
//	3���������ֳ�ԭ����͸��ƺ������