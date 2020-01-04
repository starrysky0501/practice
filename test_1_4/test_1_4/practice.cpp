//牛客：二叉搜索树的第k个结点


//题目：给定一棵二叉搜索树，请找出其中的第k小的结点。例如，（5，3，7，2，4，6，8）
//中，按结点数值大小顺序第三小结点的值为4。

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