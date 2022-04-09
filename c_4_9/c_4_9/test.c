#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//描述
//给定两个整数a和b(0 < a, b < 10, 000)，计算a除以b的整数商和余数。
//输入描述：
//	一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出描述：
//	一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
//int main()
//{
//	int a;
//	int b;
//	int shang;
//	int yushu;
//	scanf("%d %d", &a, &b);
//	shang = a / b;
//	yushu = a % b;
//	printf("%d %d", shang, yushu);
//	return 0;
//}

//描述
//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
//
//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
//
//输入描述：
//无
//输出描述：
//一行输出转换题目中给出的所有ASCII码对应的字符，无需以空格隔开。
//

//描述
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//
//数据范围：年份满足 1990 \le y \le 2015 \1990≤y≤2015 ，月份满足 1 \le m \le 12 \1≤m≤12  ，日满足 1 \le d \le 30 \1≤d≤30
//输入描述：
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述：
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
//int main()
//{
//	int year, month, date;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%.4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}

//描述
//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
//
//数据范围：学号满足 1 \le n \le 20000000 \1≤n≤20000000  ，各科成绩使用百分制，且不可能出现负数
//输入描述：
//学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
//输出描述：
//学号，3科成绩，输出格式详见输出样例。

//int main()
//{
//    int id;
//    float c, math, english;
//    scanf("%d;%f,%f,%f", &id, &c, &math, &english);
//    printf("The each subject score of No. %d is ", id);
//    printf("%.2f, ", c);
//    printf("%.2f, ", math);
//    printf("%.2f.", english);
//    return 0;
//}


//描述
//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//输入描述：
//无
//输出描述：
//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值。
//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n%d", a);
//    return 0;
//}

//用函数写求最大值
//int Max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    c = Max(a, b);
//    printf("%d", c);
//    return 0;
//}


//操作符
//C语言中
//0表示假
//非0表示真

//int main()
//{
//	int a = 10;
	//int b = a++;//后置++，先使用，后++
	////int b = a, a = a + 1
	//printf("%d\n", a);
	//printf("%d\n", b);
	//int c = ++a;//前置++，先++，后使用
	////a = a + 1, c = a
	//printf("%d\n", a);
	//printf("%d\n", c);
	//int d = a--;//后置--，先使用，后--
	////int d = a, a = a - 1
	//printf("%d\n", a);
	//printf("%d\n", d);
	//	int e = --a;//前置--，先--，后使用
	//	//a = a - 1, e = a
	//	printf("%d\n", a);
	//	printf("%d\n", e);
	//	return 0;
//}

