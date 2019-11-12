//排序子序列
//题目理解：递减是a[i]>a[i+1];则非递减就是a[i]<=a[i+1]
//			递增是a[i]<a[i+1];则非递增就是a[i]>=a[i+1]
//该题的思路：找到波峰和波谷的个数，之后+1
//需要注意：1.当该序列的个数为奇数时，则会直接跳过(i==n-3)，永远不会执行else语句；相当于for循环判断出波峰和波谷的个数;
//			最后+1就是有序子序列；当该序列的个数为偶数时，则会到达(i==n-3)条件，会执行else里面的break;跳出for循环，
//          因为n-3包括该位置之前的数据都已判断，所以数组中只剩两个数字，则直接为1个有序序列。
//          2.else语句不可省略,当序列为1,2,1,2,1,2,1,2 时，如果没有break语句，则会使最终值多1。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdlib.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	vector<int> v;
//	int sum = 1;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);   // 将输入的数字放在数组里
//	}
//	for (int i = 1; i<n - 1; i++)
//	{
//		if ((v[i] > v[i - 1] && v[i]>v[i + 1]) ||
//			(v[i] < v[i - 1] && v[i] <v[i + 1]))    //找到波峰或波谷
//		{
//			++sum;
//			if (i != n - 3)
//				++i;
//			else
//				break;
//		}
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}
//经过再次验证：上面所述贪心法解决排序子序列有漏洞，不能解决所有案列
//             例如序列：2 3 3 2 1 1


//#include<iostream>
//#include<vector> 
//#include<stdlib.h>
//using namespace std;
//int main() 
//{
//	int n;
//	cin >> n;  
//	vector<int> a;
//	a.resize(n + 1);
//	a[n] = 0;
//	int i = 0;
//	for (i = 0; i < n; ++i){
//		cin >> a[i];
//	}
//	i = 0;
//	int count = 0;
//	while (i < n){   
//		if (a[i] < a[i + 1])
//		{
//			while (i < n && a[i] <= a[i + 1])
//			{
//				i++;
//			}
//			count++;
//			i++;
//		}
//		else if (a[i] == a[i + 1])
//		{
//			i++;
//		}
//		else
//		{
//			while (i < n && a[i] >= a[i + 1])
//			{
//				i++;
//			}
//			count++;
//			i++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
