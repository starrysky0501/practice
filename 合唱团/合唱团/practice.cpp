//牛客：合唱团

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> value(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> value[i];
	}
	int kk, dd;
	cin >> kk >> dd;
	vector<vector<long long>> f(n + 1, vector<long long>(kk + 1));
	vector<vector<long long>> g(n + 1, vector<long long>(kk + 1));

	for (int i = 1; i <= n; ++i)
	{
		f[i][1] = value[i];
		g[i][1] = value[i];
	}

	for (int k = 2; k <= kk; ++k)    //一列一列的初始化值
	{
		for (int one = k; one <= n; ++one)
		{
			long long max_value = LLONG_MIN;
			long long min_value = LLONG_MAX;
			for (int left = max(k - 1, one - dd); left <= one - 1; ++left)
			{
				long long temp1 = max(f[left][k - 1] * value[one], g[left][k - 1] * value[one]);
				if (temp1>max_value)
				{
					max_value = temp1;
				}
				long long temp2 = min(f[left][k - 1] * value[one], g[left][k - 1] * value[one]);
				if (temp2<min_value)
				{
					min_value = temp2;
				}
			}
			f[one][k] = max_value;
			g[one][k] = min_value;
		}
	}

	long long result = LLONG_MIN;
	for (int one = kk; one <= n; ++one)
	{
		if (f[one][kk]>result)
		{
			result = f[one][kk];
		}
	}
	cout << result << endl;
	return 0;
}