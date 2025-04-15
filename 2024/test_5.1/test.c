#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//判断闰年
//int leapyear(int n)
//{
//	if (((0 == n % 4) && (0 != n % 100)) || (0 == n % 400))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = leapyear(year);
//	if (1 == ret)
//		printf("leap year...\n");
//	else if (0 == ret)
//		printf("not leap year...\n");
//
//	return 0;
//}


//有序数组二分查找
int binary_search(int* p, int n, int m)
{
	int left = 0, right = n - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (m < *(p + mid))
			right = mid - 1;
		else if (m > *(p + mid))
			left = mid + 1;
		else
			return mid;
	}

	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", sz);
	int k = 0;
	int ret = 0;
	scanf("%d", &k);

	ret = binary_search(arr, sz, k);
	printf("%d\n", ret);

	return 0;
}