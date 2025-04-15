#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//实现strlen功能
//int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//		return my_strlen(++ch) + 1;
//	else
//		return 0;
//}

//#include <assert.h>
//
//int my_strlen(const char* ch)
//{
//	assert(ch != NULL);
//	if (*ch != '\0')
//		return my_strlen(++ch) + 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char ch[] = "abcdefg";
//
//	printf("%d\n", my_strlen(ch));
//
//	return 0;
//}

//#include <assert.h>
//
////判断是不是三角形，即判断任意两边之和是否大于第三边
//int is_triangle(const float a, const float b, const float c)
//{
//	assert(a > 0);
//	assert(b > 0);
//	assert(c > 0);
//	if ((a + b > c) && (a + c > b) && (b + c > a))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	float a = 0.0f;
//	float b = 0.0f;
//	float c = 0.0f;
//	
//	scanf("%f %f %f", &a, &b, &c);
//
//	if (is_triangle(a, b, c))
//	{
//		if (a == b && b == c)
//			printf("Equilateral triangle!\n");
//		else if ((a == b) || (a == c) || (b == c))
//			printf("Isosceles triangle!\n");
//		else
//			printf("Ordinary triangle!\n");
//	}
//	else
//	{
//		printf("Not a triangle!\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//使用指针打印数组内容
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

#include <assert.h>

//将字符串逆序
void invert(char* ch, int len)
{
	assert(ch != NULL);
	assert(*ch != '\0');
	int left = 0;
	int right = len - 1;
	char temp = '0';

	while (left < right)
	{
		temp = *(ch + left);
		*(ch + left) = *(ch + right);
		*(ch + right) = temp;
		left++;
		right--;
	}
}

int main()
{
	char ch[10001] = { '0' };

	gets(ch);

	int len = strlen(ch);
	invert(ch, len);

	printf("%s\n", ch);

	return 0;
}