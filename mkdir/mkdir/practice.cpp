//ţ�ͣ�mkdir

//��Ŀ������
//�����У�ÿ��Ҫ����һ̨�»�����ʱ�򣬾���ζ����һ��Ŀ¼��Ҫ����������Ҫ����Ŀ¼�� / usr / local / bin��������Ҫ
//�˴δ����� / usr������ / usr / local���Լ��� / usr / local / bin�������ڣ�Linux��mkdir�ṩ��ǿ��ġ� - p��ѡ�
//ֻҪһ�����mkdir - p / usr / local / bin�������Զ�������Ҫ���ϼ�Ŀ¼��
//���ڸ���һЩ��Ҫ�������ļ���Ŀ¼�������æ������Ӧ�ġ�mkdir - p�����
//�������� :
//��������������ݡ�
//ÿ�����ݵ�һ��Ϊһ��������n(1��n��1024)��
//������n�У�ÿ�а���һ����������Ŀ¼����Ŀ¼���������ֺ���ĸ��ɣ����Ȳ�����200���ַ���
//������� :
//��Ӧÿһ�����ݣ������Ӧ�ġ������ֵ�˳������ġ�mkdir - p�����
//ÿ������֮�����һ��������Ϊ�ָ���

//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		set<string> dir;
//		string temp;
//		for (int i = 0; i<num; ++i)
//		{
//			cin >> temp;
//			dir.insert(temp);
//		}
//		for (auto it = dir.begin(); it != (--dir.end()); ++it)   //�����������it,++�Ժ�Ľ����ã���it���ܵ������һ��Ԫ��
//		{
//			auto i = it++;         //it��i������������set������ǰ�����ڵ�����Ŀ¼
//			auto pos = (*it).find(*i);
//			if (pos == string::npos || pos != 0 || (*it)[(*i).size()] != '\/')
//			{
//				cout << "mkdir -p " << *i << endl;
//			}
//			it = i;   //��it���֮ǰ��λ��
//		}
//		cout << "mkdir -p " << *(--dir.end()) << endl;   //���ۺ�����������һ��һ�������
//		cout << endl;
//	}
//	return 0;
//}

//����˼·��
//����������set���ϵ����ԣ��Զ���Ԫ������
//�������string��������a<ab<abc<bcd������Կ������ڸ��⣬Ŀ¼�����뱻����֮��Ĺ�ϵһ���Ǳ�������ǰ�������ں�.
//����������������set����ǰ�����ڵ�����Ŀ¼,�жϺ�һ��Ԫ���Ƿ����ǰһ��Ԫ�أ���ס�ж���Ϻ�һ��Ҫ��it���֮ǰ��λ��.

//set��Լ����е�Ԫ������������int���ͺ�string���͵��������Ĳ��ԣ�
//#include <iostream>
//#include<string>
//#include <set>
//#include<stdlib.h>
//using namespace std;
//
//int main()
//{
//	set<int> st;
//	set<int>::iterator it;
//	st.insert(11);
//	st.insert(122);
//	st.insert(13);
//	st.insert(1);
//	for (it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	set<string> st1;
//	set<string>::iterator it1;
//	st1.insert("abc");
//	st1.insert("bca");
//	st1.insert("ab");
//	st1.insert("a");
//	for (it1 = st1.begin(); it1 != st1.end(); it1++)
//	{
//		cout<<*it1 << endl;
//	}
//	system("pause");
//	return 0;
//}