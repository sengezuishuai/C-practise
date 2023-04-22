#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<cstdlib>
#define MAXSIZE 100

typedef struct {
	int age;
	int height;
	double weight;
}Student;
//struct Student {
//	int age;
//	int height;
//	double weight;
//};
typedef struct {
	Student* stu;//每个数组元素的类型
	int length;//共有多少个学生
	int listlize;//整个顺序表的长度
}SqList;

int initList(SqList* L) {
	//申请一个空间。
	//malloc 可以在c语言中申请空间内存
	L ->stu = (Student*)malloc(MAXSIZE * sizeof(Student));
	//判断是否拿到了这个空间内存。
	if (!L->stu) exit(-1);
	//如果拿到内存就初始化顺序表。
	L->length = 0;
	L->listlize = MAXSIZE;
	return 1;
}
//销毁顺序表
int deleteList(SqList* L)
{
	//1.判断其是否存在
	if (L->stu == NULL) return 0;
	//2.如果存在则释放其内存
	free(L->stu);
	//3.释放内存以后恢复表的初始值
	L->length = 0;
	L->listlize = 0;
	return 1;
}