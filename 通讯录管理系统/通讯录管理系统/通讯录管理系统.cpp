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
	cout << "��������ϵ�˵�����" << endl;
	cin >> per[pointer - 1].name;
	cout << endl;
	cout << "��������ϵ�˵�����" << endl;
	cin >> per[pointer - 1].age;
	cout << endl;
	cout << "��������ϵ�˵ĵ�ַ" << endl;
	cin >> per[pointer - 1].address;
	cout << endl;
	cout << "��������ϵ�˵ĵ绰����" << endl;
	cin >> per[pointer - 1].phone;
	cout << endl;
}

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

void look_Up(contactPerson per[], int pointer)
{
	for (int i = 0; i < pointer; i++)
	{
		cout << "��" << i << "����ϵ�˵���Ϣ" << endl;
		cout << "��ϵ�˵�������" << per[i].name << endl;
		cout << "��ϵ�˵�������" << per[i].age << endl;
		cout << "��ϵ�˵�סַ��" << per[i].address << endl;
		cout << "��ϵ�˵ĵ绰������" << per[i].phone << endl;
	}
}

void exit()
{
	string judge;
	cout << "��ȷ��Ҫ�˳�ͨѶ¼��yes/no" << endl;
	cin >> judge;
	if (judge == "yes")
		return;
	if (judge != "no")
		cout << "����������" << endl;
	showMeun();
}