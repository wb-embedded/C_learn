#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//λ������,���ǶԲ�����в���
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

//��������ʱ������ʵ���������Ļ���

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//���ܻ��������
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