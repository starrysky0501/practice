//��ָoffer :��ά�����еĲ���
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		int row, column, i, j;
//		row = array.size();
//		column = array[0].size();
//		i = 0;
//		j = column - 1;
//		bool found = false;
//		if (row == 0 || column == 0)   //�����������������,�����ж�Ҳ�У���Ϊ�������whileѭ��
//			return found;
//		while (i<row && j >= 0)
//		{
//			if (array[i][j] == target)
//			{
//				found = true;
//				break;
//			}
//			else if (array[i][j]>target)
//			{
//				--j;
//			}
//			else
//			{
//				++i;
//			}
//		}
//		return found;
//	}
//};

//����˼·�����������Ķ�ά������һ���̶���������ģ��ֱ�����л����������򣬵�����������������
//Ҫ������������飬��������ϽǺ����½��޴����֣���Ϊ�ֱ��Ӧ�����º����϶��Ǵ��ڴ�λ�õ�����С�ڡ�
//���ѡ�����½ǻ����Ͻ�Ϊ��ʼ�㣬�����Ͻ�Ϊ������С�ڴ�λ�õ������������ߣ�������ڴ�λ�õ������������ߡ�
//�������ѡ�����α��������飬��ʱ�临�Ӷ���O(M*N),���ѡ�������ķ�������ʱ�临�Ӷ���O(M+N)