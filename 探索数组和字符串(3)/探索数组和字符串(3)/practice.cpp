//leetcode：对角线遍历
//题目描述：
//给定一个含有 M x N 个元素的矩阵（M 行，N 列），请以对角线遍历的顺序返回这个矩阵中的所有元素，对角线遍历如下图所示。
//
//class Solution {
//public:
//	vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
//		vector<int> nums;
//		int k = 0;
//		if (matrix.size() == 0 || matrix[0].size() == 0)
//			return nums;
//		int m = matrix.size();
//		int n = matrix[0].size();
//		vector<int> arr;
//		nums.resize(m*n);
//		for (int i = 0; i<m + n - 1; ++i)   //计算对角线条数
//		{
//			arr.clear();  //存储每条对角线的数据，之后如果是奇数条则需要翻转该对角线上的数据
//			int row = i<n ? 0 : i - n + 1;      //这个条件判断不好想
//			int col = i<n ? i : n - 1;
//			while (row<m && col>-1)
//			{
//				arr.push_back(matrix[row][col]);
//				row++;
//				col--;
//			}
//			if (i % 2 == 0)
//			{
//				reverse(arr.begin(), arr.end());
//			}
//			for (int j = 0; j<arr.size(); ++j)
//			{
//				nums[k++] = arr[j];
//			}
//		}
//		return nums;
//	}
//};
//该题思路：
//对角线迭代和翻转
//从左上角开始，计算这个矩阵的对角线条数，不难发现，个数为横纵坐标之和-1.
//知道对角线条数后，则最外层循环控制对角线条数。我们发现，以右上角的对角线为分界线，之前每条对角线的开始位置和之后
//的规律不同，则采用三目运算符进行判断。在右上角之前，则每条对角线的开始横坐标都为0，纵坐标为当前条数(从0开始滴)
//在右上角指下，则开始横坐标为(当前的对角线所在条数-总共列数+1），开始纵坐标为总共列数-1.
//知道每条对角线的起始位置后，开始进入循环，此循环控制每条对角线上的个数，需要满足条件为，纵坐标不能小于等于-1，横
//坐标不能超过矩阵的行数。
//我们是按照从右上到左下的顺序将每条对角线的元素假如数组arr,但是还需要翻转有些对角线上的元素，根据判断得，当条数为
//偶数，则翻转。最后将判断是否翻转后得元素依次加入到数组nums中。





//leetcode:螺旋矩阵
//题目描述：
//给定一个包含 m x n 个元素的矩阵（m 行, n 列），请按照顺时针螺旋顺序，返回矩阵中的所有元素。
//
//class Solution {
//public:
//	vector<int> spiralOrder(vector<vector<int>>& matrix) {
//		vector<int> nums;
//		if (matrix.size() == 0 || matrix[0].size() == 0)
//			return nums;
//		int start_x = 0, start_y = 0;
//		int end_x = matrix.size() - 1;
//		int end_y = matrix[0].size() - 1;
//		while (start_x <= end_x && start_y <= end_y)
//		{
//			for (int i = start_y; i <= end_y; ++i)
//			{
//				nums.push_back(matrix[start_x][i]);
//			}
//			for (int i = start_x + 1; i <= end_x; ++i)
//			{
//				nums.push_back(matrix[i][end_y]);
//			}
//			for (int i = end_y - 1; i >= start_y && end_x>start_x; --i)
//			{
//				nums.push_back(matrix[end_x][i]);
//			}
//			for (int i = end_x - 1; i>start_x && end_y>start_y; --i)
//			{
//				nums.push_back(matrix[i][start_y]);
//			}
//			start_x++;
//			start_y++;
//			end_x--;
//			end_y--;
//		}
//		return nums;
//	}
//};
//该题思路：
//一圈一圈的遍历矩阵外层，用4个变量控制矩阵的左上角的坐标和右下角的坐标，采用4个for循环，按照顺时针从第一行开始遍历，
//最外层while循环控制结束，当两个坐标想错时，就跳出循环。
//注意：while判断中，一定要包括相等，因为例如3*3的矩阵，最后还剩最中心的一个元素，此时左上角的坐标等于右下角的坐标。




//leetcode:杨辉三角
//给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
//在杨辉三角中，每个数是它左上方和右上方的数的和。
//输入 : 5
// 输出 :
//	[
//		[1],
//		[1, 1],
//		[1, 2, 1],
//		[1, 3, 3, 1],
//		[1, 4, 6, 4, 1]
//	]
//
//**********方法一：
//class Solution {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>>nums(numRows);      //开辟了numRows个数组，但是每个数组没有元素，size=0
//		//vector<vector<int>> nums(numRows,vector<int>());   //也可以这样开辟空间，表示定义numRows行，每行0个元素
//		/*if(numRows==0)
//		return nums;*/
//		if (numRows == 0)
//			return{};
//		for (int i = 0; i<numRows; ++i)
//		{
//			nums[i].resize(i + 1);
//			nums[i][0] = 1;
//			nums[i][i] = 1;
//		}
//
//		for (int i = 2; i<numRows; ++i)
//		{
//			for (int j = 1; j<i; ++j)
//			{
//				nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
//			}
//		}
//		return nums;
//	}
//};
//该题思路：
//定义二维数组时，先确定开辟的行数(就是numRows)，接着采用for循环为每一行开辟空间，根据例子发现每行元素的个数就是第
//几行+1(假若从第0行开始)，在为每行开辟空间的同时为每行的第一个和最后一个元素(刚好在对角线上)初始化为1。接着从第2
//行开始计算每个位置对应的值。
//
//**********方法二：
//class Solution {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>>nums;
//		if (numRows == 0)
//			return nums;
//		nums.assign(numRows, vector<int>(1));
//		for (int i = 0; i<numRows; ++i)
//		{
//			nums[i][0] = 1;
//			if (i == 0)
//				continue;
//			for (int j = 1; j<i; ++j)
//			{
//				nums[i].push_back(nums[i - 1][j - 1] + nums[i - 1][j]);
//			}
//			nums[i].push_back(1);
//		}
//		return nums;
//	}
//};
//该题思路：
//不用初始化值，而是在双层for循环中，按照元素顺序依次加入对应的值，每行第一个和最后一个都为1，中间需要计算。