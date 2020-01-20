//剑指offer:求1+2+3+...+n

//题目描述：求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。

//class Solution {
//public:
//	int Sum_Solution(int n) {
//		int ans = n;
//		ans && (ans += Sum_Solution(n - 1));
//		return ans;
//	}
//};

//思路：该递归停止的条件是当ans为0时，利用短路求值原理(&&逻辑与有一个短路的特点：就是前面为假，后面不计算)



//另一种思路：利用内部类的特点去实现

////class Solution {
//class Sum
//{
//public:
//	Sum()
//	{
//		++count;
//		sum += count;
//	}
//	static int GetSum()   //此处声明为静态成员函数是因为需要在外部不通过对象调用该函数；该函数是因为，外部的类不能访问内部类的私有成员，所以提供了一个公有接口去访问
//	{
//		return sum;
//	}
//	static void ReSet()   //此处声明为静态成员函数原因同上；每次求和时，应先都置0，否则会将上次的结果计算到新的结果中
//	{
//		count = 0;
//		sum = 0;
//	}
//private:
//	static int count;
//	static int sum;
//};
//public:
//	int Sum_Solution(int n) {
//		Solution::Sum::ReSet();
//		Sum s[n];    //在牛客可以通过，但在自己的vs上不能通过，因为n是一个变量
//		return Solution::Sum::GetSum();
//	}
//};
//int Solution::Sum::count = 0;
//int Solution::Sum::sum = 0;
//
////c++中类中可以嵌套类

