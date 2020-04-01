//leetcode���Խ��߱���
//��Ŀ������
//����һ������ M x N ��Ԫ�صľ���M �У�N �У������ԶԽ��߱�����˳�򷵻���������е�����Ԫ�أ��Խ��߱�������ͼ��ʾ��
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
//		for (int i = 0; i<m + n - 1; ++i)   //����Խ�������
//		{
//			arr.clear();  //�洢ÿ���Խ��ߵ����ݣ�֮�����������������Ҫ��ת�öԽ����ϵ�����
//			int row = i<n ? 0 : i - n + 1;      //��������жϲ�����
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
//����˼·��
//�Խ��ߵ����ͷ�ת
//�����Ͻǿ�ʼ�������������ĶԽ������������ѷ��֣�����Ϊ��������֮��-1.
//֪���Խ����������������ѭ�����ƶԽ������������Ƿ��֣������ϽǵĶԽ���Ϊ�ֽ��ߣ�֮ǰÿ���Խ��ߵĿ�ʼλ�ú�֮��
//�Ĺ��ɲ�ͬ���������Ŀ����������жϡ������Ͻ�֮ǰ����ÿ���Խ��ߵĿ�ʼ�����궼Ϊ0��������Ϊ��ǰ����(��0��ʼ��)
//�����Ͻ�ָ�£���ʼ������Ϊ(��ǰ�ĶԽ�����������-�ܹ�����+1������ʼ������Ϊ�ܹ�����-1.
//֪��ÿ���Խ��ߵ���ʼλ�ú󣬿�ʼ����ѭ������ѭ������ÿ���Խ����ϵĸ�������Ҫ��������Ϊ�������겻��С�ڵ���-1����
//���겻�ܳ��������������
//�����ǰ��մ����ϵ����µ�˳��ÿ���Խ��ߵ�Ԫ�ؼ�������arr,���ǻ���Ҫ��ת��Щ�Խ����ϵ�Ԫ�أ������жϵã�������Ϊ
//ż������ת������ж��Ƿ�ת���Ԫ�����μ��뵽����nums�С�





//leetcode:��������
//��Ŀ������
//����һ������ m x n ��Ԫ�صľ���m ��, n �У����밴��˳ʱ������˳�򣬷��ؾ����е�����Ԫ�ء�
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
//����˼·��
//һȦһȦ�ı���������㣬��4���������ƾ�������Ͻǵ���������½ǵ����꣬����4��forѭ��������˳ʱ��ӵ�һ�п�ʼ������
//�����whileѭ�����ƽ������������������ʱ��������ѭ����
//ע�⣺while�ж��У�һ��Ҫ������ȣ���Ϊ����3*3�ľ������ʣ�����ĵ�һ��Ԫ�أ���ʱ���Ͻǵ�����������½ǵ����ꡣ




//leetcode:�������
//����һ���Ǹ����� numRows������������ǵ�ǰ numRows �С�
//����������У�ÿ�����������Ϸ������Ϸ������ĺ͡�
//���� : 5
// ��� :
//	[
//		[1],
//		[1, 1],
//		[1, 2, 1],
//		[1, 3, 3, 1],
//		[1, 4, 6, 4, 1]
//	]
//
//**********����һ��
//class Solution {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>>nums(numRows);      //������numRows�����飬����ÿ������û��Ԫ�أ�size=0
//		//vector<vector<int>> nums(numRows,vector<int>());   //Ҳ�����������ٿռ䣬��ʾ����numRows�У�ÿ��0��Ԫ��
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
//����˼·��
//�����ά����ʱ����ȷ�����ٵ�����(����numRows)�����Ų���forѭ��Ϊÿһ�п��ٿռ䣬�������ӷ���ÿ��Ԫ�صĸ������ǵ�
//����+1(�����ӵ�0�п�ʼ)����Ϊÿ�п��ٿռ��ͬʱΪÿ�еĵ�һ�������һ��Ԫ��(�պ��ڶԽ�����)��ʼ��Ϊ1�����Ŵӵ�2
//�п�ʼ����ÿ��λ�ö�Ӧ��ֵ��
//
//**********��������
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
//����˼·��
//���ó�ʼ��ֵ��������˫��forѭ���У�����Ԫ��˳�����μ����Ӧ��ֵ��ÿ�е�һ�������һ����Ϊ1���м���Ҫ���㡣