//输入描述
//第一行为一个整数n，表示要取链表倒数第几位元素
//第二行为一个整数K，表示一共要取多少行的链表
//接下来M行，每行表示一个链表，每个链表中的元素之间用逗号相隔开
//输出描述
//输出指定链表集合的倒数第n个值并求和
//样例输入
//2
//3
//1, 2, 3, 4, 5
//2, 4, 6, 8, 10
//2, 4, 6, 8, 10
//样例输出
//20
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int K;
	cin >> K;
	int num = K;
	vector<string>arr;
	string str;
	getchar();
	while (num--)
	{
		getline(cin, str);
		arr.push_back(str);
	}
	for (int i = 0; i < K; ++i)
	{
		reverse(arr[i].begin(), arr[i].end());
	}
	int total = 0;
	for (int i = 0; i < K; ++i)
	{
		total += (arr[i][(n - 1) * 2 + 1] - '0');
	}
	cout << total << endl;
	system("pause");
	return 0;
}
