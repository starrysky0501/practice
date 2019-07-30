//两数之和

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

//整数反转
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
//该题采用数学计算的思想：通过循环将数字x的每一位拆开，在计算新值时每一步都要判断是否溢出
//溢出条件从两个方面看：
//   current*10+next>INT_MAX
//   第一个是因为还有pop要添加，一定溢出 ；第二个是因为7是最大int正值的个位数
//   current*10+next<INT_MIN
//   第二个是因为8是int最小负值的个位数
//INT_MAX和INT_MIN的头文件为<limits.h>
