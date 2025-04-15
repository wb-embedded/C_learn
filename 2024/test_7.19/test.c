#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/* memcpy example */
//#include <stdio.h>
//#include <string.h>
//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//	/* using memcpy to copy string: */
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	/* using memcpy to copy structure: */
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//	return 0;
//}

//#include <string.h>

//int main()
//{
//	char ch1[] = "abcdefghi";
//	char ch2[20] = "*******************";
//
//	printf("%s\n", (char*)memcpy(ch2, ch1, 10));
//
//	return 0;
//}

//模拟实现memcpy
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//
//	void* p = dest;
//
//	while (num--)
//	{
//		*((char*)dest)++ = *((char*)src)++;
//	}
//
//	return p;
//}
//
//int main()
//{
//	char ch1[] = "abcdefghi";
//	char ch2[20] = "*******************";
//
//	printf("%s\n", (char*)my_memcpy(ch2, ch1, 9));
//
//	return 0;
//}

/* memmove example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//模拟实现memmove
//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//
//	void* p = dest;
//
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*((char*)dest)++ = *((char*)src)++;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(arr, arr + 2, 20);
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

/* memcmp example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}

//模拟实现memcmp
//#include <assert.h>
//
//int my_memcmp(const void* str1, const void* str2, size_t num)
//{
//	assert(str1);
//	assert(str2);
//
//	while (num--)
//	{
//		if (*((char*)str1) != *((char*)str2))
//			return *((char*)str1) - *((char*)str2);
//		((char*)str1)++;
//		((char*)str2)++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 1,2,3,4,5,10,9,8,7,6 };
//
//	printf("%d\n", my_memcmp(arr1, arr2, 20));
//
//	return 0;
//}

//模拟实现memset 将指定位置起的指定个数个字节设置为指定的字符
//#include <assert.h>
//
//void* my_memset(void* dest, int c, size_t num)
//{
//	assert(dest);
//	void* p = dest;
//
//	while (num--)
//	{
//		*((char*)dest)++ = c;
//	}
//
//	return p;
//}
//
//int main()
//{
//	char ch[] = "hello world";
//
//	printf("%s\n", my_memset(ch + 6, '*', 5));
//	printf("%s\n", ch);
//
//	return 0;
//}

//改数字，若为偶数则为0，为奇数则为1
//函数的递归
//int numset(int a)
//{
//	if (a > 0)
//	{
//		if (a % 2 == 0)
//			return numset(a / 10) * 10 + 0;
//		else
//			return numset(a / 10) * 10 + 1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	printf("%d", numset(a));
//
//	return 0;
//}

//打印指定图案
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print(n);
//
//	return 0;
//}

//购物
//int main()
//{
//	float num = 0.0f;
//	int month = 0;
//	int day = 0;
//	int flag = 0;//1表示有优惠券，0表示没有优惠券
//
//	scanf("%f %d %d %d", &num, &month, &day, &flag);
//
//	if ((month == 11) && (day == 11))
//		num *= 0.7;
//	else if ((month == 12) && (day == 12))
//		num *= 0.8;
//
//	if (flag == 1)
//		num -= 50.0;
//
//	if (num < 0)
//		num = 0;
//
//	printf("%.2f\n", num);
//
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;
//
//	printf("%d %d", a + b, c);
//
//	return 0;
//}

//预测名次
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//						if (((a == 3) + (b == 2)) == 1 &&
//							((e == 4) + (b == 2)) == 1 &&
//							((c == 1) + (d == 2)) == 1 &&
//							((c == 5) + (d == 3)) == 1 &&
//							((e == 4) + (a == 1)) == 1)
//							if(a*b*c*d*e==120)//确保每人名次不同
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//
//	for (a = 0; a <= 1; a++)
//		for (b = 0; b <= 1; b++)
//			for (c = 0; c <= 1; c++)
//				for (d = 0; d <= 1; d++)
//					if (((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3) && 
//                      ((a + b + c + d)==1))
//						printf("%d %d %d %d\n", a, b, c, d);
//						
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c\n", killer);
//	}
//
//	return 0;
//}

//杨辉三角
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			else if (i == j)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}