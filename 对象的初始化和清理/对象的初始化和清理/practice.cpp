#define _CRT_SECURE_NO_WARNINGS
#include"all.h"
//class person
//{
//public:
//	person()
//	{
//		cout << "person����������" << endl;
//	}
//	person(int a)
//	{
//		cout << "���εĺ���" << endl;
//	}
//	person(const person& p)
//	{
//		cout << "��������" << endl;
//	}
//	~person()
//	{
//		cout << "��������������" << endl;
//	}
//
//};
//
//void text()
//{
//	person per;
//}
//int main()
//{
//	text();
//	person per;
//	person(10);
//	system("pause");
//}
//class phone
//{
//public:
//	string p_name;
//};
//class person
//{
//public:
//	person(string name,string pName):name(name),p_name(pName)
//	{
//
//	}
//
//	string name;
//	string p_name; 
//};

//class person
//{
//	static int a;
//};
//
//int person::a = 10;
//int main()
//{
//	cout << person::a;
//}

//typedef  struct
//{
//	ElemType* elem;     //ָ������Ԫ�صĻ���ַ
//	int  length;          //���Ա�ĵ�ǰ����                                                      
//}SqList;
//Status InitList(SqList& L)
//{ //����һ���յ�˳���L
//	L.elem = new ElemType[MAXSIZE];  //Ϊ˳������ռ�
//	if (!L.elem) exit(OVERFLOW);       //�洢����ʧ��
//	L.length = 0;			  //�ձ���Ϊ0
//	return OK;
//}
//void CreatSqL(SqList& L)
//{
//	int n;//Ҫ�����ı�
//	int i;//iΪѭ������
//	printf("�������(������100):\n");
//	scanf("%d", &n);//�����
//	for (i = 0; i < n; i++)
//	{
//		printf("Ԫ��%d:", i + 1);
//		scanf("%d", &L.elem[i]);//���������Ԫ��
//	}
//	L.length = n;//��L.lengthʵ�ʵı�
//}
//Status GetElem(SqList L, int i, ElemType& e)
//{//����ָ����λ�����i����ȡ��i��Ԫ�ص�ֵ
//	if (i<1 || i>L.length) return ERROR;
//	//�ж�iֵ�Ƿ����������������ERROR
//	e = L.elem[i - 1];   //��i-1�ĵ�Ԫ�洢�ŵ�i������
//	return OK;
//}
//
//void ShowSqL(SqList L)
//{
//	int i;
//	printf("�������Ԫ��Ϊ:\n");
//	for (i = 0; i < L.length; i++)
//		printf("   %d", L.elem[i]);
//	printf("\n");
//}
//
//int main()
//{
//	SqList L1;
//	int loc;//������λ�����
//	ElemType m;//������λ������ϵ�Ԫ��
//	InitList(L1);//���ó�ʼ����������һ���ձ�
//	CreatSqL(L1);//����������L1
//	ShowSqL(L1);
//	printf("����Ҫȡֵ��λ����ţ�\n");
//	scanf("%d", &loc);//����Ҫȡֵ��λ�����
//	GetElem(L1, loc, m);
//	printf("��L1�е�%dλ���ϵ�Ԫ����%d\n", loc, m);
//
//}


int main()
{

}
  