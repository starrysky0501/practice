//��Ŀ����
//����һ������ An = a1, a2, ..., an ���ҳ����������ʹ�ö����� i < j ��ai < aj �������������еĳ���
//�������� :
//���������
//������� :
//����������еĳ���
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 7;
//int a[N], tail[N];
//int main() {
//	int i = 1;
//	while (cin >> a[i]) {
//		i++;
//	}
//	int n = i - 1;
//
//	int len = 0;
//	for (int i = 1; i <= n; i++) {
//		int x = a[i];
//
//		int l = 0, r = len;
//		while (l < r) {
//			int mid = l + r + 1 >> 1;
//			if (tail[mid] < x) l = mid;
//			else r = mid - 1;
//		}
//
//		tail[l + 1] = x;
//		len = max(len, l + 1);
//	}
//	cout << len << endl;
//	return 0;
//}
