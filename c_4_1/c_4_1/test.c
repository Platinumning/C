#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//打印 Hello World
//int main()
//{                  
//	printf("Hello World\n");
//	return 0;
//}                  

//求各数据类型所占内存大小
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	return 0;
//}


//求两数之和
//int main()
//
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//全局变量和局部变量
//int a = 10;//全局变量
//int main()
//{
//	{
//		int b = 20;//局部变量
//		
//		printf("%d\n", a);
//		printf("%d\n", b);
//
//	}
//	return 0;
//}


//int a = 10;
//int main()
//{
//	int a = 20; //当全局变量和局部变量名字相同的情况下，局部优先
//	printf("%d", a);
//	return 0;
//}

//声明来自外部的符号
//extern int a;
//int main()
//{
//	printf("%d", a);
//}
//


//小飞机
//输出描述：
//     **
//     **
//************
//************
//    *  *
//    *  *

//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//
//}



//输出学生信息
//输出描述：
//输出分为三行，分别为标题行，分隔行，信息行。
//第一行，标题行，每个标题之间间隔4个空格。
//第二行，分隔行，一共21个减号"-"。
//第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下：
//Name Age Gender
//---------------------
//Jack 18 man

//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//
//}


//发布信息
//你的手机丢了，在屏幕上输出信息告诉大家。
//输出描述：
//I lost my cellphone!

//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}


//计算表达式的值
//请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212
//输出描述：(-8+22)×a-10+c÷2计算之后的结果，为一个整数

//int main()
//{
//	int a = 40;
//	int c = 212;
//	int z = 0;
//	z = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", z);
//	return 0;
//}















