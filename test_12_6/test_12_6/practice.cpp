//ţ�ͣ�����

//��Ŀ����
//����һ������n(2 <= n <= 10000)��Ҫ��������д�1���������֮��(������1���������)��λΪ1�����������û������� - 1��

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> array;
//	int num;
//	while (cin >> num)
//	{
//		for (int i = 11; i<num; i += 10)
//		{
//			int tags = 1;                             //��ע�⣺����ֵ��Ϊ�ֲ���������������Ϊȫ�ֱ���ʱ��һ��Ҫ�ڴ˴���tags��Ϊ1
//			for (int j = 2; j<i; j++)
//			{
//				if (i%j == 0)
//				{
//					tags = 0;
//					break;
//				}
//			}
//			if (tags == 1)
//			{
//				array.push_back(i);
//			}
//		}
//		for (int i = 0; i<array.size(); i++)
//		{
//			cout << array[i];
//			if (i != (array.size() - 1))
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}




//ţ�ͣ���С��K����

//����n���������ҳ�������С��K��������������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��

//class Solution {
//public:
//	void swap(int *a, int *b)
//	{
//		int tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
//		int j = 0;
//		vector<int> topk;
//		if (k <= 0 || k>input.size())        //��ע�⣬��дk���жϣ��ᵼ�������push_back�����е�����ʱջ���
//			return topk;
//
//		while (j<input.size() - 1)
//		{
//			for (int i = 1; i<input.size() - j; i++)
//			{
//				if (input[i - 1]>input[i])
//				{
//					swap(&input[i - 1], &input[i]);
//				}
//			}
//			j++;
//		}
//		//sort(input.begin(),input.end());
//
//		for (int i = 0; i<k; i++)
//		{
//			topk.push_back(input[i]);
//		}
//		return topk;
//	}
//};




//ţ�ͣ��Ǽ�����(��C���Ը�ʽ�������)

//#include<iostream>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> fib;
//	fib.resize(10001);
//	fib[0] = 0;
//	fib[1] = 1;
//	fib[2] = 2;
//	for (int i = 3; i<10001; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//		fib[i] = fib[i] % 10000;              
//	}
//	int total, num;
//	while (cin >> total)
//	{
//		vector<int> val;
//		for (int i = 0; i<total; i++)
//		{
//			cin >> num;
//			val.push_back(num);
//		}
//		for (int i = 0; i<total; i++)
//		{
//			printf("%04d", fib[val[i]]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//�����ĿӦע�⣺
//1.쳲��������е���������40֮������ֵ�ͻ��÷ǳ��ǳ��Ӵ󣬵�������ֻ��Ҫ����λ���֣�����λ���ͱ���Ŀ�޹أ���Ȼ��int�洢���������ȳ���intʱ��
//��λ�����������ôȱʧ���ݣ�������Ӱ�����λ��ȡֵ�����Բ���һλ���ֺ�һλ�������֤����
//2.������4Ϊʱ��Ӧ��0��C�����ж������ĸ�ʽ���������c++Ӧת�����ַ�����+ȥ����



//ţ�ͣ��Ǽ�����(��c++��ʽ�������)
//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	vector<int> fib;
//	fib.resize(10001);
//	fib[0] = 0;
//	fib[1] = 1;
//	fib[2] = 2;
//	for (int i = 3; i<10001; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//		fib[i] = fib[i] % 10000;
//	}
//	int total, num;
//	while (cin >> total)
//	{
//		vector<int> val;
//		for (int i = 0; i<total; i++)
//		{
//			cin >> num;
//			val.push_back(num);
//		}
//		for (int i = 0; i<total; i++)
//		{
//			string as1, as2;
//			as1 = to_string(fib[val[i]]);
//			for (int j = 0; j<4 - as1.size(); j++)
//			{
//				as2 += '0';
//			}
//			as2 += as1;
//			cout << as2;
//		}
//		cout << endl;
//	}
//	return 0;
//}