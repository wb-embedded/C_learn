#define _CRT_SECURE_NO_WARNINGS
//输出范围内的3的倍数

#include <stdio.h>

void triple(int m, int n)
{
	while (m <= n)
	{
		if ((m % 3) == 0)
		{
			printf("%d ", m);
			m += 3;
			continue;
		}
		m++;
	}
}