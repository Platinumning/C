#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
/*
˼·��
1. ��һ��ѭ����1������100���õ�ÿ�����ݺ����һ�²���
2.  a. ͨ��%�ķ�ʽȡ��ǰ���ݵĸ�λ������λ�����Ƿ�Ϊ9
		 ����ǣ�����������1
	b. ͨ��/�ķ�ʽȡ��ǰ���ݵ�ʮλ�����ʮλ�����Ƿ���9��
		  ����ǣ�����������1
  ѭ��һֱ������ֱ�����е����ݼ���꣬����9�ĸ����Ѿ�ͳ����count�����С�
*/
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 10)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	
//	return 0;
//}

//����Ļ�����9 * 9�˷��ھ���
/*
˼·��
����ѭ�����п���
���ѭ�����ƴ�ӡ������
�ڲ�ѭ������ÿ�д�ӡ���ٸ����ʽ�Լ����ʽ���ݣ�
�Ƚϼ򵥣�����ο�����
*/
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//��forѭ����ӡ1-10
// 1��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//2��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//break 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d ", i);//1 2 3 4;
//	}
//	return 0;
//}

//continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);//1 2 3 4 6 7 8 9 10;
//	}
//	return 0;
//}

//forѭ�����жϲ���ʡ����ζ���жϻ�����
//int main()
//{
//	int i = 0;
//	for (;;)
//	{
//		printf("%c", 97);//a��ѭ��
//	}
//	return 0;
//}

//do whileѭ�����
//��ӡ1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//break
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);//1 2 3 4
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);//1 2 3 4 ��ѭ��
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);//2 3 4 6 7 8 9 10 11
//	} while (i <= 10);
//	return 0;
//}

//���� n�Ľ׳�
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//���� 1!+2!+3!+����+10!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//�۰����/���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ�������%d\n", i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("û�ҵ�\n");
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
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
//	}
//	return 0;
//}