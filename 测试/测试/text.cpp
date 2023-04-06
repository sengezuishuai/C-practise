//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//using namespace std;
//
//#define LENGTH 10
//
//int lengths(int arr[], int length)
//{
//    return length;
//}
//
//void bubble_sort(int arr[])
//{
//    int* p = arr;
//    int swaps;
//    int length1 = lengths(arr, LENGTH);
//    for (int i = 0; i < length1; i++)
//    {
//        for (int j = 0; j < length1 - i - 1; j++)
//        {
//            if (*p > *(p + 1))
//            {
//                swaps = *p;
//                *p = *(p + 1);
//                *(p + 1) = swaps;
//            }
//            p++;
//        }
//    }
//}
//
//int main()
//{
//    int arr[LENGTH] = { 23,45,65,334,645,2323,4545,64,23,4 };
//    bubble_sort(arr);
//    for (int i = 0; i < LENGTH; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}

#include <iostream>
using namespace std;

#define LENGTH 10

int lengths(int arr[], int length)
{
    return length;
}

void bubble_sort(int arr[])
{
    int* p = arr;
    int swaps;
    int length1 = lengths(arr, LENGTH);
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length1 - i - 1; j++)
        {
            if (*p > *(p + 1))
            {
                swaps = *p;
                *p = *(p + 1);
                *(p + 1) = swaps;
            }
            p++;
        }
    }
}

int main()
{
    int arr[LENGTH] = { 23,45,65,334,645,2323,4545,64,23,4 };
    bubble_sort(arr);
    for (int i = 0; i < LENGTH; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}