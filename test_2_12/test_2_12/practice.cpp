//牛客：24点游戏算法

//题目描述：问题描述：给出4个1-10的数字，通过加减乘除，得到数字为24就算胜利
//输入：
//4个1 - 10的数字。[数字允许重复，但每个数字仅允许使用一次，测试用例保证无异常数字]
//输出：
//true or false

//输入描述：输入4个int整数

//输出描述：返回能否得到24点，能输出true，不能输出false

//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool isTwenty_Four(vector<int> a, int num, double res) //此处的res一定为double类型，需要考虑除不尽的情况，当为int，则会发生精度缺失
//{                                                    
//	if (a.empty())  //当数组为空时，就是将4个数已经加减乘除组织好的时候，判断和24是否相等                      
//	{
//		return num == res;
//	}
//	for (int i = 0; i<a.size(); i++)    //在这个for循环内，会将所有的加减乘除情况，全部考虑到
//	{
//		vector<int> b(a);
//		b.erase(b.begin() + i);
//		if (isTwenty_Four(b, num, res + a[i]) || isTwenty_Four(b, num, res - a[i])
//			|| isTwenty_Four(b, num, res*a[i]) || isTwenty_Four(b, num, res / a[i]))   //不用考虑除数是否为0，因为除数是a[i]，题目已知四个数为1-10的int型整数
//		{
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	vector<int> a(4, 0);
//	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
//	{
//		if (isTwenty_Four(a, 24, 0))
//		{
//			cout << "true" << endl;
//		}
//		else
//		{
//			cout << "false" << endl;
//		}
//	}
//}