//��Ŀ������
//����һ���ַ���s��һ�鵥��dict���ж�s�Ƿ�����ÿո�ָ��һ���������У�ʹ�õ������������еĵ��ʶ���dict�еĵ��ʣ����п��԰���һ���������ʣ���
//���� :
//����s = ��leetcode����
//dict = ["leet", "code"].
//����true����Ϊ"leetcode"���Ա��ָ��"leet code".


//class Solution {
//public:
//	bool wordBreak(string s, unordered_set<string> &dict) {
//		if (s.empty())
//			return false;           //���п��԰���һ����������
//		if (dict.empty())
//			return false;           //���п��԰���һ����������
//		
//      //�ҵ����ĵ��ʳ���
//		int max_words = 0;
//		auto dict_iter = dict.begin();
//		for (; dict_iter != dict.end(); ++dict_iter)
//		{
//			if ((*dict_iter).size()>max_words)
//			{
//				max_words = (*dict_iter).size();
//			}
//		}
//
//		//�����ַ�����Ӧ��ÿ��λ�õ�״̬
//		vector<bool> state(s.size() + 1, false);
//		state[0] = true;  //����λ
//
//		for (int i = 1; i <= s.size(); ++i)
//		{
//			for (int j = i - 1; j >= 0; --j)
//			{
//				if ((i - j)>max_words)        //�����С�Ӵ����ȴ���max_length������
//				{
//					break;
//				}
//              //F(i) : true{j <i && F(j) && substr[j + 1, i]���ڴʵ����ҵ�} OR false
//				if (state[j] && dict.find(s.substr(j, i - j)) != dict.end())
//				{
//					state[i] = true;
//					break;
//				}
//			}
//		}
//		return state[s.size()];
//	}
//};


//������
//��������̬�滮
//
//״̬��
//��״̬��ǰ1��2��3��..., n���ַ��ܷ���ݴʵ��еĴʱ��ɹ��ִ�
//F(i) : ǰi���ַ��ܷ���ݴʵ��еĴʱ��ɹ��ִ�
//
//״̬���ƣ�
//F(i) : true{j <i && F(j) && substr[j + 1, i]���ڴʵ����ҵ�} OR false
//��jС��i�У�ֻҪ���ҵ�һ��F(j)Ϊtrue�����Ҵ�j + 1��i֮����ַ����ڴʵ����ҵ�����F(i)Ϊtrue
//
//��ʼֵ��
//���ڳ�ʼֵ�޷�ȷ���ģ���������һ��������ʵ������Ŀ�״̬����Ϊ״̬����ʼ
//��״̬��ֵ��Ҫ��֤״̬���ƿ�����ȷ��˳���Ľ��У�����ȡʲôֵ����ͨ���򵥵����ӽ�����֤
//F(0) = true
//
//���ؽ����F(n)


//unordered_set��
//unordered_set �������͵�ģ�嶨���� <unordered_set> ͷ�ļ���
//find���ص�Ҳ��һ����������iterator

//s.substr��
//s.substr(p, n)
//����һ��string�������ַ���s�д�p��ʼ��n���ַ��Ŀ�����p��Ĭ��ֵ��0��n��Ĭ��ֵ��s.size() - p�������Ӳ�����Ĭ�Ͽ�������s��