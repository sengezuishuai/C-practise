#define _CRT_SECURE_NO_WARNINGS
#include"all.h"
struct contactPerson
{
	string name;
	int age;
	string address;
	string phone;
};

int main()
{
	int pointer = 0;
}  

void add_Contacts(contactPerson per[],int pointer)
{
	cout << "请输入联系人的名字" << endl;
	cin >> per[pointer - 1].name;
	cout << endl;
	cout << "请输入联系人的年龄" << endl;
	cin >> per[pointer - 1].age;
	cout << endl;
	cout << "请输入联系人的地址" << endl;
	cin >> per[pointer - 1].address;
	cout << endl;
	cout << "请输入联系人的电话号码" << endl;
	cin >> per[pointer - 1].phone;
	cout << endl;
}

void showMeun()
{
	cout << "*************************************" << endl;
	cout << "*******     1.添加联系人      *******" << endl;
	cout << "*******     2.显示联系人      *******" << endl;
	cout << "*******     3.删除联系人      *******" << endl;
	cout << "*******     4.查找联系人      *******" << endl;
	cout << "*******     5.修改联系人      *******" << endl;
	cout << "*******     6.清空通讯录      *******" << endl;
	cout << "*******     0.退出通讯录      *******" << endl;
	cout << "*************************************" << endl;
}

void look_Up(contactPerson per[], int pointer)
{
	for (int i = 0; i < pointer; i++)
	{
		cout << "第" << i << "个联系人的信息" << endl;
		cout << "联系人的名字是" << per[i].name << endl;
		cout << "联系人的年龄是" << per[i].age << endl;
		cout << "联系人的住址是" << per[i].address << endl;
		cout << "联系人的电话号码是" << per[i].phone << endl;
	}
}

void exit()
{
	string judge;
	cout << "你确定要退出通讯录吗？yes/no" << endl;
	cin >> judge;
	if (judge == "yes")
		return;
	if (judge != "no")
		cout << "你的输入错误" << endl;
	showMeun();
}