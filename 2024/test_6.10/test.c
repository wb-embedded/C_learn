#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//位操作符,都是对补码进行操作
//int main()
//{
//	int a = 3;
//	int b = -5;
//	//int c = a & b;
//	//int c = a | b;
//	int c = a ^ b;
//
//	printf("%d\n", c);
//
//	return 0;
//}

//不创建临时变量，实现两个数的互换

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//可能会数据溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("%d %d\n", a, b);

	return 0;
}