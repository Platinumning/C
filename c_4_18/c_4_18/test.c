#define _CRT_SECURE_NO_WARNINGS

//��һ�����������в��Ҿ����ĳ������n��
//�۰���ң����ֲ��ң�
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("û�ҵ�\n");
//		}
//	}
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//Welcome to China
//****************
//W**************a
//We************na
//......
//Welcome to China
// 
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] =  "Welcome to China" ;
//	char arr2[] =  "****************" ;
//
//	int left = 0;
//	int right = strlen(arr2) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("Welcome to China\n");
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//��������Ϊabcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
////�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
////�������ֵ��0����ʾ2���ַ������
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������:>\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������������˳�����\n");
//	}
//	return 0;
//}


//��������Ϸ
//1.�������һ������
//2.�´�С
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
////�˵�����
//void menu()
//{
//	printf("***��������Ϸ*********************\n");
//	printf("**********************************\n");
//	printf("**********************************\n");
//	printf("***********   1��play  ***********\n");
//	printf("***********   0��exit  ***********\n");
//	printf("**********************************\n");
//	printf("**********************************\n");
//	printf("**********************************\n");
//}
////��Ϸ����
//void game()
//{
//	int guess = 0;
//	//�����������
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("�����֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�����\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}


//goto���
//int main()
//{
//again:
//	printf("Hello World\n");
//	printf("HHHHHHHHHHH\n");
//	goto again;
//	return 0;
//}


//�ػ�����
//1. ��������������1�����ڹػ�
//2. ������룺��������ȡ���ػ�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����60���ڹػ���������룺666����ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "666") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����60���ڹػ���������룺666����ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "666") == 0)
//			{
//				system("shutdown -a");
//				break;
//			}
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//strcpy:����
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	char arr3[20] = "hello github";
//	//memset(arr3, 'x', 5);//memset:�޸�
//	memset(arr3+6, 'x', 6);
//	printf("%s", arr3);
//	return 0;
//}


//������ϴ�ֵ
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Max(a, b);
//	printf("%d", ret);
//	return 0;
//}

//дһ���������Խ����������α���������
int Swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 0;
	int b = 0;
	//a��b��ʵ��
	scanf("%d %d", &a, &b);
	//����
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
