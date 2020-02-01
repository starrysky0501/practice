//2018校招真题：等差数列

//include<iostream>
//#include<algorithm>
//
//using namespace std;
//const int maxn = 51;
//int arr[maxn], n;
//
//int main(){
//	cin >> n;
//	int flag = 1;
//	for (int i = 0; i<n; i++) scanf("%d", &arr[i]);
//	sort(arr, arr + n);
//	if (n > 2){
//		int cha = arr[1] - arr[0];
//		for (int i = 2; i<n; i++){
//			if (arr[i] - arr[i - 1] != cha) { flag = 0; break; }
//		}
//	}
//	if (flag) cout << "Possible" << endl;
//	else cout << "Impossible" << endl;
//}