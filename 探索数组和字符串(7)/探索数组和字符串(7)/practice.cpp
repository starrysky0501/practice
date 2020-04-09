//leetcode����ת����

//��Ŀ˵����
//����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����
//˵�� :
//�������������Ľ�����������������ֲ�ͬ�ķ������Խ��������⡣
//Ҫ��ʹ�ÿռ临�Ӷ�ΪO(1)��ԭ���㷨��
//����һ��ʹ��3�η�ת(algorithmͷ�ļ��е�reverse�㷨��
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		k = k%nums.size();
//		if (k == 0)
//			return;
//		reverse(nums.begin(), nums.end());
//		reverse(nums.begin(), nums.begin() + k);
//		reverse(nums.begin() + k, nums.end());
//
//	}
//};
//�÷���˼·��
//�ƶ�K��λ�ã���˵����k��Ԫ�������ƶ�K��λ�ã���Ϊ��K��Ԫ�����ջ��ƶ��������ǰ�棬�������Ƚ��������鷴ת��
//���ŷ�תǰK��Ԫ�أ���󽫺����Ԫ��Ҳ��ת��
//ʱ�临�Ӷ�Ϊ0(N):n��Ԫ�ر���ת��3��       �ռ临�Ӷ�Ϊ0(1)��û��ʹ�ö���Ŀռ�

//������������������
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		k = k%nums.size();
//		int num, tmp;
//		for (int i = 0; i<k; ++i)
//		{
//			num = nums[nums.size() - 1];
//			for (int i = 0; i<nums.size(); ++i)
//			{
//				tmp = nums[i];
//				nums[i] = num;
//				num = tmp;
//			}
//		}
//	}
//};
//�÷���˼·����ת k �Σ�ÿ�ν�������ת 1 ��Ԫ�ء�ע��leetcode��û��ͨ������Ϊʱ�临�Ӷ�̫��
//ʱ�临�Ӷ�ΪO(N*K)��N������ĳ��ȣ�K���ƶ�K��   �ռ临�Ӷ�ΪO(1)��û�ж���ռ䱻ʹ��

//�����������ٶ���ռ�
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		vector<int> arr(nums.size());
//		int size = nums.size();
//		for (int i = 0; i<size; ++i)
//		{
//			arr[(i + k) % size] = nums[i];
//		}
//		for (int i = 0; i<size; ++i)
//		{
//			nums[i] = arr[i];
//		}
//	}
//};
//�÷���˼·��
//���ǿ�����һ���������������ÿ��Ԫ�طŵ���ȷ��λ���ϣ�Ҳ����ԭ���������±�Ϊi�����ǰ����ŵ�(i + k) % ���鳤�� 
//��λ�á�Ȼ����µ����鿽����ԭ�����С�
//ע��leetcode�ϲ�����ͨ������Ϊ����Ŀռ临�Ӷ�Ҫ��ΪO��1��
//ʱ�临�Ӷ�ΪO(n)�������ַŵ��µ���������Ҫһ���������һ�������������Ԫ�ؿ�����ԭ���顣
//�ռ临�Ӷ�ΪO(n)����һ��������Ҫԭ���鳤�ȵĿռ䡣

//�����ģ�ʹ�û�״�滻��
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		int size = nums.size();
//		k = k % size;
//		if (k == 0 || size < 2)
//			return;
//		int count = 0;
//		for (int start = 0; start<size; ++start)
//		{
//			if (count == size)
//				return;
//			int cur = nums[start];
//			int index = start;
//			do
//			{
//				int next = nums[(index + k) % size];
//				int temp_index = (index + k) % size;
//				nums[temp_index] = cur;
//				cur = next;
//				index = temp_index;
//				count++;
//			} while (start != index);
//		}
//	}
//};
//�÷���˼·��
//��Ԫ�ؿ���ͬѧ�����±꿴����λ����һ���λ����һ��ͬѧ�뿪��λȥ��k + 1����λ����k + 1����λ��ͬѧ������ȥ�ˣ�
//����ȥ������k����λ����˷��������ǻ����һ���������������һ��ͬѧ������֮�������˵�һ��ͬѧ��λ�ã���λ�ã�
//û�˱��������������Ǵ�ʱ������û�е���λ�ã�������˳���õڶ���ͬѧ��λ�á� ��ôʲôʱ��Ϳ��Ա�֤ÿ��ͬѧ����
//�����أ�n��ͬѧ����n�Σ�������һ��count���������ɡ�
//ʱ�临�Ӷ�ΪO(N):ֻ������ÿ��Ԫ��һ��
//�ռ临�Ӷ�ΪO(1):ʹ���˳���������ռ�
