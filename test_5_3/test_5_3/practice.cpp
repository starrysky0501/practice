2018校招真题：包裹运输
题目描述
工厂生产的产品包装在相同高度h，尺寸为1 * 1, 2 * 2，3 * 3，4 * 4，5 * 5，6 * 6的方形包装中。 这些产品始终以与产品高度相同的尺寸为6 * 6的包裹交付给客户。因为邮费很贵，所以工厂要想方设法的减小每个订单运送时的包裹数量。他们很需要有一个好的程序帮他们解决这个问题从而节省费用。现在这个程序由你来设计。
输入描述 :
输入文件包括几行，每一行代表一个订单。每个订单里的一行包括六个整数，中间用空格隔开，分别为 1 * 1 至 6 * 6 这六种产品的数量。输入文件将以 6 个 0 组成的一行结尾。
输出描述 :
除了输入的最后一行 6 个 0 以外，输入文件里每一行对应着输出文件的一行，每一行输出一个整数代表对应的订单所需的最小包裹数。
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
	int packnum(vector<int>& a){
		int three[4] = { 0, 5, 3, 1 };
		int num = 0;
		if (a[5] + a[4] + a[3] + a[2] + a[1] + a[0] == 0)
			return 0;
		//算得6*6,5*5,4*4,3*3起码的大箱子数
		num = a[5] + a[4] + a[3] + (a[2] + 3) / 4;
		//算得还可以填的2*2空位数，要用已有的2*2来填
		int two_rest = a[3] * 5 + three[a[2] % 4];
		//如果2*2过多，算得用已有的2*2填补后 剩余的2*2 还需要的箱子数
		if (a[1]>two_rest) num += (a[1] - two_rest + 8) / 9;
		//算得还可以填的1*1空位数，要用已有的1*1来填
		int one_rest = 36 * (num - a[5]) - a[4] * 25 - a[3] * 16 - a[2] * 9 - a[1] * 4;
		//如果1*1过多，算得用已有的1*1填补后，剩余的1*1还需要的箱子数
		if (a[0]>one_rest) num += (a[0] - one_rest + 35) / 36;
		return num;
	}
};

int main(){
	vector<int> packs(6, 0);
	int pack = 0;
	Solution s;
	int i = 0;
	while (cin >> packs[0] >> packs[1] >> packs[2] >> packs[3] >> packs[4] >> packs[5]){
		int ans = s.packnum(packs);
		if (ans == 0){
			break;
		}
		else{
			cout << ans << endl;
		}
	}

	return 0;
}