//��Ŀ����
//��һ�ֽ���ĸ��������ֵķ�ʽ��'a'->1, 'b->2', ..., 'z->26'��
//���ڸ�һ�����֣������ж����ֿ��ܵ���������
//�������� :
//��������ִ�
//������� :
//���ܵ���������
//#include <iostream>
//#include <string>
//using namespace std;
//int n;
//int DFS(string &s, int pos){
//	if (s[pos] == '0')return 0;
//	if (pos >= n - 1)return 1;
//	if (s[pos] != '1' && s[pos] != '2'){
//		return DFS(s, pos + 1);
//	}
//	else if (s[pos] == '1'){
//		if (s[pos + 1] == '0')return DFS(s, pos + 2);
//		else{
//			return DFS(s, pos + 2) + DFS(s, pos + 1);
//		}
//	}
//	else{
//		if (s[pos + 1] == '0' || s[pos + 1] - '0'>6)return DFS(s, pos + 2);
//		else{
//			return DFS(s, pos + 2) + DFS(s, pos + 1);
//		}
//	}
//
//}
//int main(){
//	string s;
//	while (cin >> s){
//		n = s.size();
//
//		cout << DFS(s, 0) << endl;
//
//	}
//}
