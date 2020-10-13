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
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int K;
	cin >> K;
	int num;
	int total = 0;
	while (K--)
	{
		vector<int> arr;
		do
		{
			cin >> num;
			arr.push_back(num);
		} while (getchar()!='\n');
		total += arr[arr.size() - n];
	}
	cout << total << endl;
	system("pause");
	return 0;
}
