//ţ�ͣ������ֵܵ���(����)

//�������� :
//�������ֵ��е��ʵĸ���n��������n��������Ϊ�ֵ䵥�ʡ�
//������һ�����ʣ����������ֵ����ֵܵ��ʵĸ���m
//����������k
//�������:
//�������룬������ҵ����ֵܵ��ʵĸ���m
//Ȼ��������ҵ����ֵܵ��ʵĵ�k�����ʡ�

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool isbrother(string str1,string str2)
{
	if (str1 == str2)
		return false;
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	if (str1 == str2)
		return true;
	else
		return false;
}

int main()
{
	int num;
	while (cin >> num)
	{
		string word;
		vector<string> dic;
		for (int i = 0; i<num; ++i)
		{
			cin >> word;
			dic.push_back(word);
		}
		string bro, end;
		int index, count = 0;
		cin >> bro;
		cin >> index;
		sort(dic.begin(), dic.end());
		for (int i = 0; i<dic.size(); ++i)
		{
			if (isbrother(dic[i], bro))
			{
				count++;
				if (index == count)
					end = dic[i];
			}
		}
		cout << count << endl;
		if (count >= index)           //���ֵܵ��ʵĸ���С����Ҫ������±�ʱ���򲻽������������Ҫ�����ж�
			cout << end << endl;
	}
	return 0;
}

//����˼·��
//���ȣ�����Ŀ�ӵ�Ƚ϶࣬���ע�⻻�У����ҽ��б߽��ж�
//������ĵ��ʴ����vector�У���vector�����ֵ�����sort�㷨���string���������ֵ�����(����ڶ����������),����
//��vector�е����ݽ��б������ж��Ƿ������ֵܵ���(�ַ�������ȣ����������ȣ��ַ�֮�佻��λ�ú����)���жϵķ���
//Ҳ��һ�����������ж��Ƿ���ȣ�����Ƚ��Ŷ������ַ�������sort����֮�������ȣ���Ϊ�ֵܵ��ʡ���count��¼�ֵܵ�
//�ʵĸ�������count��K���ʱ��������Ҫ���ҵĵ��ʡ�
