//ţ�ͣ��ռ����б�

//��Ŀ����
//NowCoderÿ��Ҫ�����ͻ�д�����ʼ�����������֪�����һ���ʼ��а�������ռ��ˣ��ռ�������֮�����һ�����źͿո��
//��������ռ�������Ҳ�����ո�򶺺ţ���������Ҫ��˫���Ű��������ڸ���һ���ռ����������������������Ӧ���ռ����б�
//�������� :
//��������������ݡ�
//ÿ�����ݵĵ�һ����һ������n(1��n��128)����ʾ������n��������
//������n�У�ÿһ�а���һ���ռ��˵��������������Ȳ�����16���ַ���
//������� :
//��Ӧÿһ�����룬���һ���ռ����б�

//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		getchar();       //cin.get()Ҳ����
//		while (n--)
//		{
//			string str;
//			getline(cin, str);
//			if (str.find(',') != str.npos || str.find(' ') != str.npos)
//			{
//				str.insert(str.begin(), '"');
//				str.insert(str.end(), '"');
//			}
//
//			if (n>0)
//			{
//				cout << str << ", ";
//			}
//			else
//			{
//				cout << str << endl;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//����˼·��
//����string�еĺ���find��insert�������ʹ�á�
//1.��find���������ַ������Ƿ��ж��źͿո�����ַ�����û�ж�Ӧ���ַ�����᷵��npos(-1)����֮��ʹ��insert����
//��ָ����λ�ò���ָ�����ַ���
//2.����ע����շ��轫�����ö��źͿո����


//֪ʶ�㣺
//1.string��find������
//int find(char c, int pos = 0) const;//��pos��ʼ�����ַ�c�ڵ�ǰ�ַ�����λ��
//int find(const char *s, int pos = 0) const;//��pos��ʼ�����ַ���s�ڵ�ǰ���е�λ��
//int find(const char *s, int pos, int n) const;//��pos��ʼ�����ַ���s��ǰn���ַ��ڵ�ǰ���е�λ��
//int find(const string &s, int pos = 0) const;//��pos��ʼ�����ַ���s�ڵ�ǰ���е�λ��
//���ҳɹ�ʱ��������λ�ã�ʧ�ܷ���string::npos��ֵ 
//2.string��insert������
//iterator insert(iterator it, char c);//��it�������ַ�c�����ز�����������λ��
//void insert(iterator it, const_iterator first, const_iterator last);//��it�������first��ʼ��last-1�������ַ�
//string &insert(int p0, const char *s); ������p0λ�ò����ַ���s
//string &insert(int p0, const char *s, int n); ������p0λ�ò����ַ���s��ǰn���ַ�
//string &insert(int p0, const string &s); ������p0λ�ò����ַ���s
//string &insert(int p0, const string &s, int pos, int n); ������p0λ�ò����ַ���s��pos��ʼ������n���ַ�
//string &insert(int p0, int n, char c);//��p0������n���ַ�c
//3.cin�����е�getline��get����������
//�ڶ�ȡ�ַ����ϵ�����getline�������з���������������get�������з��������������������з������ڻ�����
//getline��cin.getline(���������ַ�����)---ʵ�ʶ�ȡ(�ַ�����-1)��,���һ���Զ���'\0'
//		   getline(cin,������)
//get��cin.get()---��ȡһ���ַ������ջ��з�
//	   char c;   c=cin.get()  /  cin.get(c)
//	   cin.get(���������ַ�����)




//�����Ҹо���һ���������д�ӡ�����Ľ�����淶��������׼���ڵ�һ�ַ�������֮���޸�
//#include<iostream>
//#include<string>
//#include<vector>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<string> out;
//		cin.get();
//		while (n--)
//		{
//			string str;
//			getline(cin, str);
//			if (str.find(',') != str.npos || str.find(' ') != str.npos)
//			{
//				str.insert(str.begin(), '"');
//				str.insert(str.end(), '"');
//			}
//
//			if (n>0)
//			{
//				str += ", ";
//				out.push_back(str);
//			}
//			else
//			{
//				out.push_back(str);
//			}
//		}
//		for (int i = 0; i<out.size(); ++i)
//		{
//			cout << out[i];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}