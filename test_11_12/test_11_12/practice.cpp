//Í³¼Æ»ØÎÄ
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
//		if ((left - right) == 1  || (left-right)==2)      //注意满足情况的有两个，因为数组分奇数和偶数个。当为奇数时，之间的差距为2，
//		{                                                 //当为偶数时，之间差距是1.
//			sumcount++;
//		}
//		a.erase(i, b.size());
//	}
//	cout << sumcount << endl;
//	system("pause");
//	return 0;
//}

//注意：巧用string的insert和erase函数
//string &insert(int p0, const string &s, int pos, int n);
//string& erase ( size_t pos = 0, size_t n = npos );

