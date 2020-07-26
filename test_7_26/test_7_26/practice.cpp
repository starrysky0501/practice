//题目描述
//现在信用卡开展营销活动，持有我行信用卡客户推荐新户办卡，开卡成功后可获得积分奖励。规定每个客户最多可推荐两个新户且一个新户只能被推荐一次。但允许链接效应，即若客户A推荐了新户B，新户B推荐新户C，则客户C同时属于A和B的推荐列表。简单起见，只考虑以一个老客户A作起点推荐的情况。编程计算推荐新户数不小于n的客户列表。
//输入描述 :
//输入的第一行为以空格分隔的两个正整数，第一个表示原始推荐列表的个数m，第二个表示n的取值。
//其后m行每行均为一个以空格分隔的原始推荐列表，第一列为推荐人，后面两列为被推荐人，若该推荐人只推荐了一个新户，则第三列以*替代。推荐人和被推荐人均以大写字母表示，不同字母代表不同的人。
//输出描述 :
//在同一行输出符合条件的客户列表，无顺序要求，客户间以空格分隔。若客户列表为空，则输出None。详见样例。
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int getNum(char ch, map<char, vector<char>>&m, vector<char>&ret, int n)
//{
//	if (m.find(ch) == m.end())
//	{
//		if (0 >= n)ret.push_back(ch);
//		return 0;
//	}
//	int len = m[ch].size();
//	int curNum = 0;
//	for (int i = 0; i<len; i++)
//	{
//		curNum += getNum(m[ch][i], m, ret, n) + 1;
//	}
//	if (curNum >= n)ret.push_back(ch);
//	return curNum;
//}
//int main()
//{
//	int m, n; cin >> m >> n;
//	map<char, vector<char>>hash;
//	for (int i = 0; i<m; i++)
//	{
//		char x, y, z;
//		cin >> x >> y >> z;
//		if (z != '*')hash[x] = vector<char>{y, z};
//		else hash[x] = vector<char>{y};
//	}
//	vector<char>ret;
//	getNum('A', hash, ret, n);
//	sort(ret.begin(), ret.end());
//	if (ret.empty())cout << "None" << endl;
//	else{
//		for (int i = 0; i<ret.size(); i++)
//		{
//			if (i == 0)cout << ret[i];
//			else cout << " " << ret[i];
//		}
//		cout << endl;
//	}
//}
