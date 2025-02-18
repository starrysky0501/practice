//剑指offer:连续子数组的最大和

//题目：HZ偶尔会拿些专业问题来忽悠那些非计算机专业的同学。今天测试组开完会后,他又发话了:在古老的一维模式识别中,
//常常需要计算连续子向量的最大和,当向量全为正数的时候,问题很好解决。但是,如果向量中包含负数,是否应该包含某个负
//数,并期望旁边的正数会弥补它呢？例如:{6,-3,-2,7,-15,1,2,2},连续子向量的最大和为8(从第0个开始,到第3个为止)。给
//一个数组，返回它的最大连续子序列的和，你会不会被他忽悠住？(子向量的长度至少是1)


//int FindGreatestSumOfSubArray(vector<int> array) {
//	if (array.empty()) return 0;
//	int sum = array[0], tempsum = array[0]; //注意初始值 不能设为0 防止只有负数
//	for (int i = 1; i < array.size(); i++) //从1开始 因为0的情况在初始化时完成了
//	{
//		tempsum = (tempsum < 0) ? array[i] : tempsum + array[i];
//		sum = (tempsum > sum) ? tempsum : sum;
//	}
//	return sum;
//}