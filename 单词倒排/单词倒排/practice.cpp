//ţ�ͣ����ʵ���

//��Ŀ����
//���ַ����е����е��ʽ��е��š�
//˵����
//1��ÿ����������26����д��СдӢ����ĸ���ɣ�
//2���ǹ��ɵ��ʵ��ַ�����Ϊ���ʼ������
//3��Ҫ���ź�ĵ��ʼ������һ���ո��ʾ�����ԭ�ַ��������ڵ��ʼ��ж�������ʱ������ת����Ҳֻ�������һ���ո�������
//4��ÿ�������20����ĸ��
//�������� :
//����һ���Կո����ָ��ľ���
//������� :
//������ӵ�����

#include<iostream>
#include<vector>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		vector<string> word;
		string tmp;
		for (int i = 0; i<str.size(); ++i)
		{
			if (isupper(str[i]) || islower(str[i]))   
			{
				tmp += str[i];
			}
			else
			{
				if (tmp.size()>0)
				{
					word.push_back(tmp);
					tmp = "";
				}
			}
		}
		if (tmp.size()>0)
		{
			word.push_back(tmp);
			//tmp="";
		}
		for (int i = word.size() - 1; i>0; --i)
		{
			cout << word[i] << " ";
		}
		cout << word[0] << endl;
	}
	return 0;
}

//����˼·��
//����vector<string>��ÿһ�����ʴ洢������������������
//������������ʱ����Ϊ����Ҫ�����ĸ���򲹳䵽tmp�ַ����󣻷�����˵�������ָ�������tmp�ַ����ĳ��ȴ���0����
//�õ���push_back��vector�У�������=0ʱ���п�����������ӵĿ�ͷ�������ָ�������������Ҳ�п���:��Ŀ��˵����
//���ܻ����������ļ��������������һ����������Ͳ��뵥�ʣ�tmp�ÿգ������ڶ���Ϊ�����ʱ����tmp��Ϊ�գ���������

//֪ʶ�㲹�䣺
//vector��clear������
//clear���������ĵ��÷�ʽ�ǣ�vector<datatype> temp��50��;
//������50��datatype��С�Ŀռ䡣temp.clear();
//���ã��������temp�е�����Ԫ�أ�����temp���ٵĿռ䣨size��������capacity�ᱣ��������������temp[1]������ʽ����ֵ��
//ֻ��ͨ��temp.push_back(value)����ʽ����ֵ��
//����clear֮��, vector�ĳߴ�(size)�����zero. ����������(capacity)ȴ���������仯, vector�������ͷ��κ��ڴ�.