#define _CRT_SECURE_NO_WARNINGS
//���������Ӵ�С���
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

//�����Χ�ڵ�3�ı���
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

//�����Լ������շת����� ����

#include <stdio.h>
#include "GCD.h"

int main()
{
	int num1 = 0, num2 = 0;
	scanf("%d %d", &num1, &num2);

	GCD(num1, num2);

	return 0;
}