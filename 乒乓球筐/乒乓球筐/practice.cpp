//牛客：乒乓球筐(查找)

//问题描述：
//nowcoder有两盒（A、B）乒乓球，有红双喜的、有亚力亚的……现在他需要判别A盒是否包含了B盒中所有的种类，并且每种球的
//数量不少于B盒中的数量，该怎么办呢？
//输入描述 :
//输入有多组数据。每组数据包含两个字符串A、B，代表A盒与B盒中的乒乓球，每个乒乓球用一个大写字母表示，即相同类型的乒
//乓球为相同的大写字母。字符串长度不大于10000。
//输出描述 :
//每一组输入对应一行输出：如果B盒中所有球的类型在A中都有，并且每种球的数量都不大于A，则输出“Yes”；否则输出“No”。

#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string A, B;
	while (cin >> A >> B)
	{
		map<char, int> C, D;
		for (int i = 0; i<A.size(); ++i)
		{
			C[A[i]]++;
		}
		for (int i = 0; i<B.size(); ++i)
		{
			D[B[i]]++;
		}
		bool just = true;
		for (auto it = D.begin(); it != D.end(); ++it)
		{
			if (it->second > C[it->first])      //很巧妙
			{
				cout << "No" << endl;
				just = false;
				break;
			}
		}
		if (just == true)
		{
			cout << "Yes" << endl;
		}
	}
	return 0;
}
//该题思路：定义两个map变量，记录A,B两个字符串之间每个单词的个数，通过map映射记录。接着遍历B字符串，判断该字符串
//的每个字符在A字符串中的个数是否满足要求

//补充：key值不存在，则会自动调用对应类型的默认构造函数，创建新的map映射

//map用法总结：
//1.因为map可以将任何基本类型（包括STL容器）映射到任何基本类型（包括STL容器）也就可以建立string型到int型的映射
//2.但是如果是字符串到整型的映射，必须是string而不是char数组
//3.map容器内元素的访问：
//（1）通过下标访问
//【注意】map的键是唯一的.mp['c'] = 20;
//（2）通过迭代器访问
//map迭代器的使用方式和其他STL容器的迭代器不同，因为map的每一对映射都有两个
//typename，这决定了必须通过一个it来同时访问键和值。事实上，map可以使用it->first来访问
//键，使用it->second来访问值
//4.map会以键的大小从小到大的顺序自动排序
//5.map的键和值是唯一的，而如果一个键需要对应多个值，就只能用multimap
//6.map常用函数
//①find（）：find(key)返回键是key的映射的迭代器
//②erase（）
//(1)删除单个元素
//amp.erase(it), it为需要删除的元素的迭代器
//bmp.erase(key), key为欲删除的映射的键
//cmp.erase('c');
//(2)删除一个区间内的所有元素，还是左闭右开
//③size()：用来获得map中映射的次数
//④clear()：清空
