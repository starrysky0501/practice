//剑指offer：从上往下打印二叉树

//题目描述：从上往下打印出二叉树的每个节点，同层节点从左至右打印。
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
//	vector<int> PrintFromTopToBottom(TreeNode* root) {
//		vector<int> res;
//		if (root == NULL)
//			return res;                    //res里面的size为0，在主函数中打印时，没有数据可被打印
//		queue<TreeNode*> q;
//		q.push(root);
//		while (!q.empty())                 //当队列为空时，则树层序遍历完毕
//		{
//			res.push_back(q.front()->val); //每次将队首的值保存
//			if (q.front()->left != NULL)   //左孩子
//			{
//				q.push(q.front()->left);
//			}
//			if (q.front()->right != NULL)  //右孩子
//			{
//				q.push(q.front()->right);
//			}
//
//			q.pop();                       //判断完左右孩子后，将队首的节点弹出
//		}
//		return res;
//	}
//};

//思路：该题借助STL中的queue实现，先让树的根节点入队列，然后如果有左孩子或右孩子依次入队，然后将队首的节点弹出，模拟
//		实现出了层次遍历；当然，需要考虑该树是一个空树的情况。采用vector将每个节点对应的值保存起来。