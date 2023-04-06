#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//#include<cmath>
#include<ctime>
using namespace std;
int length(int arr[])
{
	return sizeof(arr) / sizeof(int);
}
void swat(int *a, int *b)
{
	int *c = NULL;
	c = a;
	a = b;
	b = c;

}
//int main()
//{
//	/*int a = 50;
//	int b = 20;
//	int c = 30;
//	int d = (a > b ? a : b) > c ? a > b ? a : b : c;
//	cout << d << endl;*/
//	/*int num = rand() % 100 + 1;
//	cout << num << endl;
//	int num2 = rand() % 100 + 1;
//	cout << num2 << endl;
//	int num3 = rand() % 100 + 1;
//	cout << num3 << endl;*/
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100;
//	int num1;
//	cout << "请输入num1的值" << ": ";
//	cin >> num1;
//	cout << endl;
//	while (num != num1)
//	{
//		if (num1 > num)
//		{
//			cout << "你的输入过大,请重新输入" << endl;
//			cout << "你的输入是：";
//			cin >> num1;
//		}
//		else
//		{
//			cout << "你的输入过小，请重新输入" << endl;
//			cout << "你的输入是：";
//			cin >> num1;
//		}
//	}
//	cout << "游戏结束你的输入正确" << endl;
//	//system("pause");
//}

//水仙花数
//int main()
//{
//	int num = 100;
//	int a;
//	int b;
//	int c;
//	do {
//		a = num / 100;
//		b = num % 100 / 10;
//		c = num % 10;
//		if (a * a * a + b * b * b + c * c * c == num)
//		{
//			cout << num << " ";
//		}
//		num++;
//	} while (num < 1000);
//}

//敲桌子
//int main()
//{
//	for (int num = 1; num <= 100; num++) {
//		if (num % 10 == 7 || num / 10 == 7 || num % 7 == 0)
//		{
//			cout << "敲桌子" << " ";
//		}
//		else {
//			cout << num << " ";
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 12,35,56,67,43,234,65 };
//	cout << arr << endl;
//	cout << &arr[0] << endl;
//}


//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int num = arr[0];
//	for (int i = 0; i <= 3; i++)
//	{
//		if (arr[i] < arr[i + 1]) {
//			num = arr[i + 1];
//		}
//	}
//	cout << num << endl;
//}

//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	int arr1[5];
//	for (int i = 0; i < 5; i++)
//	{
//		arr1[i] = arr[4 - i];
//	}
//	arr = arr1;
//}

//int main()
//{
//	int arr[] = { 1,3,2,5,4 };
//	int start = 0;
//	int end = length(arr);
//	for (; start <= end; start++, end--)
//	{
//		swat(&arr[start], &arr[end]);
//	}
//	for (int i = 0; i < end; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}

//int main()
//{
//	int arr[] = {4,2,8,0,5,7,1,3,9};
//	cout << "开始进行排序";
//	int lengths = 0;
//	lengths = length(arr);
//	int swaps;
//	for (int i = 0; i <lengths - 1; i++)
//	{
//		for (int j = 0; j < lengths - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swaps = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = swaps;
//			}
//		}
//	}
//	for (int i = 0; i < lengths; i++) {
//		cout << arr[i] << " ";
//	}
//}

int main()
{
	int arr[2][2] = { {2,3},{3,5} };
	cout << (int)arr <<endl;
	cout << sizeof(arr[0]);

}