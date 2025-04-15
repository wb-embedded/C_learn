#define _CRT_SECURE_NO_WARNINGS
//将三个数从大到小输出
//#include <stdio.h>
//#include "sort.h"
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	sort(a, b, c);
//
//	return 0;
//}

//输出范围内的3的倍数
//#include <stdio.h>
//#include "triple.h"
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//
//	triple(a, b);
//
//	return 0;
//}

//求最大公约数，用辗转相除法 求余

#include <stdio.h>
#include "GCD.h"

int main()
{
	int num1 = 0, num2 = 0;
	scanf("%d %d", &num1, &num2);

	GCD(num1, num2);

	return 0;
}