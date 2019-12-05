//题目描述：
//给定一个字符串s和一组单词dict，判断s是否可以用空格分割成一个单词序列，使得单词序列中所有的单词都是dict中的单词（序列可以包含一个或多个单词）。
//例如 :
//给定s = “leetcode”；
//dict = ["leet", "code"].
//返回true，因为"leetcode"可以被分割成"leet code".


//class Solution {
//public:
//	bool wordBreak(string s, unordered_set<string> &dict) {
//		if (s.empty())
//			return false;           //序列可以包含一个或多个单词
//		if (dict.empty())
//			return false;           //序列可以包含一个或多个单词
//		
//      //找到最大的单词长度
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
//		//设置字符串对应的每个位置的状态
//		vector<bool> state(s.size() + 1, false);
//		state[0] = true;  //特殊位
//
//		for (int i = 1; i <= s.size(); ++i)
//		{
//			for (int j = i - 1; j >= 0; --j)
//			{
//				if ((i - j)>max_words)        //如果最小子串长度大于max_length，跳过
//				{
//					break;
//				}
//              //F(i) : true{j <i && F(j) && substr[j + 1, i]能在词典中找到} OR false
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


//分析：
//方法：动态规划
//
//状态：
//子状态：前1，2，3，..., n个字符能否根据词典中的词被成功分词
//F(i) : 前i个字符能否根据词典中的词被成功分词
//
//状态递推：
//F(i) : true{j <i && F(j) && substr[j + 1, i]能在词典中找到} OR false
//在j小于i中，只要能找到一个F(j)为true，并且从j + 1到i之间的字符能在词典中找到，则F(i)为true
//
//初始值：
//对于初始值无法确定的，可以引入一个不代表实际意义的空状态，作为状态的起始
//空状态的值需要保证状态递推可以正确且顺利的进行，到底取什么值可以通过简单的例子进行验证
//F(0) = true
//
//返回结果：F(n)


//unordered_set：
//unordered_set 容器类型的模板定义在 <unordered_set> 头文件中
//find返回的也是一个迭代器，iterator

//s.substr：
//s.substr(p, n)
//返回一个string，包含字符串s中从p开始的n个字符的拷贝（p的默认值是0，n的默认值是s.size() - p，即不加参数会默认拷贝整个s）