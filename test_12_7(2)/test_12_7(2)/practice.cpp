/ 牛客：不用加减乘除做加法
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		int carry, add;
//		if (num2 == 0)
//		{
//			return num1;
//		}
//		while (num2 != 0)
//		{
//			add = num1^num2;           //只计算每位的和，不考虑进位，则采用异或的方式，相同为0，不同为1；
//			carry = (num1&num2) << 1;  //计算进位的值，先将两个数进行“与”操作，只有都为1才会是，也才进位；
//			num2 = carry;              //    进位是加到下一位，则整体左移1位，继续进入循环，直到进位的值为0，说明不会产生进位，则停止；
//			num1 = add;
//		}
//		return num1;
//	}
//};




//牛客：三角形
//给定三条边，请你判断一下能不能组成一个三角形。
//输入包含多组数据，每组数据包含三个正整数a、b、c（1≤a, b, c≤10^100）。

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	double edge1, edge2, edge3;
//	double min1, min2;
//	while (cin >> edge1 >> edge2 >> edge3)
//	{
//		vector<double> array(3);
//		array[0] = edge1;
//		array[1] = edge2;
//		array[2] = edge3;
//		sort(array.begin(), array.end());
//		if ((array[0] + array[1])>array[2])       //下面有注解
//		{
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}

//注意：
//组成三角形的条件是任意两边之和大于第三边，任意两边之差小于第三边
//但只需要判断最大的边长度是否小于另外两条边的长度之和
//假设我们保证max<mid+min：
//	  那么max加任意一边长度都会大于第三边，min>max-mid,mid>max-min,max>mid-min.均满足条件。