//剑指offer:求1+2+3+...+n

//题目描述：求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。

//class Solution {
//public:
//	int Sum_Solution(int n) {
//		int ans = n;
//		ans && (ans += Sum_Solution(n - 1));
//		return ans;
//	}
//};

//思路：该递归停止的条件是当ans为0时，利用短路求值原理(&&逻辑与有一个短路的特点：就是前面为假，后面不计算)