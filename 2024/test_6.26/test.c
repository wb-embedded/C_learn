#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����a+aa+aaa+aaaa+aaaaa�ĺͣ�aΪ����
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d", &a);
//
//	for (i = 1; i <= 5; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//��ӡˮ�ɻ���
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int j = 0;
//
//	for (num = 0; num < 100000; num++)
//	{
//		int count = 1;
//		int sum = 0;
//		int n = 10;
//
//		while (num / n)
//		{
//			count++;
//			n *= 10;
//		}
//
//		int temp = num;
//		int m = 1;
//
//		for (i = 0; i < count; i++)
//		{
//			int k = temp % 10;
//			for (j = 0; j < count; j++)
//			{
//				m *= k;
//			}
//			sum += m;
//			m = 1;
//			temp /= 10;
//		}
//
//		if (num == sum)
//			printf("%d ", num);
//
//	}
//
//	return 0;
//}

//#include <assert.h>
////��ӡָ��ͼ��
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	assert(n % 2 == 1);
//	int i = 0;
//	int j = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		if (i <= n / 2)
//		{
//			for (j = 1; j <= (n - 2 * i + 1) / 2; j++)
//			{
//				printf(" ");
//			}
//			for (j = 1; j <= 2 * i - 1; j++)
//			{
//				printf("*");
//			}
//		}
//		else
//		{
//			for (j = 1; j <= i - (n + 1) / 2; j++)
//			{
//				printf(" ");
//			}
//			for (j = 1; j <= (n - 2 * ( i - (n + 1) / 2)); j++)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <assert.h>
////����ˮ���⣬1ƿ��ˮ1Ԫ��2����ƿ��һƿ��ˮ��20Ԫ���Ժȶ�����ˮ
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	assert(money > 0);
//	int total = money;
//	int empty = money;
//
//	//�û�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//
//	return 0;
//}

