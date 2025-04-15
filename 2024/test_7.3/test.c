#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };

	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);

	int i = 0;

	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}

	int j = 0;
	int k = 0;

	while (j < m && k < n)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}

	if (j == m)
	{
		for (; k < n; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	else if (k == n)
	{
		for (; j < m; j++)
		{
			printf("%d ", arr1[j]);
		}
	}

	return 0;
}

