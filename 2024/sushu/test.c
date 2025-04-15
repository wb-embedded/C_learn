#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void sushu(int n)
{
	int i = 2;
	while (i <= sqrt(n))
	{
		if (0 == (n % i))
			break;
		i++;
	}
	if (i <= sqrt(n))
		printf("不是素数...\n");
	else
		printf("是素数...\n");
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	sushu(a);

	return 0;
}