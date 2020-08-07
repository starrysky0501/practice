//题目描述
//给定k个有序数组, 每个数组有个N个元素，找出一个最小的闭区间，使其包含每个数组中的至少一个元素。
//给定两个区间[a, b], [c, d]：
//如果 b - a < d - c，则认为[a, b]是更小的区间；
//如果 b - a == d - c，且a < c，则认为[a, b]是更小的区间。
//输入描述 :
//K
//N
//x11 x12 x13 ... x1n
//...
//xk1 xk2 xk3 ... xkn
//输出描述 :
//两个数，分别为最小区间的左右边界
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
//	//多路归并，利用优先队列
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
