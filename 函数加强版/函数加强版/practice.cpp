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
		cout << "请输入学生的名字" << endl;
		cin >> name;
		cout << endl;
		cout << "请输入学生的学号" << endl;
		cin >> haom;
		cout << endl;
	}
	void printAll()
	{
		cout << "学生的名字是" << name << "学号是" << haom << endl;
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

