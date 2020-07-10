//题目描述
//小摩有一个N个数的数组，他想将数组从小到大 排好序，但是萌萌的小摩只会下面这个操作：
//任取数组中的一个数然后将它放置在数组的最后一个位置。
//问最少操作多少次可以使得数组从小到大有序？
//输入描述 :
//首先输入一个正整数N，接下来的一行输入N个整数。(N <= 50, 每个数的绝对值小于等于1000)
//输出描述 :
//输出一行操作数
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n;
//	cin >> n;
//	vector<pair<int, int>>arr;
//	int k = 0;
//	while (n != 0){
//		int curnum;
//		cin >> curnum;
//		arr.push_back(make_pair(curnum, k++));
//		--n;
//	}
//	sort(arr.begin(), arr.end());
//	int count = 1;
//	while (n + 1<arr.size() && arr[n + 1].second>arr[n].second){
//		count++;
//		++n;
//	}
//	cout << arr.size() - count;
//	return 0;
//}
