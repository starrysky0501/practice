//2018У�����⣺��������

//��Ŀ���������һ������ֻ�ܱ�1���Լ�����,�ͳ��������������
//���һ�������ŷ��Ŷ���һ��, �ͳ�Ϊ������ǻ�����������:6, 66, 606, 6666
//���һ�����ּ�������Ҳ�ǻ�����, �ͳ�������ǻ�������
//ţţ���ڸ���һ������[L, R], ϣ���������������������ж��ٸ�����������

//�����������������һ��,һ��������������(1 �� L �� R �� 1000)

//������������һ������,��ʾ�����ڻ�������������


//#include<iostream>
//#include<vector>
//using namespace std;
//bool IsPrime(int x)
//{
//	if (x == 0 || x == 1) return false;
//	for (int i = 2; i <= x / 2; i++)
//	if (x % i == 0)
//		return false;
//	return true;
//}
//bool IsRevrse(int x)
//{
//	int temp = 0, xs = x;
//	while (x)
//	{
//		temp = (temp * 10 + x % 10);
//		x = x / 10;
//	}
//	return xs == temp ? true : false;
//}
//int main()
//{
//	int l, r, cnt = 0;
//	cin >> l >> r;
//	for (int i = l; i <= r; i++)
//	if (IsRevrse(i) && IsPrime(i))
//		cnt++;
//	cout << cnt << endl;
//	return 0;
//}