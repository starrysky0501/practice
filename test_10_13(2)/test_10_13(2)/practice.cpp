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
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int K;
	cin >> K;
	int num;
	int total = 0;
	while (K--)
	{
		vector<int> arr;
		do
		{
			cin >> num;
			arr.push_back(num);
		} while (getchar()!='\n');
		total += arr[arr.size() - n];
	}
	cout << total << endl;
	system("pause");
	return 0;
}
