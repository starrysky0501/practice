//ţ�ͣ�ɾ���������ظ��Ľ��

//��Ŀ����һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣
//���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5

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