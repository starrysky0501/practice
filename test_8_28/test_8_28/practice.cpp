//题目描述
//小Q搜寻了整个魔法世界找到了四块魔法石所在地，当4块魔法石正好能构成一个正方形的时候将启动魔法阵，小Q就可以借此实现一个愿望。
//现在给出四块魔法石所在的坐标，小Q想知道他是否能启动魔法阵
//输入描述 :
//输入的第一行包括一个整数（1≤T≤5）表示一共有T组数据
//每组数据的第一行包括四个整数x[i](0≤x[i]≤10000)，即每块魔法石所在的横坐标
//每组数据的第二行包括四个整数y[i](0≤y[i]≤10000), 即每块魔法石所在的纵坐标
//输出描述 :
//对于每组数据，如果能启动魔法阵输出“Yes”否则输出“No”。
//#include <iostream>
//#include <cmath>
//#include <climits>
//#include<string>
//using namespace std;
//int x[4], y[4];
//int T;
//int main(){
//	cin >> T;
//	while (T--){
//		string s1, s2; cin >> s1 >> s2;
//		for (int i = 0; i < 4; i++) { x[i] = s1[i] - '0'; y[i] = s2[i] - '0'; }
//		bool flag = 1;
//		int Cross = 0;
//		for (int i = 0; i < 4; i++){
//			int arr[3], cnt = 0, cross = 0, sum = 0;
//			for (int j = 0; j < 3; j++){ //求某个点和剩下三个点距离 if(j == i) continue;
//				arr[cnt++] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
//				cross = max(cross, arr[cnt - 1]);  //最长的为对角线
//				sum += arr[cnt - 1];
//			}
//			int val = (sum - cross) / 2;  //边长值
//			for (int k = 0; k < 3 && arr[k] != cross; k++)
//				flag &= (val == arr[k]);  //剩下两条边长要相等
//			if (!Cross) Cross = cross; //保留第一个对角线的值
//			else flag &= (Cross == cross);  //对角线必须相等
//		}
//		if (flag) cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//}
