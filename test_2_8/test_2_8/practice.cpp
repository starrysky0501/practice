//2018校招真题：DNA序列

//题目描述：牛牛又从生物科研工作者那里获得一个任务,这次牛牛需要帮助科研工作者从DNA序列s中找出最短没有出现在DNA
//序列s中的DNA片段的长度。例如:s = AGGTCTA序列中包含了所有长度为1的('A', 'C', 'G', 'T')片段, 但是长度为2的没有
//全部包含, 例如序列中不包含"AA", 所以输出2。

//输入描述：输入包括一个字符串s,字符串长度length(1 ≤ length ≤ 2000),其中只包含'A','C','G','T'这四种字符。

//输出描述：输出一个正整数,即最短没有出现在DNA序列s中的DNA片段的长度。

//#include<iostream>
//#include<string>
//#include<set>
//#include<math.h>
//using namespace std;
//int main(){
//	string x;
//	cin >> x;
//	int i, j, n = x.length();
//	for (i = 1; i <= n; i++){
//		set<string> s;
//		for (j = 0; j <= n - i; j++) s.insert(x.substr(j, i));
//		if (s.size()<(int)pow(4, i)){
//			printf("%d", i); return 0;
//		}
//	}
//}
