//��Ŀ����
//�������ÿ���չӪ����������������ÿ��ͻ��Ƽ��»��쿨�������ɹ���ɻ�û��ֽ������涨ÿ���ͻ������Ƽ������»���һ���»�ֻ�ܱ��Ƽ�һ�Ρ�����������ЧӦ�������ͻ�A�Ƽ����»�B���»�B�Ƽ��»�C����ͻ�Cͬʱ����A��B���Ƽ��б��������ֻ������һ���Ͽͻ�A������Ƽ����������̼����Ƽ��»�����С��n�Ŀͻ��б�
//�������� :
//����ĵ�һ��Ϊ�Կո�ָ�����������������һ����ʾԭʼ�Ƽ��б�ĸ���m���ڶ�����ʾn��ȡֵ��
//���m��ÿ�о�Ϊһ���Կո�ָ���ԭʼ�Ƽ��б���һ��Ϊ�Ƽ��ˣ���������Ϊ���Ƽ��ˣ������Ƽ���ֻ�Ƽ���һ���»������������*������Ƽ��˺ͱ��Ƽ��˾��Դ�д��ĸ��ʾ����ͬ��ĸ����ͬ���ˡ�
//������� :
//��ͬһ��������������Ŀͻ��б���˳��Ҫ�󣬿ͻ����Կո�ָ������ͻ��б�Ϊ�գ������None�����������
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
