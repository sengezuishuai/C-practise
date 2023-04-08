#define _CRT_SECURE_NO_WARNINGS
#include"all.h"
#define MAX 1000
struct contactPerson
{
	string name;
	string sex;
	int age;
	string phone;
	string address;
};

struct addressBook
{
	contactPerson cpn[MAX];
	int direction;
};

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

void addPman(addressBook* ads)
{
	if (ads->direction == MAX)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	cout << "请输入联系人的名字" << endl;
	cin >> ads ->cpn[ads->direction].name;
	cout << endl;

	cout << "请输入联系人的性别";
	cin >> ads->cpn[ads->direction].sex;
	cout << "请输入联系人的年龄" << endl;
	cin >> ads->cpn[ads->direction].age;
	cout << endl;
	cout << "请输入联系人的地址" << endl;
	cin >> ads->cpn[ads->direction].address;
	cout << endl;
	cout << "请输入联系人的电话号码" << endl;
	cin >> ads->cpn[ads->direction].phone;
	cout << endl;
	ads->direction++;
	system("pause");
	system("cls");
}

void printAll(addressBook* abs)
{
	for (int i = 0; i < abs->direction; i++)
	{
		cout << "第" << i + 1 << "个联系人的信息是" << endl;
		cout << "姓名" << abs->cpn[abs->direction].name << endl;
		cout << "性别" << abs->cpn[abs->direction].sex << endl;
		cout << "年龄" << abs->cpn[abs->direction].age << endl;
		cout << "电话" << abs->cpn[abs->direction].phone << endl;
		cout << "家庭住址" << abs->cpn[abs->direction].address << endl;
	}
	system("pause");
	system("cls");
}

int isExist(addressBook* abs, string name)
{
	for (int i = 0; i < abs->direction; i++)
	{
		if (abs->cpn[i].name == name)
		{
			return i;
		}
	}
	return -1;
}

void delect(addressBook* abs)
{

}



int main()
{
	addressBook abs;
	abs.direction = 0;
	showMeun();
	cout << "那么你的选择是什么";
	cout << endl;
	int select = 0;
	cin >> select;
	while (1)
	{
		switch (select)
		{
		case 1:
			cout << "正在准备添加联系人..." << endl;
			addPman(&abs);
			break;
		case 2:
			cout << "正在准备显示联系人..." << endl;
			break;
		case 3:
			cout << "正在准备删除联系人..." << endl;
			break;
		case 4:
			cout << "正在准备帮助你查找这个联系人" << endl;
			break;
		case 5:
			cout << "正在准备查找这个联系人马上开始修改" << endl;
			break;
		case 6:
			cout << "正在准备清空联系人的列表" << endl;
			break;
		case 0:
			cout << "正在准备退出事宜" << endl;
			break;
		default:
			cout << "你的输入错误请重新输入" << endl;
		}
	}
}