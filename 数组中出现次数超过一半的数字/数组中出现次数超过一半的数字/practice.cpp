//ţ�ͣ������г��ִ�������һ�������

//��Ŀ������
//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡���������һ������Ϊ9������{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }��
//��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��

//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		sort(numbers.begin(), numbers.end());
//		int middle = (0 + numbers.size() - 1) / 2;     //�м��±�
//		int count = 0;
//		for (int i = 0; i<numbers.size(); ++i)
//		{
//			if (numbers[middle] == numbers[i])
//			{
//				count++;
//			}
//		}
//		if (count>numbers.size() / 2)         //"����"���鳤�ȵ�һ��
//		{
//			return numbers[middle];
//		}
//		else
//		{
//			return 0;
//		}
//	}
//};