//��ָoffer��������������˫������

//��Ŀ����������һ�ö��������������ö���������ת����һ�������˫������
//Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��

//class Solution {
//public:
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		if (pRootOfTree == nullptr) return nullptr;
//		TreeNode* pre = nullptr;
//
//		convertHelper(pRootOfTree, pre);
//
//		TreeNode* res = pRootOfTree;
//		while (res->left)
//			res = res->left;
//		return res;
//	}
//
//	void convertHelper(TreeNode* cur, TreeNode*& pre)
//	{
//		if (cur == nullptr) return;
//
//		convertHelper(cur->left, pre);
//
//		cur->left = pre;
//		if (pre) pre->right = cur;
//		pre = cur;
//
//		convertHelper(cur->right, pre);
//	}
//};