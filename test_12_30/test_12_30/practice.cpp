//��ָoffer:�ַ����е�һ�����ظ����ַ�

//��Ŀ����ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ������磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ��
//��һ��ֻ����һ�ε��ַ���"g"�����Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"��

//class Solution
//{
//public:
//	//Insert one char from stringstream
//	void Insert(char ch)
//	{
//		index[ch - '\0']++;             //������ASCII��Ϊ0���ַ����������ַ�0
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
//			return '#';               //��Ŀ��ʾ
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

//˼·��
//1.��һ��128��С������ͳ��ÿ���ַ����ֵĴ��� (ASCII�ַ�������Ǵ�0-127)
//2.��һ�����У������ַ���������һ�������ַ����򽫸��ַ���������У����򲻲��룻
//3.����һ�����ֵ��ַ����ж϶���Ԫ���Ƿ�ֻ������һ�Σ�����ǣ�ֱ�ӷ��أ����򽫸��ַ��Ӷ�����ɾ���������жϣ�
//  ������Ϊ��ʱ���������ַ�����û���ַ������п����Ǹ��ַ���û��ֻ����һ�ε��ַ�