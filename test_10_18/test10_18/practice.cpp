//��������
//�����һ�н�����һ��������n����ʾ�������еĳ��ȡ�(1 <= n <= 20000)
//����ڶ��а���n���������ո��������ʾ���������У�ÿ�����ľ���ֵ��С��10000��
//�������
//���������һ����������ʾ���ٵĲ���������
//��������
//5
//- 1 2 3 10 100
//�������
//103
//#include <iostream>
//#include <vector>
//#include <algorithm>
////#include <stdlib.h>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> arr;
//	int num;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> num;
//		arr.push_back(num);
//	}
//	sort(arr.begin(), arr.end());
//	int operation = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		operation += abs(arr[i-1] - i);
//	}
//	cout << operation << endl;
//	//system("pause");
//	return 0;
//}


//��������
//�����һ�н���������������n, x, y���м��ÿո�������ֱ��ʾ�����������ͽ�����̭�������䡣(1 <= n <= 50000, 1 <= x, y <= n)
//����ڶ��а���n���������м��ÿո��������ʾ��1��ѡ�ֵ�n��ѡ�ֵĳɼ���(1 <= a_i <= 1000)
//�������
//���������һ�����������������������m������� - 1���������������������С��ֵ��
//��������
//6 2 3
//1 2 3 4 5 6
//�������
//3

//#include <iostream>
//#include <vector>
//#include <algorithm>
////#include <stdlib.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int x, y;
//	cin >> x >> y;
//	int num;
//	vector<int> arr;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> num;
//		arr.push_back(num);
//	}
//	vector<int> qujian;
//	for (int i = x; i <= y; ++i)
//	{
//		qujian.push_back(i);
//	}
//	int start = 0;
//	int end = qujian.size() - 1;
//	bool judge = false;
//	while (start <= end)
//	{
//		if (qujian[start] + qujian[end] == n)
//		{
//			judge = true;
//			break;
//		}
//		else if (qujian[start] + qujian[end] < n)
//		{
//			start++;
//		}
//		else
//		{
//			end--;
//		}
//	}
//	if (judge == true)
//	{
//		sort(arr.begin(), arr.end());
//		cout << arr[qujian[start] - 1] << endl;
//	}
//	else
//	{
//		cout << -1 << endl;
//	}
//	//system("pause");
//	return 0;
//}


//����ְԱ����ʳ��ʱ����������ѡ���Ѿ�����1�˵Ĳ����òͣ�ֻ�е�ÿ�Ų���Ҫô����Ҫô����2��ʱ�����Żῼ�ǿ��ŵĲ�����
//��ŮְԱ����ʳ��ʱ����������ѡ��δ���˵Ĳ����òͣ�ֻ�е�ÿ�Ų�������������1��ʱ�����Żῼ���Ѿ�����1�˵Ĳ�����������Ů
//�����ж��Ų�����ְԱѡ��ʱ������ѡ�����Ĳ����ò͡�
//��������
//��һ������һ������T��1 <= T <= 10������ʾ����������
//ÿ������ռ���У���һ������һ������N��1 <= N <= 500000����
//�ڶ�������һ������ΪN�ҽ���������0��1��2���ַ�������i�����ֱ�ʾ�����i�Ų��������е��ò�������
//����������һ������M��1 <= M <= 2N�ұ�֤�Ŷӵ�ÿ���˽���ʳ��ʱ���пɹ�ѡ��Ĳ�������
//����������һ������ΪM�ҽ�������ĸM��F���ַ��������� i ����ĸΪM�������ڵ� i ����Ϊ���ԣ�������ΪŮ�ԡ�
//�������
//ÿ���������ռM�У��� i �����һ������ j ��1 <= j <= N������ʾ���ڵ� i ���˽�ѡ������� j �Ų����ò͡�
//��������
//1
//5
//01102
//6
//MFMMFF
//�������
//2
//1
//1
//3
//4
//4
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		string zhuozi;
		zhuozi.resize(N);
		for (int i = 0; i < N; ++i)
		{
			cin >> zhuozi[i];
		}
		int M;
		cin >> M;
		string nannv;
		nannv.resize(M);
		for (int i = 0; i < M; ++i)
		{
			cin >> nannv[i];
		}
		vector<int> pailie;
		for (int k = 0; k < M; ++k)
		{
			if (nannv[k] == 'M')  //��
			{
				int i = 0;
				while (i < zhuozi.size())
				{
					if (zhuozi[i] == '1')
					{
						pailie.push_back(i+1);
						zhuozi[i] = '2';
						break;
					}
					i++;
				}
				if (i == zhuozi.size())
				{
					for (int j = 0; j < zhuozi.size(); ++j)
					{
						if (zhuozi[j] == '0')
						{
							pailie.push_back(j+1);
							zhuozi[j] = '1';
							break;
						}
					}
				}
			}
			else  //Ů
			{
				int i = 0;
				while (i < zhuozi.size())
				{
					if (zhuozi[i] == '0')
					{
						pailie.push_back(i+1);
						zhuozi[i] = '1';
						break;
					}
					i++;
				}
				if (i == zhuozi.size())
				{
					for (int j = 0; j < zhuozi.size(); ++j)
					{
						if (zhuozi[j] == '1')
						{
							pailie.push_back(j+1);
							zhuozi[j] = '2';
							break;
						}
					}
				}
			}
		}
		for (int i = 0; i < pailie.size(); ++i)
		{
			cout << pailie[i] << endl;
		}
	}
	system("pause");
	return 0;
}
