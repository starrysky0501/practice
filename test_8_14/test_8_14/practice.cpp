//题目描述
//数列的定义如下：数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
//输入描述 :
//输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，n和m的含义如前所述。
//输出描述 :
//对于每组输入数据，输出该数列的和，每个测试实例占一行，要求精度保留2位小数。
//#include <iostream>
//#include<bits/stdc++.h>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	double first;
//	//cin >> first;
//	double times;
//	//cin >> times;
//	while (cin >> first >> times)
//	{
//		double sum = 0;
//		for (int i  = 0; i<times; i++)
//		{
//			sum  += first;
//			first  = sqrt(first);
//		}
//		//cout<<sum<<endl;
//		//printf("%.2f\n",sum);
//		cout << fixed << setprecision(2) << sum << endl;
//	}
//	return 0;
//}
