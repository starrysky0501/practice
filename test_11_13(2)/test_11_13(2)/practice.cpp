//ţ�ͣ���Ҫ��
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int w; //��
//	int h; //��
//	int count = 0;
//	cin >> w;
//	cin >> h;
//	vector<vector<int>> cake;
//	cake.resize(h, vector<int>(w, 1));
//	for (int i = 0; i<h; i++)
//	{
//		for (int j = 0; j<w; j++)
//		{
//			if (cake[i][j] == 1)
//			{
//				count++;
//				if (i + 2<h)
//				{
//					cake[i + 2][j] = 0;
//				}
//				if (j + 2<w)
//				{
//					cake[i][j + 2] = 0;
//				}
//			}
//		}
//	}
//	cout << count << endl;
//	return 0;
//}

//vector��ά����ĳ�ʼ����
//cin >> row >> column;
//(1)vector<vector<int> > a; 
//   a.resize(row, vector<int>(column));
//(2)vector<vector<int> > a;
//   a.resize(row);
//   for (int i = 0; i < row; ++i)
//	 a[i].resize(column);
//(3)for (i = 0; i <row; i++) 
//  {
//	  a.push_back(v1);	  //��������٣��൱���ȿ��ټ���
//  }	
//  for (j = 0; j < row; j++)
//  {
//	    for (i = 0; i < column; i++)
//		{
//			a[j].push_back(i + j);  //�����õ�a[j]��������������ȿ��ٺ��еĸ�������������ϵͳ����
//  	}
//  }
//(4)vector<vector<int> > a(row, vector<int>(column));//Ĭ�ϳ�ʼ������Ϊ0
//	 vector<vector<int> > a(row, vector<int>(column,-1));//��-1��ʼ����ά����


