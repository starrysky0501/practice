//���ֵ�������
//��Ŀ������
//��һ����������ǰ��0����n�����ڽ�n�ĸ�λ���ֵ�˳�����飬����Щ���У��ж��ٸ�����m�ı����� ����112, ���������������112, 121, 211
//��������
//���������������n��m��������������ʾ
//�������
//���һ����������m�ı����ĸ�����
//��������
//112 4
//�������
//1
//��ʾ
//���ݷ�Χ��n��10 ^ 18, 1��m��100
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <stdlib.h>
//using namespace std;
//void curusion(int k, vector<int> &nums, int numsSize, vector<vector<int>> & res, vector<int> &tmp, map<int, int> &mp)
//{
//	if (k == numsSize)
//	{
//		res.push_back(tmp);
//		return;
//	}
//	for (auto &p : mp)
//	{
//		if (p.second == 0)
//			continue;
//		p.second--;
//		tmp.push_back(p.first);
//		curusion(k + 1, nums, numsSize, res, tmp, mp);
//		tmp.pop_back();
//		p.second++;
//	}
//}
//int main()
//{
//	long long n;
//	cin >> n;
//	int m;
//	cin >> m;
//	vector<int> arr;
//	while (n != 0)
//	{
//		arr.push_back(n % 10);
//		n = n / 10;
//	}
//	sort(arr.begin(), arr.end());
//	vector<vector<int>> res;
//	vector<int> tmp;
//	map<int, int> mp;
//	for (int e : arr)
//	{
//		mp[e]++;
//	}
//	curusion(0, arr, arr.size(), res, tmp, mp);
//	vector<long long> v;
//	long long zhi;
//	for (int i = 0; i < res.size(); ++i)
//	{
//		zhi = 0;
//		for (int j = 0; j < res[i].size(); ++j)
//		{
//			zhi *= 10;
//			zhi += res[i][j];
//		}
//		v.push_back(zhi);
//	}
//	int count = 0;
//	for (int i = 0; i < v.size(); ++i)
//	{
//		if (v[i] % m == 0)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}



//��Ŀ������
//����������һ����Ϸ����������Сʦ�����������ж�
//P : Perfect ��������200�֡�
//G : Great �ܰ�����100�֡�
//M : Miss ��������ӷ�Ҳ���۷֣����ۼ�����Miss�ͻ������Ϸ��
//	������һ�ֽ���������������һ����������Perfect֮�󣬺���������Perfect���������250�֣���һ�������Great����Miss����
//	���������¿�ʼ���㡣
//	��������Ǹ�����Ϸ��¼����������ر�أ�ʧ�ܼ�Ϊ��֡�
//PPPPPGPPMP
//#include <iostream>
//#include <string>
//#include <stdlib.h>
//using namespace std;
//int fenshu(string str)
//{
//	int count = 0;
//	int i = 0;
//	while (i < str.size())
//	{
//		if (i < str.size() && str[i] == 'P')
//		{
//			count += 200;
//			i++;
//			if (i < str.size() && str[i] == 'P')
//			{
//				count += 200;
//				i++;
//				if (i < str.size() && str[i] == 'P')
//				{
//					count += 200;
//					i++;
//					while (i < str.size() && str[i] == 'P')
//					{
//						count += 250;
//						i++;
//					}
//				}
//			}
//
//		}
//		if (i < str.size() && str[i] == 'G')
//		{
//			count += 100;
//			i++;
//		}
//		if (i < str.size() && str[i] == 'M')
//		{
//			i++;
//			if (i < str.size() && str[i] == 'M')
//			{
//				i++;
//				if (i < str.size() && str[i] == 'M')
//				{
//					count = 0;
//					cout << count<< endl;
//					return count;
//				}
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	int count = 0;
//	string str;
//	cin >> str;
//	count = fenshu(str);
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//


//��Ŀ������
//����һ�����Թ⻬�ģ��߶Ⱥܸߵĺ��ӣ�����Ϊn�����Ϊ1�������У������1 * 1 * 1�Ĺ⻬���飬�����ÿһ����һ��λ������
//�����ϡ����ڿ��Ϊ1�����ǿ����ö�ά�ַ�ͼ����ʾÿһ�������λ�á�����ͼ��һ������Ϊ4��������7������Ķ�ά�ַ�ͼ
//��'x'�������飬'o'����û�����飩��
//oooo xooo xoxo xxxx
//ÿһ�е��������ֱ�Ϊ3, 1, 2, 1
//����������Ե�ʣ����е�����Ҫô�����Ǻ��ӵ��棬Ҫô��������һ�����顣���ڣ��ں��ӵ��ұ�����һ��ǿ�����������ұ�û����
//�������߽������������ƶ���ֱ��ײ��һ������ͱ߽�ͣ�¡�����һ�Ŷ�άͼ�ϣ������������ַ�ͼ���Ϊ��
//oooo
//ooox
//ooxx
//xxxx
//ÿһ�е��������ֱ�Ϊ1, 1, 2, 3������֤����������������������Ҫô�����Ǻ��ӵ��棬Ҫô��������һ�����顣 ���ڸ����ʼ
//ÿһ���ж��ٸ����飬������㣬���������ÿһ���ж������顣
//��������
//�����һ�а���һ����n��������ӵĳ��� ������n�������ո����������ÿһ��ԭ���ж��ٸ����顣
//�������
//���n�������ո������������������ÿһ���ж��ٸ����顣
//��������
//4
//3 1 2 1
//�������
//1 1 2 3


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int length;
//	cin >> length;
//	vector<int>arr;
//	int num;
//	while (length--)
//	{
//		cin >> num;
//		arr.push_back(num);
//	}
//	sort(arr.begin(), arr.end());
//	for (int i = 0; i<arr.size(); ++i)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}