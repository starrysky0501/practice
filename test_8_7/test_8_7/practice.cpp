//��Ŀ����
//����k����������, ÿ�������и�N��Ԫ�أ��ҳ�һ����С�ı����䣬ʹ�����ÿ�������е�����һ��Ԫ�ء�
//������������[a, b], [c, d]��
//��� b - a < d - c������Ϊ[a, b]�Ǹ�С�����䣻
//��� b - a == d - c����a < c������Ϊ[a, b]�Ǹ�С�����䡣
//�������� :
//K
//N
//x11 x12 x13 ... x1n
//...
//xk1 xk2 xk3 ... xkn
//������� :
//���������ֱ�Ϊ��С��������ұ߽�
//#include <iostream>
//#include <vector>
//#include <climits>
//#include <queue>
//using namespace std;
//
//struct Point{
//	int x;
//	int row;
//	int column;
//	Point(int x_, int r, int c) :x(x_), row(r), column(c){}
//};
//
//struct cmp
//{
//	bool operator()(Point p1, Point p2)
//	{
//		return p1.x>p2.x;
//	}
//};
//
//int main()
//{
//	//��·�鲢���������ȶ���
//	int k, n;
//	cin >> k >> n;
//	vector<vector<int>> data(k, vector<int>(n));
//	priority_queue<Point, vector<Point>, cmp> q;
//	for (int i = 0; i<k; ++i)
//	{
//		for (int j = 0; j<n; ++j)
//		{
//			cin >> data[i][j];
//		}
//	}
//	for (int i = 0; i<k; ++i)
//	{
//		int x = data[i][0];
//		Point pt(x, i, 0);
//		q.push(pt);
//	}
//	vector<int> rowexist(k);
//	int left = 0, right = 0, minres = INT_MAX;
//	int count = 0;
//	bool flag = false;
//	queue<Point> tempq;
//	while (!q.empty())
//	{
//		auto cur = q.top();
//		q.pop();
//		tempq.push(cur);
//		rowexist[cur.row]++;
//		if (rowexist[cur.row] == 1)
//		{
//			count++;
//			if (count == k)
//			{
//				flag = true;
//			}
//		}
//		while (!tempq.empty() && rowexist[tempq.front().row]>1)
//		{
//			rowexist[tempq.front().row]--;
//			tempq.pop();
//		}
//		if (flag)
//		{
//			int l = tempq.front().x;
//			int r = cur.x;
//			if (r - l<minres)
//			{
//				left = l;
//				right = r;
//				minres = r - l;
//			}
//		}
//
//		if (cur.column<n - 1)
//		{
//			Point pt(data[cur.row][cur.column + 1], cur.row, cur.column + 1);
//			q.push(pt);
//		}
//	}
//	cout << left << " " << right << endl;
//	return 0;
//}
