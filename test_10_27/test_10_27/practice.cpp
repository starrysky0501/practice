//剑指offer :二维数组中的查找
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		int row, column, i, j;
//		row = array.size();
//		column = array[0].size();
//		i = 0;
//		j = column - 1;
//		bool found = false;
//		if (row == 0 || column == 0)   //不会存在这样的数字,不用判断也行，因为不会进入while循环
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

//该题思路：由于所给的二维数组在一定程度上是有序的，分别对于行或者列是有序，但并不代表整体有序。
//要想遍历整个数组，如果从左上角和右下角无从下手，因为分别对应的右下和左上都是大于此位置的数或小于。
//因此选择左下角或右上角为起始点，以右上角为例，当小于此位置的数，则向左走，如果大于此位置的数，则向下走。
//我们如果选择依次遍历该数组，则时间复杂度是O(M*N),如果选择上述的方法，则时间复杂度是O(M+N)