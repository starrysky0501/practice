#include<stdlib.h>
#include<iostream>
using namespace std;
class Test
{
public:
	Test()
		: _data(0)
	{
		cout << "Test():" << this << endl;
	}
	~Test()
	{
		cout << "~Test():" << this << endl;
	}

private:
	int _data;
};
void Test2()
{
	// ���뵥��Test���͵Ŀռ�
	Test* p1 = (Test*)malloc(sizeof(Test));
	free(p1);

	// ����10��Test���͵Ŀռ�
	Test* p2 = (Test*)malloc(sizeof(Test) * 10);
	free(p2);
}

int main()
{
	Test2();
	_CrtDumpMemoryLeaks();
	return 0;
}