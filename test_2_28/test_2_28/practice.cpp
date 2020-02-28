//2018校招真题：最后一位

//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//	long long int sum, n, num, m;
//	vector <int> a;
//	cin >> sum;
//	num = sum;
//	n = 0;
//	while (num){
//		num = num / 10;
//		n++;
//	}
//	num = 0;
//	for (int i = 0; i<n; i++) num = num * 10 + 1;
//	m = sum / num;
//	sum = sum%num;
//	if (m) a.push_back(m);
//	if (m == 10) { cout << -1; return 0; }
//	n--;
//	while (n){
//		num = 0;
//		for (int i = 0; i<n; i++) num = num * 10 + 1;
//		m = sum / num;
//		sum = sum%num;
//		a.push_back(m);
//		if (m == 10) { cout << -1; return 0; }
//		n--;
//	}
//	for (int i = 0; i<a.size(); i++){
//		cout << a[i];
//	}
//	return 0;
//}