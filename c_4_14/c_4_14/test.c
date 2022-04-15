#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	if (10 == a)
//	{
//		printf("hhhh\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//写代码将三个整数数按从大到小输出。
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a > c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("c=%d b=%d a=%d\n", c, b, a);
	return 0;
}