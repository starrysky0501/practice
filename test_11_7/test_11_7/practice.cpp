//组队竞赛
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//bool cmp(int a, int b)
//{
//	return a>b;
//}
//int main()
//{
//	vector<int> grade;
//	int a;
//	long long total = 0;
//	int n;
//	cin >> n;
//	for (int i = 0; i<3 * n; i++)
//	{
//		cin >> a;
//		grade.push_back(a);
//	}
//	sort(grade.begin(), grade.end(), cmp);
//	int k = 1;
//	while (n--)
//	{
//		total += grade[k];
//		k += 2;
//	}
//	cout << total << endl;
//	return 0;
//}

//sort函数：参数有三个，数组开始位置，结束位置，以及比较方式，默认是升序；
//注意：千万别固化思维，去找规律，从过程转化到结果，按从大到小排序，每三个为一组，次大值则为需要的值，但
//      从头到尾，每次+2,只需走n次。
//易错：题目已知，最后结果可能会很大，所以我们应使用long long存储，防止溢出。
//      long类型在linux下64位是8个字节，32位是4个字节；在vs下64 / 32位都是32个字节



//删除公共字符
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	getline(cin, a);
//	getline(cin, b);
//	for (int i = 0; i<b.size(); i++)
//	{
//		for (int j = 0; j<a.size(); j++)
//		{
//			if (a[j] == b[i] && b[i] != ' ')
//			{
//				a.erase(j, 1);
//				if (j>0)
//				{
//					j--;            //一定要记住
//				}
//				else
//				{
//					j = -1;
//				}
//			}
//		}
//	}
//	cout << a << endl;
//	return 0;
//}
//请注意erase函数：string& erase ( size_t pos = 0, size_t n = npos );  （其中之一的原型）
//第一个参数时位置；第二个参数时需要删除的个数；
//当不写第二个参数时，默认npos，转化位size_t类型，则是整数最大值