//ţ�ͣ����Թ�

//����һ�������������
//#include<iostream>
//#include<vector>
//#include<limits.h>      //INT_MAX��ͷ�ļ�
//#include<string>
//using namespace std;
//int res = INT_MAX;
//vector<vector<int>> mark(10, vector<int>(10, 0));
//void solve(vector<vector<char>> &road, int sx, int sy, int ex, int ey, int tmp)
//{
//	if (sx<0 || sy<0 || sx >= 10 || sy >= 10 || mark[sx][sy])
//		return;
//	if (road[sx][sy] == '#')
//		return;
//	if (tmp>res)
//		return;
//	if (sx == ex && sy == ey)
//	{
//		if (tmp<res)
//		{
//			res = tmp;
//		}
//		return;
//	}
//	mark[sx][sy] = 1;
//	solve(road, sx + 1, sy, ex, ey, tmp + 1);
//	solve(road, sx, sy + 1, ex, ey, tmp + 1);
//	solve(road, sx - 1, sy, ex, ey, tmp + 1);
//	solve(road, sx, sy - 1, ex, ey, tmp + 1);
//	mark[sx][sy] = 0;        //����ˣ�����һ��Ҫ�ع�0������δ��
//}
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		res = INT_MAX;
//		vector<vector<char>> road(10, vector<char>(10));
//		for (int i = 0; i<10; ++i)
//		{
//			for (int j = 0; j<10; ++j)
//			{
//				if (i == 0)
//				{
//					road[i][j] = s[j];
//				}
//				else
//				{
//					cin >> road[i][j];
//				}
//			}
//		}
//		solve(road, 0, 1, 9, 8, 0);
//		cout << res << endl;
//	}
//}

//����˼·����������һ����¼·����һ����¼�Ƿ��߹������������������ʱ���õ����Ž⣬һ��������������������ʱ��һ��Ҫ��֮ǰ
//����Ϊδ�ߡ�


//�������������������
//#include<iostream>
//#include<queue>
//#include<vector>
//#include<string>
//#include<cstring>
//using namespace std;
//vector<vector<char>> road(10, vector<char>(10));
//int mark[10][10];
//struct node
//{
//	int x;
//	int y;
//	int count;    //��¼·���ĳ���
//};
//queue<node> s;
//int arr[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
//int BFS(int ex, int ey)
//{
//	while (!s.empty())
//	{
//		node t = s.front();
//		s.pop();
//		for (int i = 0; i<4; ++i)
//		{
//			int x = t.x + arr[i][0];
//			int y = t.y + arr[i][1];
//			if (x<0 || y<0 || x >= 10 || y >= 10 || road[x][y] == '#' || mark[x][y] == 1)
//				continue;
//			node n;
//			n.x = x;
//			n.y = y;
//			n.count = t.count + 1;
//			s.push(n);
//			mark[x][y] = 1;
//			if (x == ex && y == ey)
//				return n.count;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	while (cin >> road[0][0])
//	{
//		memset(mark, 0, sizeof(mark));
//		for (int i = 0; i<10; ++i)
//		{
//			for (int j = 0; j<10; j++)
//			{
//				if (i == 0 && j == 0)
//					continue;
//				cin >> road[i][j];
//			}
//		}
//		while (!s.empty())
//			s.pop();
//		node n;
//		n.x = 0;
//		n.y = 1;
//		n.count = 0;   //�沽�������ǽڵ��������������0
//		s.push(n);
//		cout << BFS(9, 8) << endl;
//	}
//	return 0;
//}

//����˼·��
//����ʼλ�ü��뵽�����У������Ƚ��ȳ������ԣ���һ����Ϊ���ģ�����4�������ѡ�񣬵���������һ�������������粻���Գ�����Ե��
//�����Դ˴��߹���������#ʱ��Ҳ�߲�ͨ������Щ����ͳͳ������ʱ���Ϳ��Լ��뵽�����У����ҽ�·�����ȼ�1��ֱ������Ϊ�գ�Ҳû��
//������������û�п��н⡣

//���Ŀ��������ڽ���������޲��ϣ�������������㷨һ���ܱ�֤�ҵ�һ��ͨ���������·������˹�����������㷨�ر�������
//ֻ��������Ž�����⡣��������Ҫ�������·������Ҫ����ÿ��������Դ��Ҳ�������Ǵ���һ���ڵ���չ���ġ�
//Ϊʲô˵������������㷨һ���ܱ�֤�ҵ�һ��ͨ���������·����
//��Ϊ�������������һ��һ������������������ļ�����У��������˳�����ʱ��һ���������·��