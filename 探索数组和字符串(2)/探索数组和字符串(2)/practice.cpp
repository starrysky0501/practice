//leetcode:�������������������������
//��Ŀ������
//��һ������������nums�У����Ǵ���һ�����Ԫ�� ��
//���������е����Ԫ���Ƿ�������������ÿ���������ֵ�������
//����ǣ��򷵻����Ԫ�ص����������򷵻� - 1��
//
//class Solution {
//public:
//	int dominantIndex(vector<int>& nums) {
//		vector<int> num(nums.begin(), nums.end());
//		sort(num.begin(), num.end());
//		if (num.size() == 1)       //��ֻ��һ��Ԫ��ʱ��ֱ�ӷ����±�����0�����ݲ���������֪
//		{
//			return 0;
//		}
//		if (num.size() >= 2)      //���������м�2����������һ��Ҫ���д��ڵ���2���жϣ�����಻��
//		{
//			int last = num[num.size() - 1];
//			int pre = num[num.size() - 2];
//			if (last >= (2 * pre))
//			{
//				for (int i = 0; i<nums.size(); ++i)
//				{
//					if (last == nums[i])
//					{
//						return i;
//					}
//				}
//			}
//		}
//		return -1;        //��if��ֱ��дreturn����Ҫд��else���棬��Ϊ�Լ�����ܽ�forѭ��˵���д��ڵ�ֵ�����ǵ��Բ���֪������Ϊ������forѭ����������û�к������صĳ��ڣ�����ֱ��дretuurn -1,��Ҫ��else,���ݲ�������֪��
//	}
//};
//����˼·����nums���鿽������һ�������У��Ը������������һ��Ϊ���ֵ�������ڶ���Ϊ�δ�ֵ�������ֵ���ڵ��ڴδ�ֵ�Ķ�����
//��˵�������������ֵ�����ű���ԭ���飬Ѱ�Ҹ�ֵ��Ӧ�������±�




//leetcode����һ
//��Ŀ������
//����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		if (digits.size() == 1 && digits[0] == 0)
//		{
//			digits[0] += 1;
//			return digits;
//		}
//		vector<int> arr;
//		int len = digits.size();
//		for (int i = len - 1; i >= 0; --i)
//		{
//			if (i == len - 1)          //��Ϊ��һ��Ԫ��ʱ�����䴦��
//			{
//				digits[i] += 1;
//			}
//			if (i == 0)                //��Ϊ���һ��Ԫ��ʱ��ֱ�Ӵ�������
//			{
//				if (digits[i] == 10)
//				{
//					arr.push_back(0);
//					arr.push_back(1);
//					break;
//				}
//			}
//			if (digits[i] == 10)
//			{
//				digits[i] = digits[i] % 10;
//				if (i - 1 >= 0)
//				{
//					digits[i - 1] += 1;
//				}
//
//			}
//			arr.push_back(digits[i]);
//		}
//		reverse(arr.begin(), arr.end());
//		return arr;
//	}
//};
//����˼·��
//�Ӻ���ǰ�������飬�Ƚ����һ��Ԫ�ص�ֵ��1������ܻᵼ��ǰ������������λ���������ж�ÿλ��ֵ�Ƿ����10������10ʱ����������
//ֵΪ��������ֵ������ǰһ��������Ӧ��ֵ��һ����Ϊ��һ���������һ��Ԫ��ʱ�����⴦��

//������ע�⣺
//��Ҫ���ñ�������ÿλ���֣�Ȼ�����ǵĺͼ���������Ϊ������ĸ����ܶ�ʱ��long long���͵�sumҲ���ܼ�����ȫ




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//template <size_t n, size_t m>
//void printArray(int(&a)[n][m]) {      //�˴�a��һ�����ã����õ�����ʵ���е�������������д��int& a[n][m],����������һ�����飬�������Ԫ������������,c++��֧��������Ϊ�����е�Ԫ��
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main() {
//	cout << "Example I:" << endl;
//	int a[2][5];
//	printArray(a);
//	cout << "Example II:" << endl;
//	int b[2][5] = { { 1, 2, 3 } };
//	printArray(b);
//	cout << "Example III:" << endl;
//	int c[][5] = { 1, 2, 3, 4, 5, 6, 7 };
//	printArray(c);
//	cout << "Example IV:" << endl;
//	int d[][5] = { { 1, 2, 3, 4 }, { 5, 6 }, { 7 } };
//	printArray(d);
//	system("pause");
//}
