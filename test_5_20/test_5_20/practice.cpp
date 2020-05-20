//2018校招真题：数据分页的说明
//题目描述
//数据分页, 对于指定的页数和每页的元素个数，返回该页应该显示的数据。
//输入描述 :
//第一行输入数据个数，第二行全部数据，第三行输入页数，第四行输入每页最大数据个数
//输出描述 :
//输出该页应该显示的数据，超出范围请输出'超过分页范围'
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n) {
//		int *arr = new int[n];
//		for (int i = 0; i < n; ++i)
//			cin >> arr[i];
//		int page, num;
//		cin >> page >> num;
//		if (page > n / num - 1) {
//			cout << "超过分页范围" << endl;
//			continue;
//		}
//		for (int i = page * num; i < page * num + num; ++i)
//			cout << arr[i] << endl;
//		delete[]arr;
//	}
//	return 0;
//}