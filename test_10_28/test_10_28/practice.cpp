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
//		int i;
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
//		while (index_original >= 0 && index_new>index_original)
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