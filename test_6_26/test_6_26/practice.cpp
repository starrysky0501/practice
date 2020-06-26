//题目描述
//给定N个三维坐标点(包含整形x, y, z)，找到位于同一条直线上点的最大个数
//输入描述 :
//第一行输入坐标点的个数N，第2~N + 1行输入N个点（格式为 x y z），0 < N < 2000; -10000 < x, y, z < 10000
//输出描述:
//位于同一条直线上的点的最大个数

//#include <iostream>
//#include <map>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//	if (b == 0)
//		return a;
//	else
//		return gcd(b, a%b);
//}
//
//int gcd(int a, int b, int c)
//{
//	return gcd(a, gcd(b, c));
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<vector<int>>vec(n, vector<int>(3, 0));
//
//	for (int i = 0; i<n; i++)
//	{
//		cin >> vec[i][0] >> vec[i][1] >> vec[i][2];
//	}
//
//	//就算使用()/()==()/()==()/()的方式检验是否在同一条直线上
//	//也出现了O(N^3)的复杂度，可能无法计算
//	vector<int> record(vec.size(), 0);
//	//map<int, map<int，map<int, int>>> lines;
//	map<int, int>lines;
//
//
//	int out = 0;
//	for (int i = 0; i<vec.size() - 1; i++)
//	{
//		int overlaps = 0;
//		int count = 0;
//		for (int j = i + 1; j<vec.size(); j++)
//		{
//
//			auto & points1 = vec[i];
//			auto & points2 = vec[j];
//			int dx = points1[0] - points2[0];
//			int dy = points1[1] - points2[1];
//			int dz = points1[2] - points2[2];
//
//			if (dx == 0 && dy == 0 && dz == 0){
//				overlaps++;//抄的
//				continue;
//			}
//
//			int commonGcd = gcd(dx, dy, dz);
//			//0和一个数的最大公约数是这个数本身
//			dx /= commonGcd;
//			dy /= commonGcd;
//			dz /= commonGcd;
//
//			//经过vec[i]点的直线,且坐标中向量为(dx,dy,dz)的直线
//			//将向量数字化，来进行map索引
//			int sindex = dx * 1234 + dy * 123 + dz * 12;
//			if (lines.count(sindex) > 0)
//			{
//				lines[sindex]++;
//			}
//			else{
//				lines[sindex] = 1;
//			}
//
//		}
//		for (auto& item : lines)
//		{
//			count = max(item.second, count);
//		}
//		out = max(count + 1 + overlaps, out);
//		//为什么只算当前点和当前点之后的点组成的直线就可以计算出结果
//		//画几个点便知！如果当前这个点是经过直线最多的，那么前面一定有一个点
//		//经过的直线比当前这个点的要多！
//		lines.clear();
//	}
//	cout << out << endl;
//	return 0;
//}