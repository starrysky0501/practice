//��ָoffer���������ų���С����

//��Ŀ������һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
//������������{3��32��321}�����ӡ���������������ųɵ���С����Ϊ321323��

//class Solution {
//public:
//	static bool cmp(int a, int b)
//	{
//		string A = "";
//		string B = "";
//		A += to_string(a);
//		A += to_string(b);
//		B += to_string(b);
//		B += to_string(a);
//		return A<B              
//	}
//	string PrintMinNumber(vector<int> numbers) {
//		string result = "";
//		sort(numbers.begin(), numbers.end(), cmp);
//		for (int i = 0; i<numbers.size(); i++)
//		{
//			result += to_string(numbers[i]);
//		}
//		return result;
//	}
//};

//˼·����vector�����ڵ����ݽ������򣬰����ַ����ĸ�ʽ��������(�ֵ���)
//		����sort����������ʵ��cmp������������a,bת����string����ʽ��
//		��a+b<b+a ����˵��aӦ����b��ǰ��,����ʹ����ֵ��С��
//		���磺2 21  212<221�����������Ϊ21 2
//ע��1:to_string�������Խ���ֵת��Ϊ�ַ�������
//		����ԭ�ͣ�string to_string(int val);
//ע��2:c++��׼���е�string�ǿ���ֱ�ӱȽϴ�С�ģ���Ϊ���ڲ��Ѿ�ʵ���˶Բ�����������