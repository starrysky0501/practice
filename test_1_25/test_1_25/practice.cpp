//剑指offer：剪绳子

//题目描述：给你一根长度为n的绳子，请把绳子剪成整数长的m段（m、n都是整数，n>1并且m>1），
//每段绳子的长度记为k[0],k[1],...,k[m]。请问k[0]xk[1]x...xk[m]可能的最大乘积是多少？
//例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。

//class Solution {
//public:
//	int cutRope(int number) {
//		if (number == 2)return 1;
//		if (number == 3)return 2;
//		int cnt = 0;
//		int num2 = number;
//		while (num2)
//		{
//
//			num2 >>= 1;
//			cnt++;
//		}
//		cnt--;
//		int ans = 1;
//		while (cnt--)
//		{
//			int x = number / (cnt + 1);
//			ans *= x;
//			number -= x;
//		}
//		return ans;
//	}
//};