#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void print(int x)
//{
//	while (x >= 10)
//	{
//		print(x / 10);
//		break;
//	}
//	printf("%d ", x % 10);
//}

//void print(int x)
//{
//	while (x > 0)
//	{
//		print(x / 10);
//		printf("%d ", x % 10);
//		break;
//	}
//}

//void print(int x)
//{
//	if (x >= 10)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}

void print(int x)
{
	if (x > 0)
	{
		print(x / 10);
		printf("%d ", x % 10);
	}
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);

	return 0;
}