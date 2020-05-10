//2018校招真题：数三角形
//题目描述
//给出平面上的n个点，现在需要你求出，在这n个点里选3个点能构成一个三角形的方案有几种。
//输入描述 :
//第一行包含一个正整数n，表示平面上有n个点（n <= 100)
//第2行到第n + 1行，每行有两个整数，表示这个点的x坐标和y坐标。(所有坐标的绝对值小于等于100，且保证所有坐标不同）
//输出描述 :
//输出一个数，表示能构成三角形的方案数。
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct point
//{
//	int x;
//	int y;
//};
//bool check(point fir, point sec, point th)
//{
//	double len1 = sqrt((fir.x - sec.x)*(fir.x - sec.x) + (fir.y - sec.y)*(fir.y - sec.y));
//	double len2 = sqrt((fir.x - th.x)*(fir.x - th.x) + (fir.y - th.y)*(fir.y - th.y));
//	double len3 = sqrt((th.x - sec.x)*(th.x - sec.x) + (th.y - sec.y)*(th.y - sec.y));
//	double max, mid, min;
//	vector<double> data;
//	data.push_back(len1);
//	data.push_back(len2);
//	data.push_back(len3);
//	sort(data.begin(), data.end());
//	min = data[0], mid = data[1], max = data[2];
//	if (min + mid > max && max - min < mid)
//		return true;
//	else
//		return false;
//}
//int main(void)
//{
//	int len;
//	cin >> len;
//	vector<point> data(len);
//	for (int i = 0; i < len; i++)
//	{
//		int x, y;
//		point ptemp;
//		cin >> x >> y;
//		ptemp.x = x;
//		ptemp.y = y;
//		data[i] = ptemp;
//	}
//	int count = 0;
//	for (int i = 0; i < len - 2; i++)    //点1
//	{
//		for (int j = i + 1; j < len - 1; j++)
//		{
//			for (int k = j + 1; k < len; k++)
//			{
//				if ((data[i].x - data[j].x)*(data[i].y - data[k].y) != (data[i].y - data[j].y)*(data[i].x - data[k].x))
//				{
//					if (check(data[i], data[j], data[k]))
//						count++;
//				}
//			}
//		}
//	}
//	cout << count << endl;
//	return 0;
//}