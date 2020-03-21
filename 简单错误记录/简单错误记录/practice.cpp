//牛客：简单错误记录

//题目描述：
//开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号。        
//处理：
//1.记录最多8条错误记录,循环记录(或者说最后只输出最后出现的八条错误记录),对相同的错误记录(净文件名称和行号完全匹配)只记录一条，错误计数增加；       
//2.超过16个字符的文件名称，只记录文件的最后有效16个字符；        
//3.输入的文件可能带路径，记录文件名称不能带路径。
//输入描述 :
//一行或多行字符串。每行包括带路径文件名称，行号，以空格隔开。
//输出描述 :
//将所有的记录统计并将结果输出，格式：文件名 代码行数 数目，一个空格隔开，如：

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct err
{
	string name;
	int row;
	int count;
};
int find(vector<err> &v, err er)
{
	for (int i = 0; i<v.size(); ++i)
	{
		if (v[i].name == er.name && v[i].row == er.row)
		{
			return (++v[i].count);
		}
	}
	return 1;
}
int main()
{
	string name;
	int num;
	vector<err> v;
	while (cin >> name >> num)
	{
		string Name;
		for (int i = name.size() - 1; i >= 0; --i)
		{
			if (name[i] == '\\')
			{
				break;
			}
			if (Name.size()<16)
			{
				Name.push_back(name[i]);   //倒着插入
			}
		}
		reverse(Name.begin(), Name.end());   //翻转
		err er;
		er.name = Name;
		er.row = num;
		er.count = find(v, er);
		if (er.count == 1)
		{
			v.push_back(er);
		}
	}
	if (v.size() <= 8)
	{
		for (int i = 0; i<v.size(); ++i)
		{
			cout << v[i].name << " " << v[i].row << " " << v[i].count << endl;
		}
	}
	else
	{
		for (int i = v.size() - 8; i<v.size(); ++i)
		{
			cout << v[i].name << " " << v[i].row << " " << v[i].count << endl;
		}
	}
	return 0;
}

//该题坑点比较多：
//记录最多8条错误记录：根据试错判断发现，其实是可以记录多条，当记录大于8条时，但是输出只是输出最后8个。
//输出应在while循环外，系统自己检测时会退出while循环
//写reverse函数时，注意加上头文件 #include<algorithm>

//该题思路：
//首先输入文件路径和行号，然后对文件路径进行判断，创建一个string变量，逆序将文件名添加到新的字符串中，并且满足，字符个数不超过
//16个。这块的if先后顺序注意。接着创建一个结构体，该结构体包含文件名，行号，以及错误计数，因为必须需要满足当文件名和行号相同时
//只改变错误计数，只在数组中记录一条，然后需要一个函数find判断，该错误记录已存在几条，如果存在，则更新数组中的条数，如果遍历完毕
//发现，该记录不存在，则在返回1，并且在主函数中将该记录加入到数组中。接着，请注意，输出一定在while循环外部，根据报错样例，发现
//当记录条数超过8条时，则只输出后8条记录；否则，遍历全部输出，记录之间使用换行分隔.

//知识点补充：
//reverse()函数：
//作用：reverse函数用于反转在[first,last)范围内的顺序（包括first指向的元素，不包括last指向的元素）
//头文件：#include<algorithm>
//使用方式：容器类型的要用begin()和end()来指定反转的区域；数组类型的直接用int类型即可
//1.交换vector容器中元素顺序
//vector<int> v = { 5, 4, 3, 2, 1 }; reverse(v.begin(), v.end());//v的值为1,2,3,4,5
//2.交换string字符串中元素的顺序
//string str = "www.mathor.top"; reverse(str.begin(), str.end());//str结果为pot.rohtam.wwww
//3.交换字符数组char[]中元素的顺序
//char a[101] = “hello world”; reverse(a, a + strlen(a));
