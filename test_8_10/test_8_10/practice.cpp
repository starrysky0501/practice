//��Ŀ����
//��������n��ȡ���ɸ�1��n����������͵�������m��������������ϵĸ��������統n = 6��m = 8ʱ����������ϣ�[2, 6], [3, 5], [1, 2, 5], [1, 3, 4]���޶�n��mС��120
//�������� :
//����n��m
//������� :
//��͵���m��������ϵĸ�����
//#include <stdio.h>
//#include <string.h>
//#define maxn 125
//#define maxm 125
//int n, m;
//int dp[maxn][maxm]; //��1~n��ѡ��һЩ��, ��=m����ϸ���
//int main(){
//	int i, j;
//	scanf("%d %d", &n, &m);
//	memset(dp, 0, sizeof(dp));
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= m; j++){
//			if (i >= j)
//				dp[i][j] = dp[j - 1][j] + 1;
//			else
//				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - i];
//		}
//	}
//	printf("%d\n", dp[n][m]);
//	return 0;
//}
