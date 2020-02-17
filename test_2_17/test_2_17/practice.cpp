//2018校招真题：拼凑正方形

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[])
//{
//	int a, b, c, d, tmp, ans;
//
//	while (scanf("%d%d%d%d", &a, &b, &c, &d) == 4)
//	{
//		ans = abs(a - b) + abs(a - c) + abs(a - d);
//		tmp = abs(b - a) + abs(b - c) + abs(b - d);
//		ans = (ans < tmp) ? ans : tmp;
//		tmp = abs(c - a) + abs(c - b) + abs(c - d);
//		ans = (ans < tmp) ? ans : tmp;
//		tmp = abs(d - a) + abs(d - b) + abs(d - c);
//		ans = (ans < tmp) ? ans : tmp;
//
//		printf("%d\n", ans);
//	}
//
//	return 0;
//}
