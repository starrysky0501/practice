//��ָoffer:��ת�������С����
//class Solution {
//public:
//	int minNumberInRotateArray(vector<int> rotateArray) {
//		if (rotateArray.size() == 0)
//			return 0;
//		int j = 0;
//		for (int i = 0; i<rotateArray.size() - 1; i++)
//		{
//			if (rotateArray[i]>rotateArray[i + 1])
//			{
//				j = i;
//				break;
//			}
//		}
//		return rotateArray[j + 1];
//	}
//};

//��ָoffer:���θ���
//class Solution {
//public:
//	int rectCover(int number) {
//		if (number <= 0)
//			return 0;
//		else if (number == 1 || number == 2)
//			return number;
//		else
//			return rectCover(number - 1) + rectCover(number - 2);
//	}
//};