//leetcode:二进制求和

//题目描述：
//给你两个二进制字符串，返回它们的和（用二进制表示）。输入为非空字符串且只包含数字 1 和 0。

//class Solution {
//public:
//	string addBinary(string a, string b) {
//		//对齐、相加、进位
//		int alength = a.size();
//		int blength = b.size();
//		int maxlen = max(alength, blength);
//		if (alength>blength)
//		{
//			b = string(alength - blength, '0') + b;
//		}
//		else
//		{
//			a = string(blength - alength, '0') + a;
//		}
//		string result(maxlen, '0');      //巧妙：全部是字符0，则后面可以使用直接加上数字，将字符0变成其他的数字字符
//
//		for (int i = maxlen - 1; i>0; --i)
//		{
//			result[i] += a[i] - '0' + b[i] - '0';
//			if (result[i] >= '2')        //巧妙：和字符‘2’比大小
//			{
//				result[i - 1] += 1;     //加减的是数字，不是字符，因为初始化时每一位都是字符0
//				result[i] -= 2;
//			}
//		}
//
//		result[0] += a[0] - '0' + b[0] - '0';
//		if (result[0] >= '2')
//		{
//			result[0] -= 2;
//			result = '1' + result;
//		}
//		return result;
//	}
//};
//该题思路：
//三步走：对齐+相加+进位
//先找到两个字符串中size大的字符串，接着将短的字符串与长的字符串对齐，采用“+”，0字符在已有字符的前面。从后向前，将两个字符串的
//每一位分别相加，如果大于等于2时，对进位位进行处理，最后对第一个字符进行处理，因为有可能第一个字符会产生进位，则使用‘1’+原有
//字符。