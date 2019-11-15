//把字符串转化成整数
class Solution {
public:
	int StrToInt(string str) {
		int flag = 1, sum = 0;   //flag起初应置1，否则，if和else if语句进不去，后面的flag是一个随机值。
		int i = 0;             
		if (str[i] == '+')       //i不能直接用0代替，因为有可能第一个字符不是'+','-'，则下面判断直接从第二个字符开始
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
			while (str[i] >= '0' && str[i] <= '9')    //认识一下，isdigit函数，主要用于检查其参数是否为十进制数字字符
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

//心路历程：这个题看似简单，但对我来说，好像挖了很多坑。
//今后继续加油，细心谨慎