/ ţ�ͣ����üӼ��˳����ӷ�
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		int carry, add;
//		if (num2 == 0)
//		{
//			return num1;
//		}
//		while (num2 != 0)
//		{
//			add = num1^num2;           //ֻ����ÿλ�ĺͣ������ǽ�λ����������ķ�ʽ����ͬΪ0����ͬΪ1��
//			carry = (num1&num2) << 1;  //�����λ��ֵ���Ƚ����������С��롱������ֻ�ж�Ϊ1�Ż��ǣ�Ҳ�Ž�λ��
//			num2 = carry;              //    ��λ�Ǽӵ���һλ������������1λ����������ѭ����ֱ����λ��ֵΪ0��˵�����������λ����ֹͣ��
//			num1 = add;
//		}
//		return num1;
//	}
//};




//ţ�ͣ�������
//���������ߣ������ж�һ���ܲ������һ�������Ρ�
//��������������ݣ�ÿ�����ݰ�������������a��b��c��1��a, b, c��10^100����

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	double edge1, edge2, edge3;
//	double min1, min2;
//	while (cin >> edge1 >> edge2 >> edge3)
//	{
//		vector<double> array(3);
//		array[0] = edge1;
//		array[1] = edge2;
//		array[2] = edge3;
//		sort(array.begin(), array.end());
//		if ((array[0] + array[1])>array[2])       //������ע��
//		{
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}

//ע�⣺
//��������ε���������������֮�ʹ��ڵ����ߣ���������֮��С�ڵ�����
//��ֻ��Ҫ�ж����ı߳����Ƿ�С�����������ߵĳ���֮��
//�������Ǳ�֤max<mid+min��
//	  ��ômax������һ�߳��ȶ�����ڵ����ߣ�min>max-mid,mid>max-min,max>mid-min.������������