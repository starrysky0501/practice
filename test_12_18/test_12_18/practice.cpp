//��ָoffer���������´�ӡ������

//��Ŀ�������������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
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
//			return res;                    //res�����sizeΪ0�����������д�ӡʱ��û�����ݿɱ���ӡ
//		queue<TreeNode*> q;
//		q.push(root);
//		while (!q.empty())                 //������Ϊ��ʱ����������������
//		{
//			res.push_back(q.front()->val); //ÿ�ν����׵�ֵ����
//			if (q.front()->left != NULL)   //����
//			{
//				q.push(q.front()->left);
//			}
//			if (q.front()->right != NULL)  //�Һ���
//			{
//				q.push(q.front()->right);
//			}
//
//			q.pop();                       //�ж������Һ��Ӻ󣬽����׵Ľڵ㵯��
//		}
//		return res;
//	}
//};

//˼·���������STL�е�queueʵ�֣��������ĸ��ڵ�����У�Ȼ����������ӻ��Һ���������ӣ�Ȼ�󽫶��׵Ľڵ㵯����ģ��
//		ʵ�ֳ��˲�α�������Ȼ����Ҫ���Ǹ�����һ�����������������vector��ÿ���ڵ��Ӧ��ֵ����������