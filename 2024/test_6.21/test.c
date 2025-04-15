#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//
//	for (i = 0; i < 10; i++)
//	{
//		//arr[i] = 1;
//		*p++ = 1;
//	}
//
//	return 0;
//}

//指针-指针得到的是指针之间元素的个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[9] - &arr[0]);
//
//	return 0;
//}

//int my_strlen(char* p)
//{
//	if (*p != '\0')
//		return my_strlen(p + 1) + 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char ch[10] = "abcdefg";
//	int ret = my_strlen(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int my_strlen(char ch[])
//{
//	if (ch[0] != '\0')
//		return my_strlen(ch + 1) + 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char ch[10] = "abcdef";
//	int ret = my_strlen(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//指针-指针
//int my_strlen(char ch[])
//{
//	int i = 0;
//	while (ch[i] != '\0')
//	{
//		i++;
//	}
//	return &ch[i] - &ch[0];
//}
//
//int main()
//{
//	char ch[10] = "abcdef";
//	int ret = my_strlen(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
