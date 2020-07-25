//题目描述
//科室素拓进行游戏，游戏规则如下：随机抽取9个人作为游戏参与人员，分别编号1至9，每轮要求k(k <= 9且k >= 0)个人自由组合使编号之和为n。输出满足规则的所有可能的组合。要求组合内部编号升序输出，组合之间无顺序要求。
//输入描述 :
//输入数据为以空格分隔的两个整数k和n
//输出描述 :
//每行输出一个可能的编号组合，组合内部各个编号以空格分隔升序输出。若无满足规则的组合，则输出None
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//void help(vector<vector<int>>& res, vector<int> gp, int num, int left, int index)
//{
//	if (num <= 0)
//		return;
//	for (int i = index; i <= 9; i++)
//	{
//		if (i<left&&num>0)
//		{
//			gp.push_back(i);
//			help(res, gp, num - 1, left - i, i + 1);
//			gp.pop_back();
//		}
//		else if (i == left&&num == 1)
//		{
//			gp.push_back(i);
//			res.push_back(gp);
//			return;
//		}
//		else
//			return;
//	}
//	return;
//}
//
//int main()
//{
//	int k, n;
//	cin >> k >> n;
//	vector<vector<int>> res;
//	vector<int> tmp;
//	help(res, tmp, k, n, 1);
//	int len = res.size();
//	if (len != 0)
//	{
//		for (int i = 0; i<len; i++)
//		{
//			for (int j = 0; j<k - 1; j++)
//				cout << res[i][j] << " ";
//			cout << res[i][k - 1] << endl;
//		}
//	}
//	else
//		cout << "None";
//	return 0;
//}
