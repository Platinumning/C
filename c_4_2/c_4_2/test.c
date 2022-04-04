#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////写一个函数求两个整数的较大值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("max=%d", a);
//	}
//	else
//	{
//		printf("max=%d", b);
//	}
//
//	return 0;
//}


//计算y的值
//已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1   

//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        y = 1;
//        printf("%d\n", y);
//    }
//    else if (x == 0)
//    {
//        y = 0;
//        printf("%d\n", y);
//    }
//    else
//    {
//        y = -1;
//        printf("%d\n", y);
//    }
//    return 0;
//}


//常量constant

//int main()
//{
//	//字面常量
//	3.14;
//	9999;
//	'a';//字符
//	"hello";
//
//	//const修饰的常变量
//	const int a = 10;  //这里的a是const修饰的常变量
//
//	//在C语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性。
//
//	//a = 20;  //a是不能直接修改的！
//	printf("%d", a);  //10
//	return 0;
//}

//define 定义的标识符常量
//#define MAX 100
//#define MIN 0
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%d\n", MIN);
//	//MAX = 10; //err
//	//define定义的标识符常量不能修改
//	return 0;
//}

//枚举常量
//注：枚举常量的默认是从0开始，依次向下递增1的
//enum Color//颜色
//{
//	//枚举常量
//	RED,
//	BULE,
//	GREEN,
//	BLACK
//};
//enum SEX//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	//只能用枚举常量为枚举变量赋值
//	//RED = 20;//err
//	//MALE = 10;//err
//	return 0;
//}


//字符串
//int main()
//{
//	char arr1[]="hello world";
//	char arr2[] = { 'h','e','l','l','o'};
//	char arr3[] = { 'h','e','l','l','o','\0' };
//	//注：字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。
//	printf("%s\n", arr1);//hello world
//	printf("%s\n", arr2);//hello烫烫烫烫烫烫烫烫烫烫烫烫烫蘦ello
//	printf("%s\n", arr3);//hello
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = { 'h','e','l','l','o','\0' };
//
//	printf("%d\n", strlen(arr1));//11
//	printf("%d\n", strlen(arr2));//5
//
//	int len = strlen("hello world");
//	//求字符串长度的一个函数，string length  头文件 string.h
//	printf("%d\n", len);//11
//
//	printf("%s\n", arr1);//hello world
//	printf("%s\n", arr2);//hello
//	return 0;
//}

//int main()
//{
//	printf("hello\n");//hello
//	printf("hel\0lo\n");//hel
//  return 0;
//}

//转义字符

//打印c:\code\test.c
//int main()
//{
//	printf("c:\code\test.c");//c:code  est.c
//	return 0;
//}

//三字母词
//三字母词不是所有的编译器都适用
//int main()
//{
//	printf("??)");//]
//	printf("??(");//[
//	return 0;
//}

//int main()
//{
//	printf("%s\n","hello world\?\?" );//hello world??
//	printf("%c\n", '\'');//'
//	printf("%c\n", '\"');//"
//	printf("hello\n");//hello
//	printf("%s\n", "hello");//hello
//	printf("hel\\0lo\n"); //hel\0lo
//	printf("c:\\test\\test.c\n");//c : \test\test.c
//	printf("\a\a");
//	printf("abc\nd\tef");//abc
//	printf("%c\n", '\130');
//	printf("%c\n", '\x063');//c
//	printf("%d\n", strlen("qwer t"));//6
//	printf("%d\n", strlen("c:\test\628\test.c"));//14
//	return 0;
//}

//注释
//int ADD(int x, int y)
//{
//	return x + y;
//}
///*C语言风格注释
//int SUB(int x, int y)
//{
//	return x - y;
//}*/
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//C++注释风格
//	//int n3 = 0;
//	scanf("%d %d", &n1, &n2);
//	printf("%d\n", ADD(n1,n2));
//	return 0;
//}