#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//ѡ�����
//int main()
//{
//	int age = 0;
//	printf("�������Ϊ��");
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("��ϲ�㣬���Ѿ�������\n");
//	}
//	else
//	{
//		printf("�ܱ�Ǹ���㻹δ������\n");
//	}
//	return 0;
//}

//�������ϴ��ߣ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("max=%d\n", a);
//	}
//	else
//	{
//		printf("max=%d\n", b);
//	}
//	return 0;
//}


//���if else���ͬʱʹ��
//int main()
//{
//	int n = 0;
//	printf("��������ĳɼ���");
//	scanf("%d",&n);
//	if (n >= 90 && n <= 100)
//	{
//		printf("��ĳɼ��ȼ�ΪA\n");
//	}
//	else if (n >= 80 && n <= 90)
//	{
//		printf("��ĳɼ��ȼ�ΪB\n");
//	}
//	else if (n >= 70 && n < 80)
//	{
//		printf("��ĳɼ��ȼ�ΪC\n");
//	}
//	else if (n >= 60 && n <= 70)
//	{
//		printf("��ĳɼ��ȼ�ΪD\n");
//	}
//	else if (n >= 0 && n <= 60)
//	{
//		printf("��ĳɼ��ȼ�ΪE\n");
//	}
//	else
//	{
//		printf("������ĳɼ���Ч\n");
//	}
//	return 0;
//}

//if ���Ҳ����Ƕ��ʹ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a != b)
//	{
//		if (a > b) {
//			printf("a>b\n");
//		}
//		else {
//			printf("a<b\n");
//		}
//	}
//	else
//	{
//		printf("a == b");
//	}
//	return 0;
//}
//


//ѭ�����
//whileѭ��
//��ӡ1-11�������
//int main()
//{
//	int n = 0;
//	while (n<=10)
//	{
//		n = n + 1;
//		printf("%d\n", n);
//		n++;
//	}
//	return 0;
//}
//
//


//����1-100�ĺ�
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	while (n <= 100)
//	{
//		sum += n;
//		n++;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//����
//��2������������
//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int sum = 0;
//	printf("������������\n");
//	scanf("%d %d", &n1, &n2);
//	sum = ADD(n1, n2);
//	printf("����֮��=%d",sum);
//	return 0;
//}


//����
//���鶨��
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ���������飬����10��Ԫ��
//	printf("%d\n", arr[9]);
//	return 0;
//}

//�����ʹ��
int main()
{
	int n = 0;
	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
	for (n = 0; n < 10; n++)
	{
		printf("%d\n", arr[n]);
	}
	
	return 0;
}
