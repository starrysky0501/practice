//2018校招真题：序列操作
//题目描述
//有一天你得到了一个长度为 n 的序列，序列中的元素分别是 1, 2, 3, ..., n。接下来你想对这个序 列进行一些操作。每一次操作你会选择一个数然后将它从序列中原来的位置取出并放在序列 的最前面。你想知道经过一系列操作后这个序列长什么样。
//输入描述 :
//第一行包含两个整数𝑛, 𝑚，分别表示序列的长度和操作的个数。1 ≤ 𝑛, 𝑚 ≤ 105
//接下来𝑚行每行包含一个整数𝑘𝑖，表示你要把𝑘𝑖放到序列的最前面。1 ≤ 𝑘𝑖 ≤ 𝑛
//输出描述 :
//从前往后输出序列中的每个元素，每个元素占一行。

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int *book = new int[n + 1];
//	vector<int> v;
//	vector<int> w;
//	vector<int> s;
//	for (int i = 0; i<n; i++)
//		v.push_back(i + 1);
//	for (int i = 0; i<n + 1; i++)
//		book[i] = 0;
//	for (int i = 0; i<m; i++){
//		int tem;
//		cin >> tem;
//		w.push_back(tem);
//	}
//	for (int i = m - 1; i >= 0; i--){
//		if (book[w.at(i)] == 0){
//			book[w.at(i)] = 1;
//			s.push_back(w.at(i));
//			v.at(w.at(i) - 1) = 0;
//		}
//		else continue;
//	}
//	for (int i = 0; i<s.size(); i++)
//		cout << s.at(i) << endl;
//	for (int i = 0; i<n; i++)
//	if (v.at(i) != 0) cout << v.at(i) << endl;
//	return 0;
//}
