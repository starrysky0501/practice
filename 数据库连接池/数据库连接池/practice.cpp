//牛客：数据库连接池

//题目描述
//Web系统通常会频繁地访问数据库，如果每次访问都创建新连接，性能会很差。为了提高性能，架构师决定复用已经创建的连接。当收到请求，
//并且连接池中没有剩余可用的连接时，系统会创建一个新连接，当请求处理完成时该连接会被放入连接池中，供后续请求使用，现在提供你处
//理请求的日志，请你分析一下连接池最多需要创建多少个连接。
//输入描述 :
//输入包含多组数据，每组数据第一行包含一个正整数n（1≤n≤1000），表示请求的数量。
//紧接着n行，每行包含一个请求编号id（A、B、C……、Z）和操作（connect或disconnect）。
//输出描述 :
//对应每一组数据，输出连接池最多需要创建多少个连接。

//#include<iostream>
//#include<string>
//#include<set>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		set<string> a;
//		int max_count = 0;
//		while (n--)
//		{
//			string first, second;
//			cin >> first >> second;
//			if (second == "connect")
//			{
//				a.insert(first);       //插入value值，当集合中已有该元素时，则返回该元素所在的位置，不会重复插入
//			}
//			else if (second == "disconnect")
//			{
//				a.erase(first);        //删除value值对应的位置，集合中不存在，则返回end()的位置
//			}
//			int count = a.size();
//			max_count = max(max_count, count);
//		}
//		cout << max_count << endl;
//	}
//	return 0;
//}

//解题思路：
//利用set集合的特性(不存在重复元素),对该集合增加、删除、求元素个数的操作。
//该题需要用两个表变量记录目前元素的个数和集合中元素最多时的个数，两个变量相比较，当目前元素的个数大于集合中元素最多时的个数时，
//更新最多个数的变量。

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		int max_count = 0, count = 0;
//		while (num--)
//		{
//			string a, b;
//			cin >> a >> b;
//			if (b == "connect")
//			{
//				count++;
//			}
//			else if (b == "disconnect")
//			{
//				count--;
//			}
//			max_count = max(max_count, count);
//		}
//		cout << max_count << endl;
//	}
//	return 0;
//}