//��Ŀ������
//С��������о��������档������ץȡ����ҳ���ĺ���Ҫ��ȡ��ҳ�������̺��Ĺؼ��ʣ��ؼ���ͨ����һЩ����Ƶ�ʱȽϸ�
//�������ִ����Ƚ϶ࣩ�Ĵʣ���Ƶ�ʣ������ڸ���һ��Ӣ�Ķ��ģ���ͳ�Ƴ��ִ������ĵ��ʣ�����õ��ʺͳ��ִ�����
//ע�⣺��ͳ��ʱ����Ҫ���ֵ��ʵĴ�Сд�������������������Ƶ�ʵĳ��ִ���һ����������ֵ�����С�Ĵʺͳ��ִ�����
//��������
//�������롣
//����һ�ζ��ġ���������1000���ַ���
//�������
//�����Ƶ�ʺ������ֵĴ���������֮���ÿո������
//���һ�������ڶ����д��ڶ��ֲ�ͬ�Ĵ�Сд��ʽ�����Ե�һ�γ��ֵ���ʽΪ׼��
//��������
//Five Little Monkeys Jumping on the Bed.It was bedtime.So five little monkeys took a bath.Five little Monkeys 
//put on their pajamas.
//�������
//Five 3

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	map<string, int>M;
	map<string, int>::iterator iter;
	vector<string> arr;
	vector<string> arr2;
	int change = 0;
	int i = 0;
	while (i<str.length())
	{
		string s;
		while (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )
		{
			s += str[i];
			i++;
		}
		arr2.push_back(s);
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		arr.push_back(s);
		i++;
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		M[arr[i]]++;
	}
	int max_num = 0;
	string max_str;
	for (iter = M.begin(); iter != M.end(); iter++)
	{
		if (iter->second>max_num)
		{
			max_str = iter->first;
			max_num = iter->second;
		}
	}

	cout << max_str << " " << max_num << endl;
	return 0;
}



//��ѧ����
//��Ŀ������
//С������ǳ��ǳ������ġ�����������Ϊ�������������˿�ѧ�������ϯ̨�����������������롢��ѹѹ����Ⱥ����������
//��˼.......������ϯ̨�����е�ѧ������һ��m*n�ľ�������������M��ʾ��Ů����F��ʾ�����������ҳ�ȫ������������
//�������Σ����Ҹ������ε�������
//��������
//�������롣
//��1������m��n��m��n��������1000���м��Կո������
//������m��Ϊһ���ַ���������M��ʾ������F��ʾŮ����
//�������
//���ȫ�����������ɵ���������ε������������ֻ���ҵ���1���������ɵ������Σ������1����
//��������
//5 4
//MMMM
//MMFF
//FMMM
//MMMM
//MFMM
//�������
//4