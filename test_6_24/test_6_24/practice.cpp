//��Ŀ����
//G�����ڿ���һ���µ�ս������Ϸ���������Ϸ�У���ɫֻ����2�������ƶ����ҡ��¡��ƶ���Ҫ�����ж�������Ϸ��ͼ�ϻ���M*N�����ӣ�����ɫ�ƶ���ĳ��������ʱ���ж����ͻ���ϸ����ϵ�ֵK�� - 100~100�������ж��� <= 0ʱ��Ϸʧ�ܣ�����Ҫ�ӵ�ͼ���Ͻ��ƶ�����ͼ���½�������Ҫ������ʼ�ж�����ע�⣨��ҳ�ʼ������ʼ�����ϽǸ���ʱҲ��Ҫ�����ж�����
//�������� :
//��һ�������������������ʽΪ M N������2~M + 1��ÿ������N��������Ϊ����ֵK���м��Կո�ָ0 < M, N < 1000�� - 100 < K < 100
//������� :
//��ʼ��С�ж���
//#include<iostream>
//#include<queue>
//using namespace std;
//
//#define M 1000
//#define N 1000
//#define MIN -1000000000
//
//int map[M][N];
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int mins = MIN;
//	for (int i = 0; i < m; i++)
//	for (int j = 0; j < n; j++){
//		cin >> map[i][j];
//		if (i == 0 && j > 0)
//			map[i][j] = map[i][j - 1] + map[i][j];
//		else if (i > 0 && j == 0)
//			map[i][j] = map[i - 1][j] + map[i][j];
//		else if (i > 0 && j > 0)
//			map[i][j] = max(map[i - 1][j] + map[i][j], map[i][j - 1] + map[i][j]);
//	}
//	for (int i = 0; i < m; i++)
//	for (int j = 0; j < n; j++){
//		if (i == 0 && j > 0)
//			map[i][j] = min(map[i][j - 1], map[i][j]);
//		else if (i > 0 && j == 0)
//			map[i][j] = min(map[i - 1][j], map[i][j]);
//		else if (i > 0 && j > 0)
//			map[i][j] = min(map[i][j], max(map[i - 1][j], map[i][j - 1]));
//	}
//	mins = map[m - 1][n - 1];
//	if (mins < 0)
//		mins = 1 - mins;
//	else
//		mins = 1;
//	cout << mins;
//
//	return 0;
//}
