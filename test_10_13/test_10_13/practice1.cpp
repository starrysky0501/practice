//��������
//��һ��Ϊһ������n����ʾҪȡ�������ڼ�λԪ��
//�ڶ���Ϊһ������K����ʾһ��Ҫȡ�����е�����
//������M�У�ÿ�б�ʾһ������ÿ�������е�Ԫ��֮���ö��������
//�������
//���ָ�������ϵĵ�����n��ֵ�����
//��������
//2
//3
//1, 2, 3, 4, 5
//2, 4, 6, 8, 10
//2, 4, 6, 8, 10
//�������
//20
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int K;
	cin >> K;
	int num = K;
	vector<string>arr;
	string str;
	getchar();
	while (num--)
	{
		getline(cin, str);
		arr.push_back(str);
	}
	for (int i = 0; i < K; ++i)
	{
		reverse(arr[i].begin(), arr[i].end());
	}
	int total = 0;
	for (int i = 0; i < K; ++i)
	{
		total += (arr[i][(n - 1) * 2 + 1] - '0');
	}
	cout << total << endl;
	system("pause");
	return 0;
}
