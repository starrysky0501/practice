//题目描述：
//小明最近在研究网络爬虫。当爬虫抓取到网页正文后需要提取网页正文中蕴含的关键词，关键词通常是一些出现频率比较高
//（即出现次数比较多）的词（高频词）。现在给你一段英文短文，请统计出现次数最多的单词，输出该单词和出现次数。
//注意：在统计时不需要区分单词的大小写。如果存在两个或多个高频词的出现次数一样，则输出字典序最小的词和出现次数。
//输入描述
//单组输入。
//输入一段短文。（不超过1000个字符）
//输出描述
//输出高频词和它出现的次数，二者之间用空格隔开。
//如果一个单词在短文中存在多种不同的大小写形式，请以第一次出现的形式为准。
//样例输入
//Five Little Monkeys Jumping on the Bed.It was bedtime.So five little monkeys took a bath.Five little Monkeys 
//put on their pajamas.
//样例输出
//Five 3

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	map<string, int>M;
	map<string, int>::iterator iter;
	vector<string> arr;
	vector<string> arr2;
	int change = 0;
	int i = 0;
	while (i<str.length())
	{
		string s;
		while (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )
		{
			s += str[i];
			i++;
		}
		arr2.push_back(s);
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		arr.push_back(s);
		i++;
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		M[arr[i]]++;
	}
	int max_num = 0;
	string max_str;
	for (iter = M.begin(); iter != M.end(); iter++)
	{
		if (iter->second>max_num)
		{
			max_str = iter->first;
			max_num = iter->second;
		}
	}

	cout << max_str << " " << max_num << endl;
	return 0;
}



//开学典礼
//题目描述：
//小明今天非常非常“开心”，他今天作为新生代表坐上了开学典礼的主席台。看着下面整整齐齐、黑压压的人群，他陷入了
//沉思.......他将主席台下所有的学生看作一个m*n的矩阵，其中男生用M表示，女生用F表示。现在他想找出全部由男生构成
//的正方形，并且该正方形的面积最大。
//输入描述
//单组输入。
//第1行输入m和n，m和n均不超过1000，中间以空格隔开。
//接下来m行为一个字符矩阵，其中M表示男生，F表示女生。
//输出描述
//输出全部由男生构成的最大正方形的面积（如果最大只能找到由1个男生构成的正方形，则输出1）。
//样例输入
//5 4
//MMMM
//MMFF
//FMMM
//MMMM
//MFMM
//样例输出
//4