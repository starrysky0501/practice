//牛客：不要二
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int w; //列
//	int h; //行
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

//vector二维数组的初始化：
//cin >> row >> column;
//(1)vector<vector<int> > a; 
//   a.resize(row, vector<int>(column));
//(2)vector<vector<int> > a;
//   a.resize(row);
//   for (int i = 0; i < row; ++i)
//	 a[i].resize(column);
//(3)for (i = 0; i <row; i++) 
//  {
//	  a.push_back(v1);	  //这个不能少，相当于先开辟几行
//  }	
//  for (j = 0; j < row; j++)
//  {
//	    for (i = 0; i < column; i++)
//		{
//			a[j].push_back(i + j);  //这里用到a[j]，所以上面必须先开辟好行的个数，否则会造成系统崩溃
//  	}
//  }
//(4)vector<vector<int> > a(row, vector<int>(column));//默认初始化内容为0
//	 vector<vector<int> > a(row, vector<int>(column,-1));//用-1初始化二维数组


