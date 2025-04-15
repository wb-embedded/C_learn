#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	unsigned int i;
//	//i为无符号数，不会小于0，死循环
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//
//	//'\0'的ASCII值为0
//	//也就是说当a[i]的值等于0时，字符串就有了结束标识
//
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//
//	//a为字符型 当-1-i的低8位为00000000时，字符串就有了结束标识
//	//-1   10000000 00000000 00000000 00000001
//	//-128 10000000 00000000 00000000 10000000
//	//-256 10000000 00000000 00000001 00000000 结束标识
//	//-1 - i = -256       i = 255即前面有255个字符
//
//	printf("%d", strlen(a));
//
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//
//	printf("%d", ch);
//
//	return 0;
//}

unsigned char i = 0;

int main()
{
	//无符号整型范围为0-255，不会大于255，所以是死循环
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}

	return 0;
}