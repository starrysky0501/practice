//��Ŀ����
//�������ؽ�����Ϸ����Ϸ�������£������ȡ9������Ϊ��Ϸ������Ա���ֱ���1��9��ÿ��Ҫ��k(k <= 9��k >= 0)�����������ʹ���֮��Ϊn����������������п��ܵ���ϡ�Ҫ������ڲ����������������֮����˳��Ҫ��
//�������� :
//��������Ϊ�Կո�ָ�����������k��n
//������� :
//ÿ�����һ�����ܵı����ϣ�����ڲ���������Կո�ָ������������������������ϣ������None
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
