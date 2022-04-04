#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//选择语句
//int main()
//{
//	int age = 0;
//	printf("你的年龄为：");
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("恭喜你，你已经成年了\n");
//	}
//	else
//	{
//		printf("很抱歉，你还未成年呢\n");
//	}
//	return 0;
//}

//求两数较大者：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("max=%d\n", a);
//	}
//	else
//	{
//		printf("max=%d\n", b);
//	}
//	return 0;
//}


//多个if else语句同时使用
//int main()
//{
//	int n = 0;
//	printf("请输入你的成绩：");
//	scanf("%d",&n);
//	if (n >= 90 && n <= 100)
//	{
//		printf("你的成绩等级为A\n");
//	}
//	else if (n >= 80 && n <= 90)
//	{
//		printf("你的成绩等级为B\n");
//	}
//	else if (n >= 70 && n < 80)
//	{
//		printf("你的成绩等级为C\n");
//	}
//	else if (n >= 60 && n <= 70)
//	{
//		printf("你的成绩等级为D\n");
//	}
//	else if (n >= 0 && n <= 60)
//	{
//		printf("你的成绩等级为E\n");
//	}
//	else
//	{
//		printf("你输入的成绩无效\n");
//	}
//	return 0;
//}

//if 语句也可以嵌套使用
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a != b)
//	{
//		if (a > b) {
//			printf("a>b\n");
//		}
//		else {
//			printf("a<b\n");
//		}
//	}
//	else
//	{
//		printf("a == b");
//	}
//	return 0;
//}
//


//循环语句
//while循环
//打印1-11间的奇数
//int main()
//{
//	int n = 0;
//	while (n<=10)
//	{
//		n = n + 1;
//		printf("%d\n", n);
//		n++;
//	}
//	return 0;
//}
//
//


//计算1-100的和
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	while (n <= 100)
//	{
//		sum += n;
//		n++;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//函数
//求2个任意整数和
//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int sum = 0;
//	printf("请输入两个数\n");
//	scanf("%d %d", &n1, &n2);
//	sum = ADD(n1, n2);
//	printf("两数之和=%d",sum);
//	return 0;
//}


//数组
//数组定义
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个整形数组，最多放10个元素
//	printf("%d\n", arr[9]);
//	return 0;
//}

//数组的使用
int main()
{
	int n = 0;
	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
	for (n = 0; n < 10; n++)
	{
		printf("%d\n", arr[n]);
	}
	
	return 0;
}
