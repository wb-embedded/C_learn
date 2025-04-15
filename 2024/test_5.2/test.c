#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);

	return 0;
}