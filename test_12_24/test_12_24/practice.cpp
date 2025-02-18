//剑指offer：翻转单词顺序列

//题目：牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，
//有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，正确
//的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？

//class Solution {
//public:
//	string ReverseSentence(string str) {
//		int count = 0;
//		int begin = 0;
//		reverse(str.begin(), str.end());                
//		for (int i = 0; i <= str.size(); i++)           //需要注意：一定要包括str.size()，否则会导致最后一个单词没有被逆置
//		{
//			++count;
//			if (str[i] == ' ' || str[i] == '\0')
//			{
//				reverse(str.begin() + begin, str.begin() + count - 1);
//				begin = count;
//			}
//		}
//		return str;
//	}
//};

//思路：先将字符串逆置一遍，然后在局部逆置每个单词