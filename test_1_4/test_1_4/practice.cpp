//ţ�ͣ������������ĵ�k�����


//��Ŀ������һ�ö��������������ҳ����еĵ�kС�Ľ�㡣���磬��5��3��7��2��4��6��8��
//�У��������ֵ��С˳�����С����ֵΪ4��

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