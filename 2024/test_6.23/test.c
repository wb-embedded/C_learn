#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�������������1�ĸ���
//int one_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int ret = one_count(a);
//	printf("%d\n", ret);
//
//	return 0;
//}

//���������������в�ͬλ�ĸ���
//int one_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int dif_count(int x, int y)
//{
//	int count = 0;
//	int n = x ^ y;
//
//	count = one_count(n);
//
//	return count;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	scanf("%d %d", &x, &y);
//
//	int ret = dif_count(x, y);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ֱ��ӡ���������е�����λ��ż��λ
//void print(int x)
//{
//	int i = 0;
//	int arr1[32] = { 0 };
//	int arr2[32] = { 0 };
//	int n = 0;
//	int m = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 1)
//		{
//			arr1[n] = x & 1;
//			n++;
//		}
//		else
//		{
//			arr2[m] = x & 1;
//			m++;
//		}
//		x = x >> 1;
//	}
//
//	for (i = n - 1; i >= 0; i--)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = m - 1; i >= 0; i--)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print(n);
//
//	return 0;
//}

//ȫ�ֱ�������̬��������ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϱ���ʼ��Ϊ0
//�ֲ��������������ջ��������ʼ����Ĭ��ֵ���
//int i;
//
//int main()
//{
//	i--;
//	
//	//sizeof����ֵ��size_t���͵ģ����޷�������
//	//iҪת�����޷�������
//	if (i > sizeof(i))
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//��ӡָ������ͼ��
// 
// 
// *   *
//  * *
//   *
//  * *
// *   *
// 
// *    *
//  *  *
//   **
//  *  *
// *    *
// 
// 
void print(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		if (i <= n / 2)
		{
			for (j = 1; j < i; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= n - 2 * (i - 1); j++)
			{
				if ((j == 1) || (j == (n - 2 * (i - 1))))
					printf("*");
				else
					printf(" ");
			}
		}
		else
		{
			for (j = 1; j <= n - i; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= 2 * i - n; j++)
			{
				if ((j == 1) || (j == (2 * i - n)))
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	print(n);

	return 0;
}