//牛客：删除链表中重复的结点

//题目：在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。
//例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};
*/
//class Solution {
//private:
//	TreeNode* midSearch(TreeNode* pRoot, int *k)
//	{
//		TreeNode* temp;
//		if (!pRoot)
//			return NULL;
//		temp = midSearch(pRoot->left, k);
//		if (temp)
//			return temp;
//		if (--(*k) == 0)
//			return pRoot;
//		temp = midSearch(pRoot->right, k);
//		return temp;
//	}
//public:
//	TreeNode* KthNode(TreeNode* pRoot, int k)
//	{
//		int count = k;
//		return midSearch(pRoot, &count);
//	}
//
//};