//����������

//��Ŀ����
//��C / C++ת��Java�ĳ���Ա��һ��ʼ�ϰ�ߵľ��Ǳ���������ʽ�ĸı䡣C���Է��ʹ���»��߷ָ�������ʣ�
//���硰hello_world������Java�����һ�ֽ������������Ĺ��򣺳��׸��������⣬���е��ʵ�����ĸ��д������
//��helloWorld�������������ĳ���Ա���Զ�ת����������
//�������� :
//��������������ݡ�
//ÿ������һ�У�����һ��C���Է��ı�������ÿ�����������Ȳ�����100��
//������� :
//��Ӧÿһ�����ݣ������������Ӧ��������������

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	string cpp;
	while (cin >> cpp)
	{
		for (int i = 0; i<cpp.size(); ++i)
		{
			if (cpp[i] == '_')
			{
				cpp.erase(cpp.begin() + i);
				cpp[i] = toupper(cpp[i]);
			}
		}
		cout << cpp << endl;
		cpp.erase(cpp.begin(), cpp.end() - 1);//cpp.erase(0);
	}
	return 0;
}

//֪ʶ��عˣ�
//string��erase�÷���
//erase������ԭ�����£�
//��1��string& erase(size_t pos = 0, size_t n = npos);
//��2��iterator erase(iterator position);
//��3��iterator erase(iterator first, iterator last);
//Ҳ����˵�������÷���
//��1��erase(pos, n); ɾ����pos��ʼ��n���ַ�������erase(0, 1)����ɾ����һ���ַ�
//��2��erase(position); ɾ��position����һ���ַ�(position�Ǹ�string���͵ĵ�����)
//��3��erase(first, last); ɾ����first��last֮����ַ���first��last���ǵ�����������first��last��
//���䣺
//����;s.erase(13);//������13��ʼ����ȫɾ�� 
//s.erase(7,5);//������7��ʼ����ɾ5��

//#include<ctype.h>
//C �⺯�� int toupper(int c) ��Сд��ĸת��Ϊ��д��ĸ��
//��� c �����Ӧ�Ĵ�д��ĸ����ú������� c �Ĵ�д��ĸ������ c ���ֲ��䡣����ֵ��һ���ɱ���ʽת��Ϊ char ���͵� int ֵ��
//C �⺯�� int tolower(int c) �Ѹ�������ĸת��ΪСд��ĸ��
//��� c �����Ӧ��Сд��ĸ����ú������� c ��Сд��ĸ������ c ���ֲ��䡣����ֵ��һ���ɱ���ʽת��Ϊ char ���͵� int ֵ��
//C �⺯�� int islower(int c) ����������ַ��Ƿ���Сд��ĸ��   
//��� c ��һ��Сд��ĸ����ú������ط���ֵ��true�������򷵻� 0��false����
//C �⺯�� int isupper(int c) ����������ַ��Ƿ��Ǵ�д��ĸ��
//��� c ��һ����д��ĸ����ú������ط���ֵ��true�������򷵻� 0��false����
//C �⺯�� void isalpha(int c) ����������ַ��Ƿ�����ĸ��
//C �⺯�� void isdigit(int c) ����������ַ��Ƿ���ʮ���������ַ���ʮ���������ǣ�0 1 2 3 4 5 6 7 8 9
