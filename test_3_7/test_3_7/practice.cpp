//牛客：养兔子

//题目描述：已知成熟的兔子每天可以产下一胎兔子。每只小兔子的成熟期为1天。某人领养了1只小兔子。请问第N天后，他将会得到多少只兔子.

//#include<iostream>
//using namespace std;
//int main()
//{
//	long long arr[91];
//	arr[1] = 1;
//	arr[2] = 2;
//	for (int i = 3; i<91; ++i)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	int n;
//	while (cin >> n)
//	{
//		cout << arr[n] << endl;
//	}
//	return 0;
//}

//该题思路:
//找出递推公式
//由于兔子成熟期为1天，因此第i-天的兔子到第i天全部成熟，构成第i天的成熟兔为f(i-1)
//接着计算，第i天有多少只兔子出生。注意，并不是第i-1天的兔子都可以繁殖，只有第i-1成熟的兔子才能进行繁殖，第i-天的成熟兔子
//等于第i-2天的兔子总数，因此第i天新出生的兔子数为f(i-2)
//最终得到的递推关系为f(i)=f(i-1)+f(i-2)

//假如第1天：成熟的兔子为1个
//第二天：成熟的兔子为1个+出生的兔子1个
//第三天：成熟的兔子2个+出生的兔子1个