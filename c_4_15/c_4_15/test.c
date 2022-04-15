#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 3;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 3;
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//例如：输入：20 40  输出：20
/*
最大公约数：即两个数据中公共约数的最大者。
求解的方式比较多，暴力穷举、辗转相除法、更相减损法、Stein算法算法
此处主要介绍：辗转相除法
思路：
例子：18和24的最大公约数
第一次：a = 18  b = 24  c = a%b = 18%24 = 18
	  循环中：a = 24   b=18
第二次：a = 24   b = 18  c = a%b = 24%18 = 6
	  循环中：a = 18   b = 6
第三次：a = 18   b = 6   c=a%b = 18%6 = 0
  循环结束
此时b中的内容即为两个数中的最大公约数。
*/
//int main()
//{
//	int a = 20;
//	int b = 40;
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//打印1000年到2000年之间的闰年
//闰年的条件：如果N能够被4整除，并且不能被100整除，则是闰年或者：N能被400整除，也是闰年
//即：4年一润并且百年不润，每400年再润一次
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//				printf("%d ", year);
//		}
//		if (year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//}


//int main()
//{
//	int a = 20;
//	if (20 == a)
//		printf("hahaha\n");
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age > 18 && age < 28)
//		printf("青壮年\n");
//	else if (age > 28 && age < 40)
//		printf("青年\n");
//	else if (age > 40 && age < 60)
//		printf("中年\n");
//	else if (age > 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("寿星\n");
//	return 0;
//}

//悬空else
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (10 == a)
//		if (20 == b)
//			printf("haha\n");
//	else
//		printf("hehe\n");
//	return 0;
//}


//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%d是奇数", a);
//	}
//	else
//	{
//		printf("%d是偶数", a);
//	}
//	return 0;
//}

//输出1-100之间的奇数
// 代码1
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d ", a);
//		}
//		a++;
//	}
//	return 0;
//}
//代码2
//int main()
//{
//	int a = 1;
//	while (a < 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n", day);
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n", day);
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//switch嵌套使用
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1: n++;
//        case 2: m++; n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}

//打印1~10数字
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//			break;
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		a++;
//		if (5 == a)
//			continue;
//		printf("%d ", a);
//	}
//	return 0;
//}
//while循环中的
//break是用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[30] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//只打印数字字符
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar() )!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}