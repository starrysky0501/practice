//��ָoffer���������ظ�������

//��Ŀ������
//��һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ� ������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�Ҳ��֪��
//ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡� ���磬������볤��Ϊ7������{2,3,1,0,2,5,3}����ô��Ӧ�������
//��һ���ظ�������2��

//class Solution {
//public:
//	// Parameters:
//	//        numbers:     an array of integers
//	//        length:      the length of array numbers
//	//        duplication: (Output) the duplicated number in the array number
//	// Return value:       true if the input is valid, and there are some duplications in the array number
//	//                     otherwise false
//	bool duplicate(int numbers[], int length, int* duplication) {
//		if (numbers == nullptr)
//		{
//			return false;
//		}
//		for (int i = 0; i<length; i++)
//		{
//			if (numbers[i]<0 || numbers[i]>length - 1)
//			{
//				return false;
//			}
//		}
//
//		int *hash = new int[length];
//
//		for (int i = 0; i<length; i++)
//		{
//			hash[i] = 0;
//		}
//
//		for (int i = 0; i<length; i++)
//		{
//			hash[numbers[i]]++;
//		}
//
//		for (int i = 0; i<length; i++)
//		{
//			if (hash[i]>1)
//			{
//				*duplication = i;
//				return true;
//			}
//		}
//		return false;
//	}
//};