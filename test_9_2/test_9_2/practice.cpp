//����һ������metrix��������ֻ����1��0���������е�1�������ڣ�����һ����n�����ܷ��ڽ�������n��0�������1���ƻ�1�������ڵ�������
//��1 metrix = [1, 0, 0, 0, 1], n = 1���true
//��2 metrix = [1, 0, 0, 0, 1], n = 2���false

//#include <cstdio>
//int metrix[100000];
//int main() {
//	int m, n;
//	while (~scanf("%d", &m)) {
//		for (int i = 0; i < m; ++i) scanf("%d", &metrix[i]);
//		scanf("%d", &n);
//
//		int count = 0;
//		for (int i = 0; i < m; ++i) {
//			if (metrix[i] == 1) continue;
//			if ((i == 0 || metrix[i - 1] == 0) && (i == m - 1 || metrix[i + 1] == 0)) {
//				count++;
//				i++;
//			}
//		}
//		count >= n ? printf("true\n") : printf("false\n");
//	}
//}
