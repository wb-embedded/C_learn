#define _CRT_SECURE_NO_WARNINGS
//将三个数从大到小输出

#include <stdio.h>

void sort(int a, int b, int c)
{
	if (a > b)
	{
		if (b > c)
			printf("%d %d %d\n", a, b, c);
		else if ((b < c) && (a < c))
			printf("%d %d %d\n", c, a, b);
		else if ((b < c) && (a > c))
			printf("%d %d %d\n", a, c, b);
	}
	else
	{
		if (a > c)
			printf("%d %d %d\n", b, a, c);
		else if ((a < c) && (b < c))
			printf("%d %d %d\n", c, b, a);
		else if ((a < c) && (b > c))
			printf("%d %d %d\n", b, c, a);
	}
}