//2018校招真题：判断题

//题目描述：牛牛参加了一场考试,考试包括n道判断题,每做对一道题获得1分,牛牛考试前完全没有准备,
//所以考试只能看缘分了,牛牛在考试中一共猜测了t道题目的答案是"正确",其他的牛牛猜为"错误"。考
//试结束后牛牛知道实际上n道题中有a个题目的答案应该是"正确",但是牛牛不知道具体是哪些题目,牛牛
//希望你能帮助他计算可能获得的最高的考试分数是多少。

//输入描述：输入包括一行,一行中有三个正整数n, t, a(1 ≤ n, t, a ≤ 50), 以空格分割

//输出描述：输出一个整数,表示牛牛可能获得的最高分是多少。

//#include<iostream>
//using namespace std;
//int main() {
//	int n, t, a;
//	cin >> n >> t >> a;
//	if (t == a) {
//		cout << n << endl;
//	}
//	else if (t < a) {
//		int wrong = n - a;
//		int welldone = wrong + t;
//		cout << welldone << endl;
//	}
//	else {
//		int wrong = n - a;
//		wrong = wrong - (t - a);
//		int welldone = wrong + a;
//		cout << welldone << endl;
//	}
//	return 0;
//}