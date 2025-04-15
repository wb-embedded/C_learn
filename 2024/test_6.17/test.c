#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//青蛙跳台阶
//int Fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//删除序列中指定数字
//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int num = 0;
//	scanf("%d", &num);
//
//	for (i = 0; i < n; i++)
//	{
//		if (num == arr[i])
//			arr[i] = 0;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//计算最大最小值之差
int main()
{
	int n = 0;
	int arr[10] = { 0 };
	int i = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];

	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	int ret = max - min;

	printf("%d\n", ret);

	return 0;
}