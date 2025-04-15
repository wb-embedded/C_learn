#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//获得某年某月有多少天
//int day(int x, int y)
//{
//	switch (y)
//	{
//	case 1:
//		return 31;
//	case 2:
//		if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//			return 29;
//		else
//			return 28;
//	case 3:
//		return 31;
//	case 4:
//		return 30;
//	case 5:
//		return 31;
//	case 6:
//		return 30;
//	case 7:
//		return 31;
//	case 8:
//		return 31;
//	case 9:
//		return 30;
//	case 10:
//		return 31;
//	case 11:
//		return 30;
//	case 12:
//		return 31;
//	}
//		
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//
//	int ret = day(year, month);
//	printf("%d\n", ret);
//
//	return 0;
//}

//实现字符串的拷贝
//void my_strcpy(char* dest, char* src)
//{
//	int i = 0;
//	while (*(src + i) != '\0')
//	{
//		*(dest + i) = *(src + i);
//		i++;
//	}
//	*(dest + i) = *(src + i);
//}

#include <assert.h>

void my_strcpy(char* dest,const char* src)//const修饰的常变量不能赋值
{
	int i = 0;
	//assert进行逻辑判断，不满足，程序停止运行并报错
	assert(src != NULL);
	assert(dest != NULL);

	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char ch1[20] = "xxxxxxxxxxxxxxxxxx";
	char ch2[20] = "hello world";

	my_strcpy(ch1, ch2);

	printf("%s\n", ch1);

	return 0;
}