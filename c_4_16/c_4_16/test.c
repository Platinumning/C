#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
/*
思路：
1. 给一个循环从1遍历到100，拿到每个数据后进行一下操作
2.  a. 通过%的方式取当前数据的个位，检测个位数据是否为9
		 如果是，给计数器加1
	b. 通过/的方式取当前数据的十位，检测十位数据是否是9，
		  如果是，给计数器加1
  循环一直继续，直到所有的数据检测完，所有9的个数已经统计在count计数中。
*/
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 10)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	
//	return 0;
//}

//在屏幕上输出9 * 9乘法口诀表
/*
思路：
两个循环进行控制
外层循环控制打印多少行
内部循环控制每行打印多少个表达式以及表达式内容，
比较简单，具体参考代码
*/
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//用for循环打印1-10
// 1、
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//2、
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//break 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d ", i);//1 2 3 4;
//	}
//	return 0;
//}

//continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);//1 2 3 4 6 7 8 9 10;
//	}
//	return 0;
//}

//for循环的判断部分省略意味这判断会恒成立
//int main()
//{
//	int i = 0;
//	for (;;)
//	{
//		printf("%c", 97);//a死循环
//	}
//	return 0;
//}

//do while循环语句
//打印1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//break
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);//1 2 3 4
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);//1 2 3 4 死循环
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);//2 3 4 6 7 8 9 10 11
//	} while (i <= 10);
//	return 0;
//}

//计算 n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//计算 1!+2!+3!+……+10!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//折半查找/二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，坐标是%d\n", i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("没找到\n");
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}