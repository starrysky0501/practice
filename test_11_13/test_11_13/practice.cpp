//���ַ���ת��������
class Solution {
public:
	int StrToInt(string str) {
		int flag = 1, sum = 0;   //flag���Ӧ��1������if��else if������ȥ�������flag��һ�����ֵ��
		int i = 0;             
		if (str[i] == '+')       //i����ֱ����0���棬��Ϊ�п��ܵ�һ���ַ�����'+','-'���������ж�ֱ�Ӵӵڶ����ַ���ʼ
		{
			i++;
		}
		else if (str[i] == '-')   
		{
			flag = -1;
			i++;
		}
		while (str[i] != '\0')
		{
			while (str[i] == ' ')
				i++;
			while (str[i] >= '0' && str[i] <= '9')    //��ʶһ�£�isdigit��������Ҫ���ڼ��������Ƿ�Ϊʮ���������ַ�
			{
				sum = sum * 10 + str[i] - '0';
				i++;
			}
			if (str[i] == '\0')
				return (flag*sum);
			else
				return 0;
		}
		return 0;
	}
};

//��·���̣�����⿴�Ƽ򵥣���������˵���������˺ܶ�ӡ�
//���������ͣ�ϸ�Ľ���