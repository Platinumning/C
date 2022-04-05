#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//输入描述：
//一行，一个字符。
//输出描述：
//一行，输出输入字符对应的ASCII码。
//int main()
//{
//    char ch;
//    scanf("%c", &ch);
//    printf("%d", ch);
//    return 0;
//}

//输入描述：
//随机输入的浮点数
//输出描述：
//四舍五入之后的整数
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    printf("%.0f", a);
//    return 0;
//}

//输入描述：
//一行，3科成绩，用空格分隔，范围（0~100）。
//输出描述：
//一行，把3科成绩显示出来，输出格式详见输出样例。
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//描述
//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
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
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//
//数据范围：年份满足 1990 \le y \le 2015 \1990≤y≤2015 ，月份满足 1 \le m \le 12 \1≤m≤12  ，日满足 1 \le d \le 30 \1≤d≤30
//输入描述：
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述：
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
//int main()
//{
//    int year;
//    int month;
//    int date;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", date);
//    return 0;
//}

//描述
//
//输入两个整数，范围 - 231~231 - 1，交换两个数并输出。
//
//输入描述：
//输入只有一行，按照格式输入两个整数，范围，中间用“, ”分隔。
//输出描述：
//把两个整数按格式输出，中间用“, ”分隔。
//int main()
//{
//    int a;
//    int b;
//    int tmp;
//    scanf("a=%d,b=%d", &a, &b);
//    tmp = a;
//    a = b;
//    b = tmp;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}

//描述
//实现字母的大小写转换。多组输入输出。
//输入描述：
//多组输入，每一行输入大写字母。
//输出描述：
//针对每组输入输出对应的小写字母。
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        putchar(ch + 32);
//        printf("\n");
//    }
//    return 0;
//}