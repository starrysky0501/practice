//��ָoffer��˳ʱ���ӡ����
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix) {
//		vector<int> res;                                             
//		int row = matrix.size();
//		int col = matrix[0].size();
//		int left = 0, right = col - 1, top = 0, bottom = row - 1;             //�����ĸ�������¼�����λ��
//		if (row == 0 || col == 0)
//			return res;
//		while (left <= right && top <= bottom)
//		{
//			for (int i = left; i <= right; ++i)
//			{
//				res.push_back(matrix[top][i]);
//			}
//			for (int i = top + 1; i <= bottom; ++i)
//			{
//				res.push_back(matrix[i][right]);
//			}
//			if (top != bottom)                 //��������жϣ��Ὣ��ǰ���ظ����뵽������
//			{
//				for (int i = right - 1; i >= left; --i)
//				{
//					res.push_back(matrix[bottom][i]);
//				}
//			}
//			if (left != right)                //��������жϣ��Ὣ��ǰ���ظ����뵽������
//			{
//				for (int i = bottom - 1; i>top; --i)          //*****���棺Ϊʲô������д�� i>=top-1?
//				{
//					res.push_back(matrix[i][left]);
//				}
//			}
//			left++;
//			top++;
//			right--;
//			bottom--;
//		}
//		return res;
//	}
//};


//˼�룺�����Ϻ����µ����궨λ��һ��Ҫ��ת��ӡ�����ݣ�һ����ת��ӡ���������ԽǷֱ�ǰ���ͺ���һ����λ
//��Ҫע�⣺���ǵ��к͵��е����