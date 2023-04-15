#define _CRT_SECURE_NO_WARNINGS
#include"all.h"
//class person
//{
//public:
//	person()
//	{
//		cout << "person函数被调用" << endl;
//	}
//	person(int a)
//	{
//		cout << "带参的函数" << endl;
//	}
//	person(const person& p)
//	{
//		cout << "拷贝函数" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数被调用" << endl;
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
//	ElemType* elem;     //指向数据元素的基地址
//	int  length;          //线性表的当前长度                                                      
//}SqList;
//Status InitList(SqList& L)
//{ //构造一个空的顺序表L
//	L.elem = new ElemType[MAXSIZE];  //为顺序表分配空间
//	if (!L.elem) exit(OVERFLOW);       //存储分配失败
//	L.length = 0;			  //空表长度为0
//	return OK;
//}
//void CreatSqL(SqList& L)
//{
//	int n;//要创建的表长
//	int i;//i为循环变量
//	printf("请输入表长(不超过100):\n");
//	scanf("%d", &n);//输入表长
//	for (i = 0; i < n; i++)
//	{
//		printf("元素%d:", i + 1);
//		scanf("%d", &L.elem[i]);//依次输入各元素
//	}
//	L.length = n;//给L.length实际的表长
//}
//Status GetElem(SqList L, int i, ElemType& e)
//{//根据指定的位置序号i，获取第i个元素的值
//	if (i<1 || i>L.length) return ERROR;
//	//判断i值是否合理，若不合理，返回ERROR
//	e = L.elem[i - 1];   //第i-1的单元存储着第i个数据
//	return OK;
//}
//
//void ShowSqL(SqList L)
//{
//	int i;
//	printf("整数表各元素为:\n");
//	for (i = 0; i < L.length; i++)
//		printf("   %d", L.elem[i]);
//	printf("\n");
//}
//
//int main()
//{
//	SqList L1;
//	int loc;//给定的位置序号
//	ElemType m;//给定的位置序号上的元素
//	InitList(L1);//调用初始化函数构造一个空表
//	CreatSqL(L1);//创建整数表L1
//	ShowSqL(L1);
//	printf("输入要取值的位置序号：\n");
//	scanf("%d", &loc);//输入要取值的位置序号
//	GetElem(L1, loc, m);
//	printf("表L1中第%d位置上的元素是%d\n", loc, m);
//
//}


int main()
{

}
  