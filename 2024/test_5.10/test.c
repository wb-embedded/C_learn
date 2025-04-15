#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//打印乘法口诀表
int main()
{
	int i = 0, j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d *%2d=%2d ", j, i, i * j);
		printf("\n");
	}

	return 0;
}