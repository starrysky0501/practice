//leetcode����ת�ַ�����ĵ���
//��Ŀ������
//����һ���ַ����������ת�ַ����е�ÿ�����ʡ�
//˵����
//�޿ո��ַ�����һ�����ʡ�
//�����ַ���������ǰ����ߺ����������Ŀո񣬵��Ƿ�ת����ַ����ܰ�����
//����������ʼ��ж���Ŀո񣬽���ת�󵥴ʼ�Ŀո���ٵ�ֻ��һ����
//�ڶ��ַ���:�ַ������飬vector<string>
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
//����˼·��
//������Ҫ�����ַ�������Ƿ��пո��ַ���ĩβ�Ƿ��пո񣬵���֮��Ŀո�Ϊһ�����Ƕ����
//������if��else�����У�����Щ������ֿ��ǵ�������һ���ַ����������洢ÿ�����ʣ�if������ϱ����Ĵ�С�������ų�ԭ
//�ַ�������Ŀո�Ҳ�����ų�����֮��Ŀո��Լ��ֶ����ӿո�ͬʱҲ�����ų�ԭ�ַ��������Ŀո�else�е���
//���ַ����õ�ÿ�����ʣ����ǻ�Ӧ���ǵ�������ԭ�ַ�������û�пո�������ֱ�ӽ�������ʼ��絽�����С�����������
//�����еĵ��ʣ����ÿո����ӡ����⿼������߼�˼ά��
//ʱ�临�ӶȺͿռ临�Ӷȶ�ΪO(N)




//������������ջ���ص�,stack<string>
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
//�÷���˼·��
//��������whileѭ��ȥ���ַ���ǰ��Ŀո���forѭ���У�����if��else����ȥ������֮��Ŀո��Լ�����ֶ��ӿո�
//���stack��pop��top�Լ�empty��������ջ�еĵ������δ�ӡ����
//ʱ�临�ӶȺͿռ临�Ӷȶ�ΪO��N)




//leetcode:��ת�ַ����еĵ��� III
//��Ŀ������
//����һ���ַ���������Ҫ��ת�ַ�����ÿ�����ʵ��ַ�˳��ͬʱ�Ա����ո�͵��ʵĳ�ʼ˳��
//ע�⣺���ַ����У�ÿ�������ɵ����ո�ָ��������ַ����в������κζ���Ŀո�
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
//����˼·��
//��������������¼ÿ�����ʵ���ʼλ�ú���ֹλ��(�����ַ����ĳ��Ȳ�δ�����ı䣬����2�������㹻�����ַ����ĳ��ȵķ���
//�ı䣬��������Ҫʹ��3����������ϸ��ο�����ת�ַ�����ĵ��ʡ�)��Ȼ��ÿһ�����ʽ��з�ת���ɣ����һ�����ʽ�β��
//�ǿո����Ի���Ҫһ��Լ������end<�ַ����ĳ���.
//ʱ�临�Ӷ�Ϊ0(N)
//�ռ临�Ӷ�ΪO(1)




//leetcode:ɾ�����������е��ظ���
//��Ŀ˵����
//����һ���������飬����Ҫ�� ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.size() == 0 || nums.size() == 1)
//			return nums.size();
//		int end = 0;
//		for (int start = 1; start<nums.size(); start++)
//		{
//			while (start<nums.size() && nums[end] == nums[start])   //��һ����������д�ڵڶ���������ǰ�棬����ᷢ��ջ���
//			{
//				start++;
//			}
//			if (start<nums.size())    /���ϸ���������
//			{
//				nums[++end] = nums[start];
//			}
//		}
//		return end + 1;
//	}
//};
//����˼·��
//���������������������飬��������ͬ�����֣�end���䣬start�ı䣬end��¼�������±��λ�á�
//������Ƕ��ڿ���ָ���Ӧ��
//ʱ�临�Ӷȣ�O(N)
//�ռ临�Ӷȣ�O(1)

//������Ϊͬһ�෽����������if�����ж��У��ǶԲ��ȵ���������Ľ���������Ǵ�����ȵ����
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




//leetcode���ƶ���
//����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
//˵�� :
//������ԭ�����ϲ��������ܿ�����������顣
//�������ٲ���������
//��Ŀ������
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
//����˼·��
//�����ǵ��͵Ŀ���ָ���Ӧ�á���������������jΪ��ָ�룬���ĺ�����ָ��0λ�ã�iΪ��ָ�룬���ĺ�����ָ���0λ�á���i��
//j��ͬһ��λ��ʱ��˵�������ֵ�ǰ�涼�Ƿ�0Ԫ�أ�����Ҳ�ǽ���������i��j��ͬ����Ҳ��ζ��jͣ��0��λ�ã�iѰ�ҷ�0λ��
//����0��ֵ����ǰ�ƶ���