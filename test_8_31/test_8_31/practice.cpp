//��Ŀ����:
//СQ��ѧϰ��������㷨֮�����һ�������Լ�����һ�������㷨��СQϣ���ܽ�n����ͬ��������Ϊ����СQ�����������㷨��ÿ���������ֲ�����
//1�� ����ǰ������ǰn - 1������Ϊ����
//2�� ����ǰ�����к�n - 1������Ϊ����
//СQ���������ʹ���������ֲ�����СQ�����뿼����������Ҫ���������������������б�Ϊ����
//�������� :
//����������У���һ�а���һ��������n(3��n��10 ^ 5)����ʾ���ֵĸ���
//�ڶ��а���n��������a[i](1��a[i]��10 ^ 9)������Ҫ��������֣���֤���ָ�����ͬ��
//������� :
//���һ������������ʾ������Ҫ�Ĳ�������
//#include<iostream>
//#include<vector>
//#include<limits.h>
//#include<algorithm>
//using namespace std;
//
//int solve(vector<int>& nums, int n){
//	vector<int> nums_bak = nums;
//	sort(nums_bak.begin(), nums_bak.end());
//	bool needSort = false;
//	for (int i = 0; i<n; i++){
//		if (nums_bak[i] != nums[i]) needSort = true;
//	}
//	if (!needSort) return 0;
//
//	int maxx = INT_MIN, minn = INT_MAX;
//	for (auto d : nums){
//		if (d>maxx) maxx = d;
//		if (d<minn) minn = d;
//	}
//	if (nums[n - 1] == maxx) return 1;
//	if (nums[n - 1] == minn) return 3;
//	else return 2;
//}
//
//int main(){
//	int n;
//	cin >> n;
//	vector<int> nums(n, 0);
//	for (int i = 0; i<n; i++) cin >> nums[i];
//
//	cout << solve(nums, n) << endl;
//}
