#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#define PI 3.14
class yuan
{
public:
	double r;
	double calculate()
	{
		return 2 * PI * r;
	}
};

class student
{
public:
	string name;
	string haom;
	void set()
	{
		cout << "������ѧ��������" << endl;
		cin >> name;
		cout << endl;
		cout << "������ѧ����ѧ��" << endl;
		cin >> haom;
		cout << endl;
	}
	void printAll()
	{
		cout << "ѧ����������" << name << "ѧ����" << haom << endl;
	}
};
int main()
{
	yuan YQ{};
	YQ.r = 10;
	cout << YQ.calculate() <<endl;
	student stu;
	stu.set();
	stu.printAll();
}

