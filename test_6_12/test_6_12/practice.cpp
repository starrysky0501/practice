//2018校招真题：最小排列
//题目描述
//由数字 1 到 n 组成的一个序列我们称为一个 n 排列。对于两个不同的 n 排列𝐴 = 𝑎1𝑎2 ... 𝑎𝑛和 𝐵 = 𝑏1𝑏2 ... 𝑏𝑛我们可以按字典序比较他们的大小:从前往后找到第一个两个排列中数字不同 的位置，即找到一个位置𝑝使得𝑎1 = 𝑏1, 𝑎2 = 𝑏2, ..., 𝑎𝑝−1 = 𝑏𝑝−1, 𝑎𝑝 = ̸ 𝑏𝑝，若𝑎𝑝 < 𝑏𝑝，我们 则称排列𝐴小于排列𝐵，反之则𝐴大于𝐵。现在给出一个 n 排列，你需要选择排列中的两个不同的位置，然后交换这两个位置的数字， 你需要使得最后得到的排列尽量小。注意你必须进行一次且只能进行一次操作。
//输入描述 :
//第一行包含一个数字𝑛，表示排列的长度。2 ≤ 𝑛 ≤ 105
//第二行包含𝑛个数字构成一个𝑛排列。
//输出描述 :
//输出一个 n 排列，表示能得到的最小的排列。
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void ChangeAndDisplay(vector<int>data, int a, int b)
//{
//	auto it1 = find(data.begin(), data.end(), a);
//	auto it2 = find(data.begin(), data.end(), b);
//	int temp = *it1;
//	data[it1 - data.begin()] = *it2;
//	data[it2 - data.begin()] = temp;
//	for (auto c : data)
//		cout << c << " ";
//	cout << endl;
//}
//int main(void)
//{
//	int len;
//	cin >> len;
//	vector<int> data(len);
//	int temp;
//	for (int i = 0; i < len; i++)
//	{
//		cin >> temp;
//		data[i] = temp;
//	}
//	if (data[0] != 1)
//	{
//		ChangeAndDisplay(data, 1, data[0]);
//	}
//	else
//	{
//		int count = 1;
//		for (int i = 0; i < len; i++)
//		{
//			if (data[i] != count)
//			{
//				ChangeAndDisplay(data, data[i], count);
//				return 0;
//			}
//			count++;
//		}
//		for (int i = 0; i < len - 2; i++)
//		{
//			cout << data[i] << " ";
//		}
//		cout << data[len - 1] << " " << data[len - 2] << endl;
//	}
//	return 0;
//}
