//样例输入
//10 3 2 1
//10 3 2 2
//样例输出
//7
//3
//提示
//范围：1 <= a, b, k, v <= 100000，数据组数不会超过1000组
//样例解释：
//对于样例1，第1, 2, 3个箱子分成两个隔间，使用掉了3个隔板，装了6个物件。第4, 5, 6, 7个箱子没有使用隔板，装了4个物件。共7个箱子装完了所有物件。
//对于样例2，第1, 2个箱子分成两个隔间，使用掉了2个隔板，装了8个物件，最后两个物件装在第三个箱子中。

//// a是物体，b是带了隔板,k是把一个箱子分成最多k个独立的隔间，v是一个隔间最多放的物体个数
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int a, b, k, v;
	while (cin >> a >> b >> k >> v)  
	{
		int count = 0;
		while (a >= 0)
		{

			if (b >= k - 1)
			{
				for (int i = 0; i < k; ++i)
				{
					for (int j = 0; j < v; ++j)
					{
						if (a >= 0)
						{
							a--;
						}
					}
				}
				count++;
				b--;
			}
			if (b == 0)
			{
				if (a != 0)
				{
					for (int i = 0; i < a; ++i)
					{
						a -= v;
						count++;
					}
				}
				else
				{
					break;
				}
			}
			
		}
		cout << count << endl;	
	}
	system("pause");
	return 0;
}