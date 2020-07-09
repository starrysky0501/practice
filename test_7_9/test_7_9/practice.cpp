//题目描述
//小摩召开了一场招聘会，招聘会现场一共有N个人，Mobike公司给大家准备了一些小礼品。但是我们并不知道每个人具体喜欢什么，
//现在库房共有M种小礼品，每种小礼品有Ci件，共N件。而我们大致知道每个人选择某种小礼品的概率，
//即能知道Pij(编号为i的人选择第j种小礼品的概率)。现在所有人按编号依次领小礼品（第1个人先领，第N个人最后领），
//领小礼品时，参加者会按照预先统计的概率告诉准备者自己想要哪一种小礼品，
//如果该种小礼品在他之前已经发放完了则他会领不到小礼品，请帮我们计算出能能领到小礼品的期望人数。
//输入描述 :
//第一行包含两个整数N(1≤N≤300), M(1≤M≤100)，用单个空格隔开。表示公有N个应聘者，M种小礼品。
//第二行为M个整数，依次为Ci，第i种小礼品的个数。
//接下来的N行，每行M个实数，依次为Pij，第i个人选择第j种小礼品的概率。
//输出描述 :
//一行输出期望人数。结果保留1位小数。

//#include<stdio.h>
//#include<stdlib.h>
//#include<memory.h>
//
//int main()
//{
//	int N, M;
//	scanf("%d%d", &N, &M);
//	int C[M];
//	float P[N][M];
//	memset(C, 0, sizeof(int)*M);
//	memset(P, 0, sizeof(float)*N*M);
//	for (int i = 0; i<M; i++)
//	{
//		scanf("%d", &C[i]);
//	}
//	for (int i = 0; i<N; i++)
//	{
//		for (int j = 0; j<M; j++)
//		{
//			scanf("%f", &P[i][j]);
//		}
//	}
//
//	float p_sel[N + 1];
//	float E_sel = 0;
//	for (int i = 0; i<M; i++)
//	{
//		memset(p_sel, 0.0, sizeof(float)*(N + 1));
//		p_sel[C[i]] = 1.0;
//		for (int j = 0; j<N; j++)
//		{
//			for (int k = 0; k <= C[i]; k++)
//			{
//				if (k == 0)
//					p_sel[k] = p_sel[k] + p_sel[k + 1] * P[j][i];
//				else if (k<C[i])
//					p_sel[k] = p_sel[k] * (1 - P[j][i]) + p_sel[k + 1] * P[j][i];
//				else
//					p_sel[k] = p_sel[k] * (1 - P[j][i]);
//			}
//		}
//		for (int k = 0; k <= C[i]; k++)
//		{
//			E_sel = E_sel + k*p_sel[k];
//		}
//	}
//
//	printf("%.1f", N - E_sel);
//
//	return 0;
//}