//��Ŀ����
//����������ͬ���ȵ����ַ� a �� b ���ɵ��ַ������������ǵľ���Ϊ��Ӧλ�ò�ͬ���ַ� ���������紮��aab���봮��aba���ľ���Ϊ 2; ����ba���봮��aa���ľ���Ϊ 1; ����baa���ʹ���baa���� ����Ϊ 0��������������ַ��� S �� T������ S �ĳ��Ȳ�С�� T �ĳ��ȡ������� | S | ���� S �� ���ȣ� | T | ���� T �ĳ��ȣ���ô�� S ��һ���� | S | -| T | +1 ���� T ������ͬ���Ӵ�����������Ҫ�� �� T ������Щ | S | -| T | +1 ���Ӵ��ľ���ĺ͡�
//�������� :
//��һ�а���һ���ַ��� S��
//�ڶ��а���һ���ַ��� T��
//S��T�����ַ�a��b��ɣ�1�� | T | �� | S | ��105��
//������� :
//�����Ӧ�Ĵ𰸡�
//#include <iostream>
//using namespace std;
//int main(){
//	string s1, s2;
//	cin >> s1;
//	cin >> s2;
//	long long numa, numb, total, pos;
//	numa = numb = total = pos = 0;
//	for (int i = 0; i<s1.length(); ++i){
//		if (i<s2.length()){
//			if (s2[i] == 'a') numa++;
//			else numb++;
//		}
//		if (s1[i] == 'a') total += numb;
//		else total += numa;
//		if (i >= s1.length() - s2.length()){
//			if (s2[pos++] == 'a') numa--;
//			else numb--;
//		}
//	}
//
//	cout << total;
//
//}