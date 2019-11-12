//统计回文
//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	string a,b;
//	int j = 0, count = 0, sumcount = 0;
//	getline(cin, a);
//	getline(cin, b);
//	for (int i = 0; i <= a.size(); i++)
//	{
//		a.insert(i, b, 0,b.size());
//		int left = 0, right = a.size() - 1;
//		while (left <= right)
//		{
//			if (a[left] != a[right])
//				break;
//			while(a[left] == a[right] && left<=right)
//			{
//				left++;
//				right--;
//			}
//		}
//		if ((left - right) == 1  || (left-right)==2)
//		{
//			sumcount++;
//		}
//		a.erase(i, b.size());
//	}
//	cout << sumcount << endl;
//	system("pause");
//	return 0;
//}

//string &insert(int p0, const string &s, int pos, int n);
//string& erase ( size_t pos = 0, size_t n = npos );

