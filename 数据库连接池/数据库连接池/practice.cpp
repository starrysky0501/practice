//ţ�ͣ����ݿ����ӳ�

//��Ŀ����
//Webϵͳͨ����Ƶ���ط������ݿ⣬���ÿ�η��ʶ����������ӣ����ܻ�ܲΪ��������ܣ��ܹ�ʦ���������Ѿ����������ӡ����յ�����
//�������ӳ���û��ʣ����õ�����ʱ��ϵͳ�ᴴ��һ�������ӣ������������ʱ�����ӻᱻ�������ӳ��У�����������ʹ�ã������ṩ�㴦
//���������־���������һ�����ӳ������Ҫ�������ٸ����ӡ�
//�������� :
//��������������ݣ�ÿ�����ݵ�һ�а���һ��������n��1��n��1000������ʾ�����������
//������n�У�ÿ�а���һ��������id��A��B��C������Z���Ͳ�����connect��disconnect����
//������� :
//��Ӧÿһ�����ݣ�������ӳ������Ҫ�������ٸ����ӡ�

//#include<iostream>
//#include<string>
//#include<set>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		set<string> a;
//		int max_count = 0;
//		while (n--)
//		{
//			string first, second;
//			cin >> first >> second;
//			if (second == "connect")
//			{
//				a.insert(first);       //����valueֵ�������������и�Ԫ��ʱ���򷵻ظ�Ԫ�����ڵ�λ�ã������ظ�����
//			}
//			else if (second == "disconnect")
//			{
//				a.erase(first);        //ɾ��valueֵ��Ӧ��λ�ã������в����ڣ��򷵻�end()��λ��
//			}
//			int count = a.size();
//			max_count = max(max_count, count);
//		}
//		cout << max_count << endl;
//	}
//	return 0;
//}

//����˼·��
//����set���ϵ�����(�������ظ�Ԫ��),�Ըü������ӡ�ɾ������Ԫ�ظ����Ĳ�����
//������Ҫ�������������¼ĿǰԪ�صĸ����ͼ�����Ԫ�����ʱ�ĸ���������������Ƚϣ���ĿǰԪ�صĸ������ڼ�����Ԫ�����ʱ�ĸ���ʱ��
//�����������ı�����

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		int max_count = 0, count = 0;
//		while (num--)
//		{
//			string a, b;
//			cin >> a >> b;
//			if (b == "connect")
//			{
//				count++;
//			}
//			else if (b == "disconnect")
//			{
//				count--;
//			}
//			max_count = max(max_count, count);
//		}
//		cout << max_count << endl;
//	}
//	return 0;
//}