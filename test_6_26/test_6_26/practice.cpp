//��Ŀ����
//����N����ά�����(��������x, y, z)���ҵ�λ��ͬһ��ֱ���ϵ��������
//�������� :
//��һ�����������ĸ���N����2~N + 1������N���㣨��ʽΪ x y z����0 < N < 2000; -10000 < x, y, z < 10000
//�������:
//λ��ͬһ��ֱ���ϵĵ��������

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
//	//����ʹ��()/()==()/()==()/()�ķ�ʽ�����Ƿ���ͬһ��ֱ����
//	//Ҳ������O(N^3)�ĸ��Ӷȣ������޷�����
//	vector<int> record(vec.size(), 0);
//	//map<int, map<int��map<int, int>>> lines;
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
//				overlaps++;//����
//				continue;
//			}
//
//			int commonGcd = gcd(dx, dy, dz);
//			//0��һ���������Լ�������������
//			dx /= commonGcd;
//			dy /= commonGcd;
//			dz /= commonGcd;
//
//			//����vec[i]���ֱ��,������������Ϊ(dx,dy,dz)��ֱ��
//			//���������ֻ���������map����
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
//		//Ϊʲôֻ�㵱ǰ��͵�ǰ��֮��ĵ���ɵ�ֱ�߾Ϳ��Լ�������
//		//���������֪�������ǰ������Ǿ���ֱ�����ģ���ôǰ��һ����һ����
//		//������ֱ�߱ȵ�ǰ������Ҫ�࣡
//		lines.clear();
//	}
//	cout << out << endl;
//	return 0;
//}