//剑指offer：复杂链表的复制

//题目描述：
//输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊
//指针指向任意一个节点），返回结果为复制后复杂链表的head。（注意，输出结果中请不要返
//回参数中的节点引用，否则判题程序会直接返回空）


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
//		//拆分
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

//解题思路：
//	1、复制每个节点，如：复制节点A得到A1，将A1插入节点A后面
//	2、遍历链表，A1->random = A->random->next;
//	3、将链表拆分成原链表和复制后的链表