#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mul.h"
#include"div.h"

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("a+b=%d\n", add(a, b));
	printf("a-b=%d\n", sub(a, b));
	printf("a*b=%d\n", mul(a, b));
	printf("a/b=%d\n", div(a, b));

	return 0;
}