//题目描述:
//小Q在学习许多排序算法之后灵机一动决定自己发明一种排序算法，小Q希望能将n个不同的数排序为升序。小Q发明的排序算法在每轮允许两种操作：
//1、 将当前序列中前n - 1个数排为升序
//2、 将当前序列中后n - 1个数排为升序
//小Q可以任意次使用上述两种操作，小Q现在想考考你最少需要几次上述操作可以让序列变为升序。
//输入描述 :
//输入包括两行，第一行包括一个正整数n(3≤n≤10 ^ 5)，表示数字的个数
//第二行包括n个正整数a[i](1≤a[i]≤10 ^ 9)，即需要排序的数字，保证数字各不相同。
//输出描述 :
//输出一个正整数，表示最少需要的操作次数
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
