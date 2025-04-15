#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//判断最大值
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	for (i = 0; i < 3; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}

//变种水仙花
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[10] = { 0 };
//	int count = 0;
//
//	for (i = 10000; i < 100000; i++)
//	{
//		int sum = 0;
//		for (j = 10000; j > 1; j /= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		//sum += (i / 10000) * (i % 10000);
//		//sum += (i / 1000) * (i % 1000);
//		//sum += (i / 100) * (i % 100);
//		//sum += (i / 10) * (i % 10);
//		if (sum == i)
//		{
//			arr[count] = sum;
//			count++;
//		}
//			//printf("%d\n", sum);
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

