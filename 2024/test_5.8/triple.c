#define _CRT_SECURE_NO_WARNINGS
//�����Χ�ڵ�3�ı���

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