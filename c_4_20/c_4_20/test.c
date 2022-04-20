#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值，打印出结果
/*
思路：
1. 从上述表达式可以分析出
   a. 该表达式主要由100项，齐数项为正，偶数项为负
2. 设置一个循环从1~100，给出表达式中的每一项：1.0/i, 注意此处不能使用1，否则结果全部为0
    然后使用flag标记控制奇偶项，奇数项为正，偶数项为负
    然后将所有的项相加即可
*/
//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    int flag = 1;
//    for (i = 1; i <= 100; i++)
//    {
//        sum = sum + flag * 1.0 / i;
//        flag = -flag;
//    }
//    printf("%lf\n", sum);
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//void Swap(int* a, int* b)
//{
//    int z = *a;
//    *a = *b;
//    *b = z;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    Swap(&a, &b);
//    printf("%d %d", a, b);
//    return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
/*
思路：
1. 设计函数原型，不需要返回值，参数N表示乘法口诀表总共有多少行
2. 设定两个循环，外层循环控制总共有多少行
             内层循环控制每行有多少个表达式以及表达式中的内容
*/
#include <stdlib.h>
//void multiplication(int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%2d*%2d=%3d", i, j, i * j);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    multiplication(i);
//    system("pause");
//    return 0;
//}


#include <math.h>
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//int is_prime(int n)
//{
//    int i = 0;
//    for (i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//        return 1;
//}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i+=2)
//    {
//        if (is_prime(i))
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\ncount = %d\n", count);
//    return 0;
//}


//实现函数判断year是不是润年。
/*
思路：
  0. 函数原型设计
    返回值：必须要有返回值，返回结果为0说明不是闰年，为非0说明时闰年
    参数：年份
  1. 十年一闰百年不闰：即如果year能够被4整除，但是不能被100整除，则year是闰年
  2. 每四百年再一闰：如果year能够被400整除，则year是闰年
*/
//int leap_year(int y)
//{
//    if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    int year = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (leap_year(year))
//        {
//            printf("%d ", year);
//        }
//    }
//    return 0;
//}