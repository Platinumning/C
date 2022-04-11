#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//关键字-typedef
//typedef 顾名思义是类型定义，这里应该理解为类型重命名。

//将unsigned int 重命名为uint, 所以uint也是一个类型名
//typedef unsigned int uint;
//
//int main()
//{
//	//观察a和b,这两个变量的类型是一样的
//	unsigned int a = 10;
//	uint b = 20;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//关键字-static
//在C语言中：static是用来修饰变量和函数的
//1.修饰局部变量 - 称为静态局部变量
//2.修饰全局变量 - 称为静态全局变量
//3.修饰函数 - 称为静态函数

//修饰局部变量
//代码1
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//代码2
//void test()
//{
// //static修饰局部变量
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//修饰全局变量

//代码1
//extern int g_val;
//
//int main()
//{
//	printf("%d ", g_val);
//	return 0;
//}

//修饰函数

//extern int Add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d", c);
//}

//define定义标识符常量
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d", a);
//	int arr[MAX] = { 0 };
//
//	return 0;
//}
//
//#define ADD(x,y)((x)+(y))
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = ADD(a,b);
//	printf("%d\n", c);
//	c = 10 * ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//指针

//int main()
//{
//	int a = 20;
//	&a;
//	printf("%p\n", &a);
//	int* p = &a;
//	//p就是指针变量
//	*p = 10;
//	//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//结构体


struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};
void print(struct Stu* py)
{
	printf("%s %d %s %s\n", (*py).name, (*py).age, (*py).sex, (*py).tele);
	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", py->name, py->age, py->sex, py->tele);
}
int main()
{
	struct Stu y = { "ylf", 19,"nv","1394829489" };
	//结构体对象.成员名
	printf("%s %d %s %s\n",y.name,y.age,y.sex,y.tele );
	print(&y);
	return 0;
}