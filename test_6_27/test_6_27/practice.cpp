//��Ŀ����
//����ַ�������ȡ�����һ��[img]��ͷ�������һ��[\img]��β���ַ�����δ�ҵ�ƥ����ַ�������"null"
//��������:
//���ܰ���[img][\img]���ַ���
//������� :
//��ȡ����ַ���

//#include<iostream>
//using namespace std;
//int main() {
//	string str;
//	cin >> str;
//	int l = -1, r = -1;
//
//	for (int i = 0; i <= str.size() - 5; i++) {
//		if (str[i] == '[') {
//			if (str[i + 1] == 'i' && str[i + 2] == 'm' && str[i + 3] == 'g' && str[i + 4] == ']') {
//				l = i;
//				i += 4;
//			}
//		}
//	}
//
//	for (int i = str.size() - 6; i >= 0; i--) {
//		if (str[i] == '[') {
//			if (str[i + 1] == '\\' && str[i + 2] == 'i' && str[i + 3] == 'm' && str[i + 4] == 'g' && str[i + 5] == ']') {
//				r = i;
//				i -= 5;
//				break;
//			}
//		}
//	}
//
//	if (l == -1 || r == -1 || l > r)
//		cout << "null";
//	else
//		cout << str.substr(l, r - l + 6);
//	return 0;
//}