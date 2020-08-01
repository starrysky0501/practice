#include<iostream>
#include<stdlib.h>
using namespace std;

////class Date
////{
////public:
////	Date() = default;
////	void printyear()
////	{
////		cout << year << "-"<< month << "-" << day << endl;
////	}
////	Date(int _year,int _month,int _day )
////	{
////		this->year = _year;
////		this->month = _month;
////		this->day = _day;
////	}
////private:
////	int year=1900;
////	int month=1;
////	int day=1;
////};
////int main()
////{
////	Date A(1);
////	A.printyear();
////	system("pause");
////	return 0;
////}







//class A
//{
//private:
//	int _a=1;
//public:
//	void printA()
//	{
//		cout << this->_a << endl;
//	}
//};
//int main()
//{
//	A b();
//	b.printA();
//	system("pause");
//	return 0;
//}
//int main()
//{
//	Year a;
//	a.printyear();
//	system("pause");
//	return 0;
//}

//class Preason
//{
//	char* _name;
//	char* _sex;
//	int _age;
//public:
//	void showinfo();
//};
//
//int main()
//{
//	Preason a;
//	a._age;
//}

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = NULL; 
//	p->PrintA();
//	p->Show();
//	system("pause");
//	return 0;
//}
class Date
{
public:
	Date() = default;
	void printyear()
	{
		cout << year << "-" << month << "-" << day << endl;
	}
	Date(int _year, int _month, int _day)
	{
		this->year = _year;
		this->month = _month;
		this->day = _day;
	}
private:
	int year = 1900;
	int month = 1;
	int day = 1;
};
int main()
{
	Date A(2019,8,1);
	A.printyear();
	system("pause");
	return 0;
}