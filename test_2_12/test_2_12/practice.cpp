//ţ�ͣ�24����Ϸ�㷨

//��Ŀ��������������������4��1-10�����֣�ͨ���Ӽ��˳����õ�����Ϊ24����ʤ��
//���룺
//4��1 - 10�����֡�[���������ظ�����ÿ�����ֽ�����ʹ��һ�Σ�����������֤���쳣����]
//�����
//true or false

//��������������4��int����

//��������������ܷ�õ�24�㣬�����true���������false

//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool isTwenty_Four(vector<int> a, int num, double res) //�˴���resһ��Ϊdouble���ͣ���Ҫ���ǳ��������������Ϊint����ᷢ������ȱʧ
//{                                                    
//	if (a.empty())  //������Ϊ��ʱ�����ǽ�4�����Ѿ��Ӽ��˳���֯�õ�ʱ���жϺ�24�Ƿ����                      
//	{
//		return num == res;
//	}
//	for (int i = 0; i<a.size(); i++)    //�����forѭ���ڣ��Ὣ���еļӼ��˳������ȫ�����ǵ�
//	{
//		vector<int> b(a);
//		b.erase(b.begin() + i);
//		if (isTwenty_Four(b, num, res + a[i]) || isTwenty_Four(b, num, res - a[i])
//			|| isTwenty_Four(b, num, res*a[i]) || isTwenty_Four(b, num, res / a[i]))   //���ÿ��ǳ����Ƿ�Ϊ0����Ϊ������a[i]����Ŀ��֪�ĸ���Ϊ1-10��int������
//		{
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	vector<int> a(4, 0);
//	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
//	{
//		if (isTwenty_Four(a, 24, 0))
//		{
//			cout << "true" << endl;
//		}
//		else
//		{
//			cout << "false" << endl;
//		}
//	}
//}