//leetcode：杨辉三角II
//题目描述：
//给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
//你可以优化你的算法到 O(k) 空间复杂度吗？
//class Solution {
//public:
//	vector<int> getRow(int rowIndex) {
//		vector<int> arr(rowIndex + 1);
//		for (int i = 0; i <= rowIndex; ++i)
//		{
//			arr[i] = 1;
//			for (int j = i - 1; j>0; --j)
//			{
//				arr[j] = arr[j] + arr[j - 1];
//			}
//		}
//		return arr;
//	}
//};
//该题思路：
//这个题的重点在于怎样使空间复杂度为O(K)，我们不妨直接开辟所求第K行的空间，我们知道杨辉三角的第一列和每行的最后一列
//都是1，其余位置都为前一行的对应的列和前一列的和。我们从上向下初始化，控制第二层for循环范围在第2个元素和倒数第二个
//元素之间(包括),并且是从后向前初始化，这样才不会影响前一个位置的值。