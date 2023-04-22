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
	Student* stu;//ÿ������Ԫ�ص�����
	int length;//���ж��ٸ�ѧ��
	int listlize;//����˳���ĳ���
}SqList;

int initList(SqList* L) {
	//����һ���ռ䡣
	//malloc ������c����������ռ��ڴ�
	L ->stu = (Student*)malloc(MAXSIZE * sizeof(Student));
	//�ж��Ƿ��õ�������ռ��ڴ档
	if (!L->stu) exit(-1);
	//����õ��ڴ�ͳ�ʼ��˳���
	L->length = 0;
	L->listlize = MAXSIZE;
	return 1;
}
//����˳���
int deleteList(SqList* L)
{
	//1.�ж����Ƿ����
	if (L->stu == NULL) return 0;
	//2.����������ͷ����ڴ�
	free(L->stu);
	//3.�ͷ��ڴ��Ժ�ָ���ĳ�ʼֵ
	L->length = 0;
	L->listlize = 0;
	return 1;
}