//��Ŀ����
//����һ���������͵����� nums�����дһ���ܹ��������顰�����������ķ�����
//���������������������������ģ����������������������Ԫ����ӵĺ͵����Ҳ�����Ԫ����ӵĺ͡�
//������鲻����������������ô����Ӧ�÷��� - 1����������ж��������������ô����Ӧ�÷��������ߵ���һ����
//
//class Solution {
//public:
//	int pivotIndex(vector<int>& nums) {
//		int right_sum = 0;
//		int left_sum = 0;
//		if (nums.size() == 1)
//		{
//			return 0;
//		}
//		for (int i = 1; i<nums.size(); ++i)
//		{
//			right_sum += nums[i];
//		}
//		for (int i = 0; i<nums.size(); ++i)
//		{
//			if (left_sum == right_sum)
//			{
//				return i;
//			}
//			if (i + 1<nums.size())
//			{
//				left_sum += nums[i];
//				right_sum -= nums[i + 1];
//			}
//		}
//		return -1;
//	}
//};