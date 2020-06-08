//2018校招真题：手机号
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<string>CT{ "133", "153", "180", "181", "189" };
//	vector<string>CU{ "130", "131", "155", "185", "186" };
//	vector<string>CM{ "135", "136", "150", "182", "188" };
//	int N;
//	cin >> N;
//	for (int i = 0; i<N; i++)
//	{
//		string rec;
//		cin >> rec;
//		int s = rec.size();
//		if (find(CT.begin(), CT.end(), rec.substr(0, 3)) != CT.end() && s == 11)
//			cout << "China Telecom" << endl;
//		else if(find(CU.begin(), CU.end(), rec.substr(0, 3)) != CU.end() && s == 11)
//			cout << "China Unicom" << endl;
//		else if(find(CM.begin(), CM.end(), rec.substr(0, 3)) != CM.end() && s == 11)
//			cout << "China Mobile Communications" << endl;
//		else
//			cout << -1 << endl;
//	}
//	return 0;
//}