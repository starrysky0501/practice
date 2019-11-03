//剑指offer:重建二叉树

/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//class Solution {
//public:
//	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
//		int lnlen = vin.size();
//		if (lnlen == 0)
//		{
//			return NULL;
//		}
//		vector<int> left_pre;
//		vector<int> right_pre;
//		vector<int> left_vin;
//		vector<int> right_vin;
//		int title;
//		for (int i = 0; i<lnlen; i++)
//		{
//			if (pre[0] == vin[i])
//			{
//				title = i;
//				break;
//			}
//		}
//		TreeNode* head = new TreeNode(pre[0]);
//		for (int i = 0; i<title; i++)
//		{
//			left_pre.push_back(pre[i + 1]);
//			left_vin.push_back(vin[i]);
//		}
//		for (int i = title + 1; i<lnlen; i++)
//		{
//			right_pre.push_back(pre[i]);
//			right_vin.push_back(vin[i]);
//		}
//		head->left = reConstructBinaryTree(left_pre, left_vin);
//		head->right = reConstructBinaryTree(right_pre, right_vin);
//		return head;
//	}
//};