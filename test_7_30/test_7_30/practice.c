//����֮��

//int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//	int *ret = (int*)malloc(sizeof(int)* 2);
//	for (int i = 0; i<numsSize; i++)
//	{
//		for (int j = i + 1; j<numsSize; j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				ret[0] = i;
//				ret[1] = j;
//				*returnSize = 2;
//				return ret;
//			}
//		}
//	}
//	return NULL;
//}

//������ת
//int reverse(int x){
//	int current = 0;
//	while (x != 0)
//	{
//		int next = x % 10;
//		if (current > INT_MAX / 10 || current == INT_MAX / 10 && next>7)
//			return 0;
//		if (current < INT_MIN / 10 || current == INT_MIN / 10 && next<-8)
//			return 0;
//		current = current * 10 + next;
//		x = x / 10;
//	}
//	return current;
//}
//���������ѧ�����˼�룺ͨ��ѭ��������x��ÿһλ�𿪣��ڼ�����ֵʱÿһ����Ҫ�ж��Ƿ����
//����������������濴��
//   current*10+next>INT_MAX
//   ��һ������Ϊ����popҪ��ӣ�һ����� ���ڶ�������Ϊ7�����int��ֵ�ĸ�λ��
//   current*10+next<INT_MIN
//   �ڶ�������Ϊ8��int��С��ֵ�ĸ�λ��
//INT_MAX��INT_MIN��ͷ�ļ�Ϊ<limits.h>
