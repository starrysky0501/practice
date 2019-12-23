//剑指offer：左旋转字符串

//题目：汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
//对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S = ”abcXYZdef”,
//要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！

//class Solution {
//public:
//	string LeftRotateString(string str, int n) {
//		reverse(str.begin(), str.end());                          //将字符串全部逆置
//		reverse(str.begin(), str.begin() + str.size() - n);       //将未左移的字符在逆置一遍
//		reverse(str.begin() + str.size() - n, str.end());         //将需左移的字符也旋转过来，因为第一次旋转的字符会在第二次旋转字符的前面
//		return str;
//	}
//};

//请注意：reserve第二个参数的end位置是需要遍历的数组的最后一个元素的下一个位置
