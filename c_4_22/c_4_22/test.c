#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//дһ���������Խ����������α��������ݡ�
//void Swap(int* a, int* b)
//{
//	int z = *a;
//	*a = *b;
//	*b = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}


//дһ�����������ж�һ�����ǲ���������
// 
//��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//flagΪ1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


#include <math.h>
//sqrt����ѧ�⺯��:��ƽ��
//<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//дһ�����������ж�һ�����ǲ���������
//int prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//дһ�������ж�һ���ǲ�������
//��ӡ1000~2000��֮�������
//�����жϵĹ���
//1. �ܱ�4���������Ҳ��ܱ�100����������
//2. �ܱ�400����������
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0))||(year %400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//дһ�������ж�һ���ǲ�������
//�����귵��1
//�����귵��0
//int leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}
//


//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//	return 0;
//}

//int Add(int n)
//{
//	return ++n;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//	return 0;
//}


//��ʽ����
//#include <string.h>
//int main()
//{
//	int len = strlen("hello");
//	printf("%d\n", len);
//	printf("%d\n", strlen("hello"));
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
