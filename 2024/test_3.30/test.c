#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d ", i);
//	}while(i < 10);
//
//	return 0;
//}

//int main()
//{
//	int n = 0, i = 1, num = 1;
//	scanf("%d", &n);
//	//while (i <= n)//while循环
//	//{
//	//	num *= i;
//	//	i++;
//	//}
//	//do//do...while循环
//	//{
//	//	num *= i;
//	//	i++;
//	//} while (i <= n);
//	for (i = 1; i <= n; i++)//for循环
//	{
//		num *= i;
//	}
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	int i = 1, j = 1, num = 1, sum = 0;
//	//for循环
//	for (i = 1; i <= 10; i++)
//	{
//		num = 1;
//		for (j = 1; j <= i; j++)
//		{
//			num *= j;
//		}
//		sum += num;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 1, sum = 0, num = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		num *= i;
//		sum += num;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0, i = 0, n = sz / 2;
//	scanf("%d", &k);
//	//for (i = 0; i < sz ; i++)
//	//{
//	//	if (k == arr[i])
//	//	{
//	//		printf("%d\n", i);
//	//		break;
//	//	}
//	//	i++;
//
//	//}
//	for (i = 0; i < sz; i++)
//	{
//		if (k > arr[n])
//		{
//			n += n / 2;
//			i++;
//		}
//		else if (k < arr[n])
//		{
//			n -= n / 2;
//			i++;
//		}
//		else
//		{
//			printf("%d\n", n);
//			break;
//		}
//	}
//
//	return 0;
//}

int main()
{
	int left = 0, right = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 1;
	//printf("%d\n", sz);
	int i = 0;
	int k = 0;
	scanf("%d", &k);
	for (i = 0; i < sz; i++)
	{
		if (k < arr[(right + left) / 2])
		{
			right = (right + left) / 2 - 1;
		}
		else if (k > arr[(right + left) / 2])
		{
			left = (right + left) / 2 + 1;
		}
		else
		{
			printf("%d\n", (right + left) / 2);
			break;
		}
	}


	return 0;
}