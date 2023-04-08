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
	cout << "*******     1.�����ϵ��      *******" << endl;
	cout << "*******     2.��ʾ��ϵ��      *******" << endl;
	cout << "*******     3.ɾ����ϵ��      *******" << endl;
	cout << "*******     4.������ϵ��      *******" << endl;
	cout << "*******     5.�޸���ϵ��      *******" << endl;
	cout << "*******     6.���ͨѶ¼      *******" << endl;
	cout << "*******     0.�˳�ͨѶ¼      *******" << endl;
	cout << "*************************************" << endl;
}

void addPman(addressBook* ads)
{
	if (ads->direction == MAX)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	cout << "��������ϵ�˵�����" << endl;
	cin >> ads ->cpn[ads->direction].name;
	cout << endl;

	cout << "��������ϵ�˵��Ա�";
	cin >> ads->cpn[ads->direction].sex;
	cout << "��������ϵ�˵�����" << endl;
	cin >> ads->cpn[ads->direction].age;
	cout << endl;
	cout << "��������ϵ�˵ĵ�ַ" << endl;
	cin >> ads->cpn[ads->direction].address;
	cout << endl;
	cout << "��������ϵ�˵ĵ绰����" << endl;
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
		cout << "��" << i + 1 << "����ϵ�˵���Ϣ��" << endl;
		cout << "����" << abs->cpn[abs->direction].name << endl;
		cout << "�Ա�" << abs->cpn[abs->direction].sex << endl;
		cout << "����" << abs->cpn[abs->direction].age << endl;
		cout << "�绰" << abs->cpn[abs->direction].phone << endl;
		cout << "��ͥסַ" << abs->cpn[abs->direction].address << endl;
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
	cout << "��ô���ѡ����ʲô";
	cout << endl;
	int select = 0;
	cin >> select;
	while (1)
	{
		switch (select)
		{
		case 1:
			cout << "����׼�������ϵ��..." << endl;
			addPman(&abs);
			break;
		case 2:
			cout << "����׼����ʾ��ϵ��..." << endl;
			break;
		case 3:
			cout << "����׼��ɾ����ϵ��..." << endl;
			break;
		case 4:
			cout << "����׼����������������ϵ��" << endl;
			break;
		case 5:
			cout << "����׼�����������ϵ�����Ͽ�ʼ�޸�" << endl;
			break;
		case 6:
			cout << "����׼�������ϵ�˵��б�" << endl;
			break;
		case 0:
			cout << "����׼���˳�����" << endl;
			break;
		default:
			cout << "��������������������" << endl;
		}
	}
}