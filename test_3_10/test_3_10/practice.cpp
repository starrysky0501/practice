//牛客：Pre-Post

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int m;
//long res;
//long long arr[21];
//long long cnk(int n, int k){ return arr[n] / (arr[n - k] * arr[k]); }
//
//long long solve(string a, string b){
//	if (a.length()<1 && b.length()<1)return 0;
//	int ai = 1, bi = 0, branch = 0, len = 0;
//	while (bi<b.length() - 1){
//		while (a[ai] != b[bi + len] && bi + len<b.length() - 1)++len;
//		++branch;
//		solve(a.substr(ai, len + 1), b.substr(bi, len + 1));
//		ai = ai + len + 1;
//		bi = bi + len + 1;
//		len = 0;
//	}
//	res *= cnk(m, branch);
//	return res;
//}
//int main(){
//	string a, b;
//	arr[0] = 1;
//	for (int i = 1; i<21; i++){ arr[i] = i*arr[i - 1]; }
//	while (cin >> m&&m){
//		res = 1;
//		cin >> a >> b;
//		cout << solve(a, b) << endl;
//	}
//	return 0;
//}

//解题思路：
//这道题本质上其实是一个排列组合问题。通过前序和后序我们虽然还原不出来树，但是我们可以求出谁是谁的子树，采用递归解决子树情况。

//总结：已知n叉树的先序和后序遍历，求符合条件的n叉树的个数，解题策略为：
//1、设符合条件的n叉树的个数为sum，初值为1;
//2、根据n叉树的先序遍历求出根结点，根结点的子树数为k（初值为0），n叉树结点个数为m；
//3、找出先序遍历中根结点后一个结点和后序遍历中根结点前一个结点，如果这两个结点相同，则n叉树只有一个子树(k = 1)，从树的形态上讲，
//这个子树可以是根结点的第1个子树或第2个子树……或第n个子树，因此共有sum=n种；
//4、如果这两个结点不相同，则说明根结点存在多个子树；从后序遍历的第一个结点开始找与先序遍历中根结点后一个结点相同的结点，并记下
//位置t1，则后序遍历1~t1之间的结点和先序遍历2~t1 + 1之间的结点构成了根结点的第一个子树(k = 1)；接着从后序遍历的第t1 + 1个结点开
//始找与先序遍历中第t1 + 2结点相同的结点，并记下位置t2，则后序遍历t1 + 1~t2之间的结点和先序遍历t1 + 2~t2 + 1之间的结点构成了根
//结点的第二个子树（k = 2）；若t2 + 1<m，则根结点还有其它子树，按上述方法重复查找，直到t2 + 1 = m。则根结点的k个子树全部确定，
//其形状排列方式共有sum=n!/k!*(n-k)!种；
//5、若根结点的k个子树只有一个结点，则结束求解，否则对根结点的k个子树按本解题策略分别进行递归求解，求解其符合条件的子树的个数
//sum1、sum2、sum3……、sumk；

//该思想借鉴一位大佬博客--->链接：https ://blog.csdn.net/u013027996/article/details/21638269