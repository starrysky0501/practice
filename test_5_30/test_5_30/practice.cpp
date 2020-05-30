//2018–£’–’ÊÃ‚£∫≥È≈∆
//#include <stdio.h>
//#include <malloc.h>
//double expectation(double p, double q, int *a, int n)
//{
//	int i, k, l;
//	double *b, *c, *d;
//	b = (double *)malloc(sizeof(double)*n);
//	c = (double *)malloc(sizeof(double)*n);
//	if (n % 2 == 0)
//	{
//		for (i = 0; i<n - 1; i++)
//			b[i] = p*a[i] + (1 - p)*a[i + 1];
//		k = 1;
//		l = n;
//	}
//	else
//	{
//		for (i = 0; i<n; i++)
//			b[i] = a[i];
//		k = 0;
//		l = n;
//	}
//	for (; k<l - 1;)
//	{
//		k = k + 2;
//		for (i = 0; i<l - k; i++)
//			c[i] = p*a[i] + p*q*b[i + 2] + (p*(1 - q) + (1 - p)*q)*b[i + 1] + (1 - p)*a[i + k] + (1 - p)*(1 - q)*b[i];
//		d = c;
//		c = b;
//		b = d;
//	}
//	return b[0];
//}
//
//int main()
//{
//	int n, P, Q;
//	double p, q;
//	scanf("%d %d %d", &n, &P, &Q);
//	int *a;
//	a = (int *)malloc(sizeof(int)*n);
//	int i;
//	for (i = 0; i<n; i++)
//		scanf("%d", &a[i]);
//	p = ((double)P) / 100;
//	q = ((double)Q) / 100;
//	double E;
//	E = expectation(p, q, a, n);
//	printf("%.3f", E);
//	return 0;
//}
