#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//编写函数不允许创建临时变量，求字符串的长度
//

//int Strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return Strlen(p + 1) + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int len = Strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//求n的阶乘
//递归
//int fac(int n)
//{
//	if (n > 0)
//		return n * fac(n - 1);
//	else
//		return 1;
//}

//迭代
//int fac(int n)
//{
//	int i = 1;
//	int num = 1;
//	while (i <= n)
//	{
//		num *= i;
//		i++;
//	}
//	return num;
//}
//
//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf("%d", &n);
//
//	num = fac(n);
//	printf("%d\n", num);
//
//	return 0;
//}

//求斐波那契数列
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

int fib(int n)
{
	int num1 = 1;
	int num2 = 1;
	int num = 0;
	int i = 3;

	if (n <= 2)
		return 1;
	else
	{
		while (i <= n)
		{
			num1 = num1 + num2;
			num = num1;
			num1 = num2;
			num2 = num;
			i++;
		}
	}
	return num2;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int num = fib(n);
	printf("%d\n", num);

	return 0;
}
