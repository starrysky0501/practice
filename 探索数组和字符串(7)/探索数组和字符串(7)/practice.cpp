//leetcode：旋转数组

//题目说明：
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//说明 :
//尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
//要求使用空间复杂度为O(1)的原地算法。
//方法一：使用3次反转(algorithm头文件中的reverse算法）
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
//该方法思路：
//移动K个位置，则说明后k个元素依次移动K个位置，因为后K个元素最终会移动到数组的前面，则我们先将整个数组反转，
//接着反转前K个元素，最后将后面的元素也反转。
//时间复杂度为0(N):n个元素被反转了3次       空间复杂度为0(1)：没有使用额外的空间

//方法二：暴力搜索：
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
//该方法思路：旋转 k 次，每次将数组旋转 1 个元素。注：leetcode上没有通过，因为时间复杂度太大
//时间复杂度为O(N*K)：N是数组的长度，K是移动K次   空间复杂度为O(1)：没有额外空间被使用

//方法三：开辟额外空间
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
//该方法思路：
//我们可以用一个额外的数组来将每个元素放到正确的位置上，也就是原本数组里下标为i的我们把它放到(i + k) % 数组长度 
//的位置。然后把新的数组拷贝到原数组中。
//注：leetcode上不可以通过，因为该题的空间复杂度要求为O（1）
//时间复杂度为O(n)：将数字放到新的数组中需要一遍遍历，另一边来把新数组的元素拷贝回原数组。
//空间复杂度为O(n)：另一个数组需要原数组长度的空间。

//方法四：使用环状替换：
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
//该方法思路：
//把元素看做同学，把下标看做座位，大家换座位。第一个同学离开座位去第k + 1个座位，第k + 1个座位的同学被挤出去了，
//他就去坐他后k个座位，如此反复。但是会出现一种情况，就是其中一个同学被挤开之后，坐到了第一个同学的位置（空位置，
//没人被挤出来），但是此时还有人没有调换位置，这样就顺着让第二个同学换位置。 那么什么时候就可以保证每个同学都换
//完了呢？n个同学，换n次，所以用一个count来计数即可。
//时间复杂度为O(N):只遍历了每个元素一次
//空间复杂度为O(1):使用了常数个额外空间
