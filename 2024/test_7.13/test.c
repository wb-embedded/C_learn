#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
////			printf("%d ", *(*(parr + i) + j));
////			printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int(*p)[10] = &arr;

	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*p + i));
	}

	return 0;
}