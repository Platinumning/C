#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//	int arr4[][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	//printf("%d\n", arr1[0]);
//	//printf("%d\n", arr2[0][1]);
//	//printf("%d\n", arr3[2][2]);
//	//printf("%d\n", arr4[0][0]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//冒泡排序
//
//数组传参，有2种写法：
// 1.数组
// 2.指针
//

//形参是数组的形式
//void bubble_sort(int arr[], int sz)
//{
//	//次数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一次冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//形参是指针的形式
//void bubble_sort(int* arr, int sz)
//{
//	//次数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一次冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int main()
//{
//	//数组
//	//把数组的顺序排成升序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//冒泡排序的算法，对数组进行排序
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数组名确实能表示首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr + 1);
//	printf("--------------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0] + 1);
//	printf("--------------------\n");
//	printf("%p\n", &arr);//数组得地址
//	printf("%p\n", &arr + 1);
//	return 0;
//}



//二维数组的数组名的理解
int main()
{
	int arr[3][4] = { 0 };

	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	int sz = sizeof(arr);
	printf("%d\n", sz);

	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	return 0;
}
