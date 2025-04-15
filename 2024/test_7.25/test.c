#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
////公务员面试，算平均分
//#define NUM 7.0
//
//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//float ave(int arr[])
//{
//	float ave = 0.0f;
//	float sum = 0.0f;
//	int i = 0;
//
//	qsort(arr, NUM, sizeof(*arr), int_cmp);
//	for (i = 1; i < NUM - 1; i++)
//	{
//		sum += arr[i];
//	}
//
//	ave = sum / (NUM - 2.0f);
//
//	return ave;
//}
//
//int main()
//{
//	int arr[7] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < NUM; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	float ret = ave(arr);
//
//	printf("%.2f\n", ret);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//
//	return 0;
//}

//模拟实现atoi
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>
//
//int my_atoi(char ch[])
//{
//	int flag = 1;
//	long long num = 0;
//	if (ch == NULL)
//	{
//		return 0;
//	}
//	if (strlen(ch) == 0)
//	{
//		return 0;
//	}
//	while (*ch == ' ')
//	{
//		ch++;
//	}
//	if (*ch == '-')
//	{
//		flag = -1;
//		ch++;
//	}
//	if (*ch == '+')
//	{
//		ch++;
//	}
//	while (*ch != '\0')
//	{
//		if ((*ch >= '0') && (*ch <= '9'))
//		{
//			num = num * 10 + flag * (*ch - '0');
//			if (num > INT_MAX)
//			{
//				num = INT_MAX;
//				break;
//			}
//			else if (num < INT_MIN)
//			{
//				num = INT_MIN;
//				break;
//			}
//			ch++;
//		}
//		else
//			break;
//	}
//
//	return num;
//}
//
//int main()
//{
//	char ch[] = "   -11111111111111111111111111111111111111111111111111111";
//
//	printf("%d\n", my_atoi(ch));
//
//	return 0;
//}

//定义一个宏，将一个整数的二进制位的奇数位和偶数位进行交换
//#define SWAP_BIT(n) ((n&0x5555)<<1)+((n&0xaaaa)>>1)
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int ret = SWAP_BIT(a);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a = 0, ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		a++;
//		putchar(ch);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//int Fib(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 0;
//
//	int i = 1;
//	while (1)
//	{
//		if ((n >= Fib(i - 1)) && (n <= Fib(i)))
//		{
//			int a = n - Fib(i - 1);
//			int b = Fib(i) - n;
//			num = (a < b) ? a : b;
//			break;
//		}
//		i++;
//	}
//	printf("%d\n", num);
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	char ch[] = "we are happy";
//
//	while(ch)
//
//	return 0;
//}

int main()
{
	char ch1[] = "we are happy";
	char ch2[100] = { 0 };

	int i = 0;
	int j = 0;

	while (*(ch1 + i) != '\0')
	{
		if (*(ch1 + i) != ' ')
		{
			*(ch2 + j) = *(ch1 + i);
			i++;
			j++;
		}
		else
		{
			i++;
			*(ch2 + j++) = '%';
			*(ch2 + j++) = '2';
			*(ch2 + j++) = '0';
		}
	}
	*(ch2 + j) = '\0';

	printf("%s\n", ch2);

	return 0;
}