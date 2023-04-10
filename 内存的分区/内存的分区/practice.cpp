#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#define MAX 10
using namespace std;
int* a();
static  int num;
int num1;
string fsdf = "fhjdhg";
//int main()
//{
//	static int ccc;
//	int ccc1 = 1;
//	string aaaa = "hjfduh";
//	const int bbb = 10;
//	cout << &num <<endl;
//	cout << &num1 << endl;
//	cout << &ccc << endl;
//	cout << &ccc1 << endl;
//	cout << &bbb << endl;
//	cout << &aaaa << endl;
//	cout << &fsdf;
//}
//
//int* a()
//{
//	int b = 10;
//	return &b;
//}
//int* text();
//void text2();
//int main()
//{
//	/*int* p = text();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	cout << *p << endl;*/
//	text2();
//}
//
//int* text()
//{
//	return new int(10);
//}
//
//void text2()
//{
//	int* p1 = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		p1[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p1[i] << endl;
//	}
//	delete[] p1;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p1[i] << endl;
//	}
//}

int main() 
{
	int a = 10;
	int& b = a;
	cout << a << endl;
	cout << b << endl;
	cout << &a << endl;
	cout << &b << endl;
}