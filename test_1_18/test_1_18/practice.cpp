//��ָoffer:�˿���˳��

//��ĿҪ��LL���������ر��,��Ϊ��ȥ����һ���˿���,���������Ȼ��2������,2��С��(һ����ԭ����54��^_^)...
//��������г����5����,�����Լ�������,�����ܲ��ܳ鵽˳��,����鵽�Ļ�,������ȥ��������Ʊ,�ٺ٣���
//������A,����3,С��,����,��Ƭ5��,��Oh My God!������˳��.....LL��������,��������,������\С �����Կ����κ�
//����,����A����1,JΪ11,QΪ12,KΪ13�������5���ƾͿ��Ա�ɡ�1,2,3,4,5��(��С���ֱ���2��4),��So Lucky!����
//LL����ȥ��������Ʊ���� ����,Ҫ����ʹ�������ģ������Ĺ���,Ȼ���������LL��������Σ� ����������˳��
//�����true����������false��Ϊ�˷������,�������Ϊ��С����0��


//class Solution {
//public:
//	bool IsContinuous(vector<int> numbers) {
//		int len = numbers.size();
//		if (len != 5)	return false;
//		sort(numbers.begin(), numbers.end());
//		int jokers = 0;//����������Ŀ 
//		for (int i = 0; i<5 && numbers[i] == 0; i++){
//			jokers++;
//		}
//		if (jokers>4)	return false;
//
//		for (int i = jokers + 1; i<5; i++){
//			if (numbers[i] == numbers[i - 1])//�ж϶��ӵĴ��� 
//				return false;
//		}
//		int dis = numbers[4] - numbers[jokers];
//		if (dis <= 4)	return true;
//		return false;
//	}
//};