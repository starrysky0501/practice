//2018У�����⣺ƽ����

//��Ŀ����
//���һ���ַ���S���������ַ���T���Ӷ���, ��S = T + T, ���Ǿͳ�S����ƽ����, ����"", "aabaab", "xxxx"����ƽ����.
//ţţ������һ���ַ���s, �������ţţ��s���Ƴ������ٵ��ַ�, ��ʣ�µ��ַ�����һ��ƽ���������仰˵, �����ҳ�s��������в�����������й���һ��ƽ������
//�������� :
//����һ���ַ���s, �ַ�������length(1 �� length �� 50), �ַ���ֻ����Сд�ַ���
//������� :
//���һ��������, ������Ҫ���ƽ�����ĳ��ȡ�
//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<string>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//int dp[55][55];
//int LCS(string s1, string s2) {
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <s1.size(); i++) {
//		for (int j = 1; j <s2.size(); j++) {
//			if (s1[i] == s2[j])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else {
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//			}
//		}
//	}
//	return dp[s1.size() - 1][s2.size() - 1];
//}
//int main()
//{
//	string str, s1, s2;
//	cin >> str;
//	int len = str.length();
//	int ans = 0;
//	for (int i = 1; i < len; i++) {
//		s1 = " " + str.substr(0, i + 1);
//		s2 = " " + str.substr(i + 1);
//		int tmp = LCS(s1, s2) * 2;
//		if (ans<tmp) {
//			ans = tmp;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}