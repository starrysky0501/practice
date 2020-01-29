//2018校招真题：六一儿童节

//题目描述：六一儿童节，老师带了很多好吃的巧克力到幼儿园。每块巧克力j的重量为w[j]，对于每个小朋友i，
//当他分到的巧克力大小达到h[i] (即w[j]>=h[i])，他才会上去表演节目。老师的目标是将巧克力分发给孩子们，
//使得最多的小孩上台表演。可以保证每个w[i]> 0且不能将多块巧克力分给一个孩子或将一块分给多个孩子。

//输入描述：第一行：n，表示h数组元素个数
//第二行：n个h数组元素
//第三行：m，表示w数组元素个数
//第四行：m个w数组元素

//输出描述：上台表演学生人数

//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main(){
//	int N, M, i, j;
//	//freopen("input.txt","r",stdin);
//	scanf("%d", &N);
//	vector<int> child(N);
//	for (i = 0; i<N; i++) scanf("%d", &child[i]);
//	scanf("%d", &M);
//	vector<int> cho(M);
//	for (i = 0; i<M; i++) scanf("%d", &cho[i]);
//	sort(child.begin(), child.end());
//	sort(cho.begin(), cho.end());
//	int res = 0;
//	for (i = 0, j = 0; i<M&&j<N; i++)
//	if (cho[i] >= child[j])
//		res++, j++;
//	printf("%d\n", res);
//}