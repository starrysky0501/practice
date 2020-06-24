//题目描述
//G社正在开发一个新的战棋类游戏，在这个游戏中，角色只能向2个方向移动：右、下。移动需要消耗行动力，游戏地图上划分M*N个格子，当角色移动到某个格子上时，行动力就会加上格子上的值K（ - 100~100），当行动力 <= 0时游戏失败，请问要从地图左上角移动到地图右下角至少需要多少起始行动力，注意（玩家初始化到起始的左上角格子时也需要消耗行动力）
//输入描述 :
//第一行输入格子行列数（格式为 M N），第2~M + 1行每行输入N个数，作为格子值K，中间以空格分割；0 < M, N < 1000， - 100 < K < 100
//输出描述 :
//初始最小行动力
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
