//当天没做出来，请教了大佬，被大佬的思路打败
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int t = n / (2 * n*m * 100) + 1;
	int mu = 1, count = 1;
	while (mu < t)
	{
		mu *= 2;
		count++;
	}
	cout << count << endl;
	system("pause");
	return 0;
}