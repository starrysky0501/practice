//牛客：左右最值最大差

//题目描述：
//给定一个长度为N(N>1)的整型数组A，可以将A划分成左右两个部分，左部分A[0..K]，右部分A[K + 1..N - 1]，K可以取值的范围
//是[0, N - 2]。求这么多划分方案中，左部分中的最大值减去右部分最大值的绝对值，最大是多少？
//给定整数数组A和数组的大小n，请返回题目所求的答案。

//方法一：采用stl的算法函数
//class MaxGap {
//public:
//	int findMaxGap(vector<int> A, int n) {
//		int max_v = INT_MIN;
//		for (int i = 1; i<n; ++i)  //分n-1次
//		{
//			vector<int> left(i);
//			vector<int> right(n - i);
//			copy(A.begin(), A.begin() + i, left.begin());
//			sort(left.begin(), left.end());
//			copy(A.begin() + i, A.end(), right.begin());
//			sort(right.begin(), right.end());
//			if (abs(left[i - 1] - right[n - i - 1])>max_v)
//			{
//				max_v = abs(left[i - 1] - right[n - i - 1]);
//			}
//		}
//		return max_v;
//	}
//};

//该题思路：
//数组有n个元素，根据题意知共需要分n-1次。每次将左边和右边的数分别拷贝到新的数组中，并且对新的数组进行升序排序，则
//每次将左边数组的最后一个元素减去右边数组的最后一个元素的绝对值与max_v变量进行对比，如果大于则更新变量的值。

//知识点补充之STL的copy函数：
//变易算法(Mutating algorithms)就是一组能够修改容器元素数据的模板函数，可进行序列数据的复制，变换等。
//这里我看看其中的一个变易算法：元素复制算法copy。
//该算法主要用于容器之间元素的拷贝，即将迭代器区间[first，last)的元素复制到由复制目标result给定的区间[result，result+(last-first))中。
//该函数有三个参数，分别代表：
//第一二个参数：指出被复制的元素的区间范围[_First，_Last)     第三个参数：指出复制到的目标区间起始位置
//!!! 记住一定要先为vector分配空间，否则程序会崩，这是初学者经常犯的一个错误。
//1.将其所有元素复制到另一个容器中；
//copy ( myints, myints+7, myvector.begin() ); 
//2.可以将数组整体向左移动有效位。
//copy(myints + 1, myints + 7, myints);  
//大佬对copy总结的链接：https://www.cnblogs.com/mfryf/p/10814743.html


//方法二：大佬的巧妙思路
//class MaxGap {
//public:
//	int findMaxGap(vector<int> A, int n) {
//		int max = INT_MIN;
//		int min;
//		for (int i = 0; i<n; ++i)
//		{
//			if (A[i]>max)
//			{
//				max = A[i];
//			}
//		}
//		min = A[0]<A[n - 1] ? A[0] : A[n - 1];
//		return max - min;
//	}
//};
//该题思路：
//起初，先遍历数组，找出最大值，则接着只需要判断数组第一个元素和最后一个元素谁更小，则为另一个最大值。因为，找到
//数组最值，则相当于确定了一个方向，假如较小值在右方，我们则将数组分为前部分和最后一个元素，对于前一部分不管数组
//怎么变动，它的最值是不变的，后一个元素的范围向前扩充时，则最值是不变或扩大，当m-n=k,n增大，m不变时，则k会减小；
//当第一个元素小于最后一个元素，则最大值属于右边部分时，当前部分扩容时，它的最值是增大或者不变，则对于与最大值的
//距离减小或不变(求的是绝对值)。当数组内容都相等时，则它们不管怎么选，结果都是0。