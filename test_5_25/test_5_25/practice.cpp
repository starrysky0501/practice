//2018У�����⣺��λ����
//��Ŀ����
//ţţ��һ��������x, ţţ��Ҫ������x�е���λ�������ŵõ�һ������(��ͬ��x����), ţţ��֪����������Ƿ������ԭx�ı������������������������⡣
//�������� :
//�������t + 1��, ��һ�а���һ������t(1 �� t �� 10),
//������t��, ÿ��һ������x(1 �� x �� 10 ^ 6)
//������� :
//����ÿ��x, �����������֮���Ϊ�Լ��ı������"Possible", �������"Impossible".
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int t, mid, l;
//	cin >> t;
//	string s1, s2;
//	while (t--)
//	{
//		cin >> mid;
//		s1 = to_string(mid);
//		sort(s1.begin(), s1.end());
//		for (int i = 2; i <= 10; i++)
//		{
//			l = i*mid;
//			s2 = to_string(l);
//			if (s1.length()>s2.length())
//			{
//				cout << "Impossible" << endl;
//				break;
//			}
//
//			else
//			{
//				sort(s2.begin(), s2.end());
//				if (s1 == s2)
//				{
//					cout << "Possible" << endl;
//					break;
//				}
//			}
//			if (i == 10)
//			{
//				cout << "Impossible" << endl;
//			}
//		}
//	}
//	return 0;
//}