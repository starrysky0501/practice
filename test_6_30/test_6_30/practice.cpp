//题目描述
//回形数是一个矩阵输出，从矩阵的左上角往右开始打印数字0，遇到矩阵边界时，顺时针90方向继续打印，并数字增长1，如此类推直到把矩阵填满，输入一个整形宽和高单位，每输出一个数字，占用1单位宽高空间，根据入参打印出对应的回形数
//输入描述 :
//矩阵的宽高
//输出描述 :
//回字形的矩阵

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	vector<vector<int>> rec(M);
//	vector<int> temp(N, -1);
//	for (int i = 0; i<M; i++)
//	{
//		rec[i] = temp;
//	}
//	int x = 0, y = 0;
//	int value = 0;
//	int pM = M, pN = N;
//	while (pM != 0 && pN != 0)
//	{
//		for (int i = 0; i<pN; i++)
//		{
//			rec[x][y++] = value;
//		}
//		y--;
//		pM--; value++;
//		if (pM == 0) break;
//		for (int i = 0; i<pM; i++)
//		{
//			rec[++x][y] = value;
//		}
//		pN--; value++;
//		if (pN == 0) break;
//		for (int i = 0; i<pN; i++)
//		{
//			rec[x][--y] = value;
//		}
//		pM--; value++;
//		if (pM == 0) break;
//		for (int i = 0; i<pM; i++)
//		{
//			rec[--x][y] = value;
//		}
//		pN--; value++;
//		y++;
//	}
//	for (auto r : rec)
//	{
//		for (auto s : r)
//			cout << s;
//		cout << endl;
//	}
//}
