//½£Ö¸offer:Ìæ»»¿Õ¸ñ
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		if (str == NULL || length <= 0)
//		{
//			return;
//		}
//		int original_length = 0;
//		int number_blank = 0;
//		int i=0;
//		while (str[i++] != '\0')
//		{
//			++original_length;
//			if (str[i] == ' ')
//			{
//				++number_blank;
//			}
//		}
//		int new_length = original_length + 2 * number_blank;
//		int index_original = original_length - 1;
//		int index_new = new_length - 1;
//		while (index_original >= 0 && index_new>index_original)   //当新下标指针与旧下表指针相等时，则之前的字符都会在原有位置，所以退出循环，不用移动
//		{
//			if (str[index_original] == ' ')
//			{
//				str[index_new--] = '0';
//				str[index_new--] = '2';
//				str[index_new--] = '%';
//			}
//			else
//			{
//				str[index_new--] = str[index_original];
//			}
//			--index_original;
//		}
//	}
//};
//从前往后替换：后面的字符要不断往后移动，要多次移动，所以效率低
//从后向前替换：先遍历数组，计算有多少个字符以及有多少个空格；新起始下标应为原有字符个数加上2*空格数，然后从后向前移动，每次字符只移动一次，
//             所以相当于之将数组遍历了一次，效率更高


//class Solution
//{
//public:
//	void replaceSpace(char *str, int length)   //充分利用题目给的条件，例如length
//	{
//		if (str == NULL || length <= 0)
//		{
//			return;
//		}
//		int count = 0;
//		for (int i = 0; i < length; i++)  //先计算出空格的个数
//		{
//			if (str[i] == ' ')
//				count++;
//		}
//		for (int i = length - 1; i >= 0; i--)   //从后向前，遍历整个数组
//		{
//			if (str[i] != ' ')
//			{
//				str[i + 2 * count] = str[i];
//			}
//			else
//			{
//				count--;    //如果先减一，则从前向后替换%20；如果后减一，则从后向前替换%20
//				str[2 * count + i] = '%';
//				str[2 * count + i + 1] = '2';
//				str[2 * count + i + 2] = '0';
//			}
//		}
//	}
//};
  
//这次修改只是为了改标注 
  
  
  
  
  
  
