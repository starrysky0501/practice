//ţ�ͣ��򵥴����¼

//��Ŀ������
//����һ���򵥴����¼����Сģ�飬�ܹ���¼����Ĵ������ڵ��ļ����ƺ��кš�        
//����
//1.��¼���8�������¼,ѭ����¼(����˵���ֻ��������ֵİ��������¼),����ͬ�Ĵ����¼(���ļ����ƺ��к���ȫƥ��)ֻ��¼һ��������������ӣ�       
//2.����16���ַ����ļ����ƣ�ֻ��¼�ļ��������Ч16���ַ���        
//3.������ļ����ܴ�·������¼�ļ����Ʋ��ܴ�·����
//�������� :
//һ�л�����ַ�����ÿ�а�����·���ļ����ƣ��кţ��Կո������
//������� :
//�����еļ�¼ͳ�Ʋ�������������ʽ���ļ��� �������� ��Ŀ��һ���ո�������磺

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct err
{
	string name;
	int row;
	int count;
};
int find(vector<err> &v, err er)
{
	for (int i = 0; i<v.size(); ++i)
	{
		if (v[i].name == er.name && v[i].row == er.row)
		{
			return (++v[i].count);
		}
	}
	return 1;
}
int main()
{
	string name;
	int num;
	vector<err> v;
	while (cin >> name >> num)
	{
		string Name;
		for (int i = name.size() - 1; i >= 0; --i)
		{
			if (name[i] == '\\')
			{
				break;
			}
			if (Name.size()<16)
			{
				Name.push_back(name[i]);   //���Ų���
			}
		}
		reverse(Name.begin(), Name.end());   //��ת
		err er;
		er.name = Name;
		er.row = num;
		er.count = find(v, er);
		if (er.count == 1)
		{
			v.push_back(er);
		}
	}
	if (v.size() <= 8)
	{
		for (int i = 0; i<v.size(); ++i)
		{
			cout << v[i].name << " " << v[i].row << " " << v[i].count << endl;
		}
	}
	else
	{
		for (int i = v.size() - 8; i<v.size(); ++i)
		{
			cout << v[i].name << " " << v[i].row << " " << v[i].count << endl;
		}
	}
	return 0;
}

//����ӵ�Ƚ϶ࣺ
//��¼���8�������¼�������Դ��жϷ��֣���ʵ�ǿ��Լ�¼����������¼����8��ʱ���������ֻ��������8����
//���Ӧ��whileѭ���⣬ϵͳ�Լ����ʱ���˳�whileѭ��
//дreverse����ʱ��ע�����ͷ�ļ� #include<algorithm>

//����˼·��
//���������ļ�·�����кţ�Ȼ����ļ�·�������жϣ�����һ��string�����������ļ�����ӵ��µ��ַ����У��������㣬�ַ�����������
//16��������if�Ⱥ�˳��ע�⡣���Ŵ���һ���ṹ�壬�ýṹ������ļ������кţ��Լ������������Ϊ������Ҫ���㵱�ļ������к���ͬʱ
//ֻ�ı���������ֻ�������м�¼һ����Ȼ����Ҫһ������find�жϣ��ô����¼�Ѵ��ڼ�����������ڣ�����������е�����������������
//���֣��ü�¼�����ڣ����ڷ���1���������������н��ü�¼���뵽�����С����ţ���ע�⣬���һ����whileѭ���ⲿ�����ݱ�������������
//����¼��������8��ʱ����ֻ�����8����¼�����򣬱���ȫ���������¼֮��ʹ�û��зָ�.

//֪ʶ�㲹�䣺
//reverse()������
//���ã�reverse�������ڷ�ת��[first,last)��Χ�ڵ�˳�򣨰���firstָ���Ԫ�أ�������lastָ���Ԫ�أ�
//ͷ�ļ���#include<algorithm>
//ʹ�÷�ʽ���������͵�Ҫ��begin()��end()��ָ����ת�������������͵�ֱ����int���ͼ���
//1.����vector������Ԫ��˳��
//vector<int> v = { 5, 4, 3, 2, 1 }; reverse(v.begin(), v.end());//v��ֵΪ1,2,3,4,5
//2.����string�ַ�����Ԫ�ص�˳��
//string str = "www.mathor.top"; reverse(str.begin(), str.end());//str���Ϊpot.rohtam.wwww
//3.�����ַ�����char[]��Ԫ�ص�˳��
//char a[101] = ��hello world��; reverse(a, a + strlen(a));
