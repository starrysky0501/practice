//��ָoffer��������

//��Ŀ����������һ������Ϊn�����ӣ�������Ӽ�����������m�Σ�m��n����������n>1����m>1����
//ÿ�����ӵĳ��ȼ�Ϊk[0],k[1],...,k[m]������k[0]xk[1]x...xk[m]���ܵ����˻��Ƕ��٣�
//���磬�����ӵĳ�����8ʱ�����ǰ������ɳ��ȷֱ�Ϊ2��3��3�����Σ���ʱ�õ������˻���18��

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