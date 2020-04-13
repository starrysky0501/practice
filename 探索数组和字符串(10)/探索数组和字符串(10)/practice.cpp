//leetcode：翻转字符串里的单词
//题目描述：
//给定一个字符串，逐个翻转字符串中的每个单词。
//说明：
//无空格字符构成一个单词。
//输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
//如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。
//第二种方法:字符串数组，vector<string>
//class Solution {
//public:
//	string reverseWords(string s) {
//		vector<string> arr;
//		string ans = "";
//		for (int i = 0; i<s.size(); ++i)
//		{
//			if (s[i] == ' ')
//			{
//				if (ans.size())
//				{
//					arr.push_back(ans);
//					ans = "";
//				}
//			}
//			else
//			{
//				ans += s[i];
//				if (i == s.size() - 1)
//				{
//					arr.push_back(ans);
//					ans = "";
//				}
//			}
//		}
//		for (int i = arr.size() - 1; i >= 0; --i)
//		{
//			ans += arr[i];
//			if (i != 0)
//			{
//				ans += " ";
//			}
//		}
//		return ans;
//	}
//};
//该题思路：
//该题需要考虑字符串起初是否有空格，字符串末尾是否有空格，单词之间的空格为一个还是多个。
//我们在if和else条件中，将这些条件充分考虑到。设置一个字符串变量，存储每个单词，if条件结合变量的大小，可以排除原
//字符串起初的空格，也可以排除单词之间的空格，自己手动最后加空格；同时也可以排除原字符串最后面的空格；else中的连
//接字符，得到每个单词，我们还应考虑到，假若原字符串后面没有空格，则我们直接将这个单词假如到数组中。最后逆序输出
//数组中的单词，并用空格连接。该题考察的是逻辑思维。
//时间复杂度和空间复杂度都为O(N)




//方法三：利用栈的特点,stack<string>
//class Solution {
//public:
//	string reverseWords(string s) {
//		int left = 0;
//		int right = s.size() - 1;
//		while (left <= right && s[left] == ' ')
//			left++;
//		while (left <= right && s[right] == ' ')
//			right--;
//		stack<string> arr;
//		string ans;
//		while (left <= right)
//		{
//			if (s[left] == ' ')
//			{
//				if (ans.size())
//				{
//					arr.push(ans);
//					ans = "";
//				}
//			}
//			else
//			{
//				ans += s[left];
//			}
//			left++;
//		}
//		arr.push(ans);
//		ans = "";
//		while (!arr.empty())
//		{
//			ans += arr.top();
//			arr.pop();
//			if (!arr.empty())
//				ans += " ";
//		}
//		return ans;
//	}
//};
//该方法思路：
//利用两个while循环去除字符串前后的空格，在for循环中，利用if和else条件去除单词之间的空格，自己最后手动加空格。
//结合stack的pop、top以及empty函数，将栈中的单词依次打印出。
//时间复杂度和空间复杂度都为O（N)




//leetcode:反转字符串中的单词 III
//题目描述：
//给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
//注意：在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。
//class Solution {
//public:
//	string reverseWords(string s) {
//		for (int start = 0; start<s.size(); ++start)
//		{
//			int end = start;
//			while (s[end] != ' ' && end<s.size())
//			{
//				end++;
//			}
//			reverse(s.begin() + start, s.begin() + end);
//			start = end;
//		}
//		return s;
//	}
//};
//该题思路：
//利用两个变量记录每个单词的起始位置和终止位置(由于字符串的长度并未发生改变，所以2个变量足够，当字符串的长度的发生
//改变，则我们需要使用3个变量，详细请参考“翻转字符串里的单词”)，然后将每一个单词进行翻转即可，最后一个单词结尾不
//是空格，所以还需要一个约束条件end<字符串的长度.
//时间复杂度为0(N)
//空间复杂度为O(1)




//leetcode:删除排序数组中的重复项
//题目说明：
//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.size() == 0 || nums.size() == 1)
//			return nums.size();
//		int end = 0;
//		for (int start = 1; start<nums.size(); start++)
//		{
//			while (start<nums.size() && nums[end] == nums[start])   //第一个条件必须写在第二个条件的前面，否则会发生栈溢出
//			{
//				start++;
//			}
//			if (start<nums.size())    /加上该限制条件
//			{
//				nums[++end] = nums[start];
//			}
//		}
//		return end + 1;
//	}
//};
//该题思路：
//利用两个变量，遍历数组，当遇到相同的数字，end不变，start改变，end记录新数组下标的位置。
//该题就是对于快慢指针的应用
//时间复杂度：O(N)
//空间复杂度：O(1)

//和上面为同一类方法，区别在if条件判断中，是对不等的情况下做的解决，上述是处理相等的情况
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.size() == 0 || nums.size() == 1)
//			return nums.size();
//		int end = 0;
//		for (int start = 1; start<nums.size(); start++)
//		{
//			if (nums[start] != nums[end])
//			{
//				end++;
//				nums[end] = nums[start];
//			}
//		}
//		return end + 1;
//	}
//};




//leetcode：移动零
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//说明 :
//必须在原数组上操作，不能拷贝额外的数组。
//尽量减少操作次数。
//题目描述：
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int j = 0;
//		for (int i = 0; i<nums.size(); ++i)
//		{
//			if (nums[i] != 0)
//			{
//				swap(nums[i], nums[j]);
//				j++;
//			}
//		}
//	}
//};
//该题思路：
//该题是典型的快慢指针的应用。定义两个变量，j为慢指针，他的含义是指向0位置，i为快指针，他的含义是指向非0位置。当i和
//j在同一个位置时，说明该数字的前面都是非0元素，交换也是交换本身。当i和j不同步，也意味着j停在0的位置，i寻找非0位置
//将非0的值都向前移动。