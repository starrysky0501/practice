//剑指offer:字符流中第一个不重复的字符

//题目：请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流中只读出前两个字符"go"时，
//第一个只出现一次的字符是"g"。当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。

//class Solution
//{
//public:
//	//Insert one char from stringstream
//	void Insert(char ch)
//	{
//		index[ch - '\0']++;             //减的是ASCII码为0的字符，而不是字符0
//		if (index[ch - '\0'] == 1)
//		{
//			data.push(ch);
//		}
//	}
//	//return the first appearence once char in current stringstream
//	char FirstAppearingOnce()
//	{
//		while (!data.empty() && index[data.front()] >= 2)
//		{
//			data.pop();
//		}
//		if (data.empty())
//		{
//			return '#';               //题目提示
//		}
//		return data.front();
//	}
//	Solution()
//	{
//		memset(index, 0, sizeof(index));
//	}
//private:
//	queue<char> data;
//	unsigned index[128];
//};

//思路：
//1.用一个128大小的数组统计每个字符出现的次数 (ASCII字符代码表是从0-127)
//2.用一个队列，遍历字符流，当第一次遇到字符，则将该字符插入队列中，否则不插入；
//3.求解第一个出现的字符，判断队首元素是否只出现了一次，如果是，直接返回，否则将该字符从队列中删除，继续判断；
//  当队列为空时，可能是字符流本没有字符，还有可能是该字符串没有只出现一次的字符