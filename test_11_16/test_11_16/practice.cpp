//两种排序方法
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdlib.h>
using namespace std;
bool cmp(string a, string b)
{
	return a < b;
}
bool LengthSort(vector<string> a, int n)
{
	int i = 0;
	while (i<n - 1)
	{
		if (a[i].size()<a[i + 1].size())
			i++;
		else
			return false;
	}
	return true;
}
bool DictSort(vector<string> a, int n)
{
	int i = 0;
	string b[100];
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	sort(b, b+n);
	while (i<n)
	{
		if (b[i] == a[i])
		{
			i++;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n = 0;
	cin >> n;
	vector<string> arr;
	arr.resize(n);
	for (int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	if (LengthSort(arr, n) && DictSort(arr, n))
	{
		cout <<"both"<< endl;
	}
	else if (LengthSort(arr, n))
	{
		cout <<"lengths"<< endl;
	}
	else if (DictSort(arr, n))
	{
		cout <<"lexicographically"<< endl;
	}
	else
	{
		cout << "none" << endl;
	}
	system("pause");
	return 0;
}
