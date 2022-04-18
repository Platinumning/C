#define _CRT_SECURE_NO_WARNINGS

//在一个有序数组中查找具体的某个数字n。
//折半查找（二分查找）
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("没找到\n");
//		}
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//Welcome to China
//****************
//W**************a
//We************na
//......
//Welcome to China
// 
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] =  "Welcome to China" ;
//	char arr2[] =  "****************" ;
//
//	int left = 0;
//	int right = strlen(arr2) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("Welcome to China\n");
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码为abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
////比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
////如果返回值是0，表示2个字符串相等
//		{
//			printf("密码正确，登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入:>\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入均错误，退出程序\n");
//	}
//	return 0;
//}


//猜数字游戏
//1.随机生成一个数字
//2.猜大小
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
////菜单函数
//void menu()
//{
//	printf("***猜数字游戏*********************\n");
//	printf("**********************************\n");
//	printf("**********************************\n");
//	printf("***********   1、play  ***********\n");
//	printf("***********   0、exit  ***********\n");
//	printf("**********************************\n");
//	printf("**********************************\n");
//	printf("**********************************\n");
//}
////游戏函数
//void game()
//{
//	int guess = 0;
//	//生成随机数；
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！！！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}


//goto语句
//int main()
//{
//again:
//	printf("Hello World\n");
//	printf("HHHHHHHHHHH\n");
//	goto again;
//	return 0;
//}


//关机程序
//1. 电脑运行起来后，1分中内关机
//2. 如果输入：我是猪，就取消关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在60秒内关机，如果输入：666，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "666") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑在60秒内关机，如果输入：666，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "666") == 0)
//			{
//				system("shutdown -a");
//				break;
//			}
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//strcpy:复制
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	char arr3[20] = "hello github";
//	//memset(arr3, 'x', 5);//memset:修改
//	memset(arr3+6, 'x', 6);
//	printf("%s", arr3);
//	return 0;
//}


//函数求较大值
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Max(a, b);
//	printf("%d", ret);
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
int Swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 0;
	int b = 0;
	//a和b叫实参
	scanf("%d %d", &a, &b);
	//交换
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
