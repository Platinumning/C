#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////дһ�����������������Ľϴ�ֵ
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


//����y��ֵ
//��֪һ������y=f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1   

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


//����constant

//int main()
//{
//	//���泣��
//	3.14;
//	9999;
//	'a';//�ַ�
//	"hello";
//
//	//const���εĳ�����
//	const int a = 10;  //�����a��const���εĳ�����
//
//	//��C�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
//
//	//a = 20;  //a�ǲ���ֱ���޸ĵģ�
//	printf("%d", a);  //10
//	return 0;
//}

//define ����ı�ʶ������
//#define MAX 100
//#define MIN 0
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%d\n", MIN);
//	//MAX = 10; //err
//	//define����ı�ʶ�����������޸�
//	return 0;
//}

//ö�ٳ���
//ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
//enum Color//��ɫ
//{
//	//ö�ٳ���
//	RED,
//	BULE,
//	GREEN,
//	BLACK
//};
//enum SEX//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	//ֻ����ö�ٳ���Ϊö�ٱ�����ֵ
//	//RED = 20;//err
//	//MALE = 10;//err
//	return 0;
//}


//�ַ���
//int main()
//{
//	char arr1[]="hello world";
//	char arr2[] = { 'h','e','l','l','o'};
//	char arr3[] = { 'h','e','l','l','o','\0' };
//	//ע���ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ������ݡ�
//	printf("%s\n", arr1);//hello world
//	printf("%s\n", arr2);//hello���������������������������hello
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
//	//���ַ������ȵ�һ��������string length  ͷ�ļ� string.h
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

//ת���ַ�

//��ӡc:\code\test.c
//int main()
//{
//	printf("c:\code\test.c");//c:code  est.c
//	return 0;
//}

//����ĸ��
//����ĸ�ʲ������еı�����������
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

//ע��
//int ADD(int x, int y)
//{
//	return x + y;
//}
///*C���Է��ע��
//int SUB(int x, int y)
//{
//	return x - y;
//}*/
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//C++ע�ͷ��
//	//int n3 = 0;
//	scanf("%d %d", &n1, &n2);
//	printf("%d\n", ADD(n1,n2));
//	return 0;
//}