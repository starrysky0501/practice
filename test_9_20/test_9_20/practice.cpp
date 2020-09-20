//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//	string S;
//	string T;
//	vector<int> arr(26);
//	cin >> S;
//	getchar();
//	cin >> T;
//	for (int i = 0; i<S.size(); ++i)
//	{
//		arr[S[i] - 'A']++;
//	}
//	int count = 0;
//	for (int i = 0; i<T.size(); ++i)
//	{
//		if (arr[T[i] - 'A']>0)
//		{
//			arr[T[i] - 'A']--;
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}


#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool matches(vector<string> &arr)
{
	int weizhi1, weizhi2;
	char s, ss;
	if (arr[0][0] == arr[1][0])
	{
		if (arr[0][1] == arr[1][1])
		{
			weizhi1 = 0;
			weizhi2 = 1;
			s = arr[0][0];
			ss = arr[0][1];
		}
		else if (arr[0][2] == arr[1][2])
		{
			weizhi1 = 0;
			weizhi2 = 2;
			s = arr[0][0];
			ss = arr[0][2];
		}
	}
	else
	{
		if (arr[0][1] == arr[1][1])
		{
			if (arr[0][2] == arr[1][2])
			{
				weizhi1 = 1;
				weizhi2 = 2;
				s = arr[0][1];
				ss = arr[0][2];
			}
		}
	}
	for (int i = 0; i<arr.size(); ++i)
	{
		if (arr[i][weizhi1] != s || arr[i][weizhi2] != ss)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int count;
	cin >> count;
	while (count--)
	{
		string s;
		cin >> s;
		string tmp;
		vector<string> arr;
		for (int i = 0; i<s.size(); ++i)
		{
			tmp += s[i];
			if ((i + 1) % 3 == 0)
			{
				arr.push_back(tmp);
				tmp = "";
			}
		}
		if (matches(arr))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}