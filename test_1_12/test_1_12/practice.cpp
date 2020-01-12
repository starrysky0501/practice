//剑指offer:二叉树的镜像

//题目：操作给定的二叉树，将其变换为源二叉树的镜像。

/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
//class Solution {
//public:
//	void Mirror(TreeNode *pRoot) {
//		if (pRoot != NULL){
//			TreeNode *temp = pRoot->left;
//			pRoot->left = pRoot->right;
//			pRoot->right = temp;
//			Mirror(pRoot->left);
//			Mirror(pRoot->right);
//		}
//	}
//};