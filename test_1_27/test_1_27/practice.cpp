//2018У�����⣺���������

//��Ŀ���������������ַ�����ʾ�ķǳ���Ĵ�����, ������ǵĳ˻���Ҳ�����ַ�����ʾ��������ϵͳ�Դ��Ĵ��������͡�
//�����������ո�ָ��������ַ������������������������
//�������������ĳ˻������ַ�����ʾ

//#include<stdio.h>
//#include<string>
//#include<iostream>
//using namespace std;
//const int L = 11000;
//string mul(string, string);
//int main(){
//	string x, y;
//	while (cin >> x >> y)
//		cout << mul(x, y) << endl;
//}
//string mul(string a, string b) {
//	string s;
//	int na[L], nb[L], nc[L], La = a.size(), Lb = b.size(), i, j;
//	fill(na, na + L, 0); fill(nb, nb + L, 0); fill(nc, nc + L, 0);
//	for (i = La - 1; i >= 0; i--) na[La - i] = a[i] - '0';
//	for (i = Lb - 1; i >= 0; i--) nb[Lb - i] = b[i] - '0';
//	for (i = 1; i <= La; i++)
//	for (j = 1; j <= Lb; j++)
//		nc[i + j - 1] += na[i] * nb[j];
//	for (i = 1; i <= La + Lb; i++)
//		nc[i + 1] += nc[i] / 10, nc[i] %= 10;
//	if (nc[La + Lb]) s += nc[La + Lb] + '0';
//	for (i = La + Lb - 1; i >= 1; i--)
//		s += nc[i] + '0';
//	return s;
//}