#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//дһ�������ӡ1 - 100֮������3�ı���������
//int main()
//{
//	int i = 3;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 3;
//	}
//	return 0;
//}

//���������������������������Լ��
//���磺���룺20 40  �����20
/*
���Լ���������������й���Լ��������ߡ�
���ķ�ʽ�Ƚ϶࣬������١�շת�������������𷨡�Stein�㷨�㷨
�˴���Ҫ���ܣ�շת�����
˼·��
���ӣ�18��24�����Լ��
��һ�Σ�a = 18  b = 24  c = a%b = 18%24 = 18
	  ѭ���У�a = 24   b=18
�ڶ��Σ�a = 24   b = 18  c = a%b = 24%18 = 6
	  ѭ���У�a = 18   b = 6
�����Σ�a = 18   b = 6   c=a%b = 18%6 = 0
  ѭ������
��ʱb�е����ݼ�Ϊ�������е����Լ����
*/
//int main()
//{
//	int a = 20;
//	int b = 40;
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//��������������N�ܹ���4���������Ҳ��ܱ�100����������������ߣ�N�ܱ�400������Ҳ������
//����4��һ���Ұ��겻��ÿ400������һ��
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//				printf("%d ", year);
//		}
//		if (year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}


//дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//}


//int main()
//{
//	int a = 20;
//	if (20 == a)
//		printf("hahaha\n");
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age > 18 && age < 28)
//		printf("��׳��\n");
//	else if (age > 28 && age < 40)
//		printf("����\n");
//	else if (age > 40 && age < 60)
//		printf("����\n");
//	else if (age > 60 && age < 100)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//����else
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (10 == a)
//		if (20 == b)
//			printf("haha\n");
//	else
//		printf("hehe\n");
//	return 0;
//}


//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%d������", a);
//	}
//	else
//	{
//		printf("%d��ż��", a);
//	}
//	return 0;
//}

//���1-100֮�������
// ����1
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d ", a);
//		}
//		a++;
//	}
//	return 0;
//}
//����2
//int main()
//{
//	int a = 1;
//	while (a < 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}

//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n", day);
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n", day);
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//switchǶ��ʹ��
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1: n++;
//        case 2: m++; n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}

//��ӡ1~10����
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//			break;
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		a++;
//		if (5 == a)
//			continue;
//		printf("%d ", a);
//	}
//	return 0;
//}
//whileѭ���е�
//break���������õ���ֹѭ��
//continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[30] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//ֻ��ӡ�����ַ�
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar() )!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}