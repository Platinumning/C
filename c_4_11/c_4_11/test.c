#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//�ؼ���-typedef
//typedef ����˼�������Ͷ��壬����Ӧ�����Ϊ������������

//��unsigned int ������Ϊuint, ����uintҲ��һ��������
//typedef unsigned int uint;
//
//int main()
//{
//	//�۲�a��b,������������������һ����
//	unsigned int a = 10;
//	uint b = 20;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//�ؼ���-static
//��C�����У�static���������α����ͺ�����
//1.���ξֲ����� - ��Ϊ��̬�ֲ�����
//2.����ȫ�ֱ��� - ��Ϊ��̬ȫ�ֱ���
//3.���κ��� - ��Ϊ��̬����

//���ξֲ�����
//����1
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
//����2
//void test()
//{
// //static���ξֲ�����
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

//����ȫ�ֱ���

//����1
//extern int g_val;
//
//int main()
//{
//	printf("%d ", g_val);
//	return 0;
//}

//���κ���

//extern int Add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d", c);
//}

//define�����ʶ������
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


//ָ��

//int main()
//{
//	int a = 20;
//	&a;
//	printf("%p\n", &a);
//	int* p = &a;
//	//p����ָ�����
//	*p = 10;
//	//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//�ṹ��


struct Stu
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};
void print(struct Stu* py)
{
	printf("%s %d %s %s\n", (*py).name, (*py).age, (*py).sex, (*py).tele);
	//->
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", py->name, py->age, py->sex, py->tele);
}
int main()
{
	struct Stu y = { "ylf", 19,"nv","1394829489" };
	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n",y.name,y.age,y.sex,y.tele );
	print(&y);
	return 0;
}