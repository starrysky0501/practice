//��ָoffer�������˵��˶���Χ

//������һ��m�к�n�еķ���һ�������˴�����0,0�ĸ��ӿ�ʼ�ƶ���ÿһ��ֻ�������ң��ϣ����ĸ������ƶ�һ��
//���ǲ��ܽ�������������������λ֮�ʹ���k�ĸ��ӡ� ���磬��kΪ18ʱ���������ܹ����뷽��35,37������Ϊ3+5+3+7 = 18��
//���ǣ������ܽ��뷽��35,38������Ϊ3+5+3+8 = 19�����ʸû������ܹ��ﵽ���ٸ����ӣ�

//class Solution {
//public:
//	int movingCount(int threshold, int rows, int cols)
//	{
//		int count = 0;
//		vector<vector<bool>> visited(rows, vector<bool>(cols, false));
//		visitCount(threshold, 0, 0, count, visited);
//		return count;
//	}
//
//	void visitCount(int threshold, int rows, int cols, int &count, vector<vector<bool>> &visited){
//		if (rows >= visited.size()
//			|| cols >= visited[0].size()
//			|| visited[rows][cols]
//			|| !CheckThre(threshold, rows, cols))
//			return;
//		++count;
//		visited[rows][cols] = true;
//		visitCount(threshold, rows - 1, cols, count, visited);
//		visitCount(threshold, rows, cols - 1, count, visited);
//		visitCount(threshold, rows + 1, cols, count, visited);
//		visitCount(threshold, rows, cols + 1, count, visited);
//		return;
//	}
//
//	bool CheckThre(int threshold, int rows, int cols){
//		int res = 0;
//		while (rows)
//			res += rows % 10, rows /= 10;
//		while (cols)
//			res += cols % 10, cols /= 10;
//		return res <= threshold;
//	}
//
//};