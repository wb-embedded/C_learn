#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void GCD(int m, int n)
{
	int temp = 0;
	if (m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	if (m == 0)
		printf("%d\n", n);
	if ((m != 0) && (n != 0))
		GCD(m, n % m);
}