//��Ŀ����
//�����Ǹ�����a, b, m, ���û��������������(+-*/ %)�Լ�λ�����������a^b  mod m
//�������� :
//һ�������Ǹ��������ո�ָ�����Ϊa b m��ֵ������m��Ϊ0
//������� :
//a^b  mod m�Ľ��
//#include <cstdio>
//using namespace std;
//int main()
//{
//	long long a, b, m;
//	scanf("%lld%lld%lld", &a, &b, &m);
//	a = a%m;
//	long long result = 1;
//	while (b>0)
//	{
//		if (b % 2 == 1)
//		{
//			result *= a;
//		}
//		result %= m;
//		a = (a*a) % m;
//		b = b / 2;
//	}
//	printf("%lld", result);
//	return 0;
//}
