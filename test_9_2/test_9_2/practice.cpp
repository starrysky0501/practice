//给定一个数组metrix，数组中只包含1和0，且数组中的1都不相邻，输入一个数n，问能否在将数组中n个0替代换成1后不破坏1都不相邻的条件。
//例1 metrix = [1, 0, 0, 0, 1], n = 1输出true
//例2 metrix = [1, 0, 0, 0, 1], n = 2输出false

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
