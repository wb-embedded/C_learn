#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n = 9;
//	//00000000 00000000 00000000 00001001
//	//0 00000000 00000000000000000001001
//	//1.001*2^3
//	//s = 0
//	//m = 1.001
//	//e = 3 + 127 = 130
//	//0 10000010 0010000 00000000 00000000
//	//41 10 00 00
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	return 0;
//}

//字符串的复制
// 
//char* my_strcpy(char ch1[], char ch2[])
//{
//	char* p = ch1;
//	while (*ch1++ = *ch2++)
//	{
//		;
//	}
//	return p;
//}
//
//int main()
//{
//	char ch1[20] = "####################";
//	char ch2[20] = { '0' };
//	gets(ch2);
//
//	char* p = my_strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//
//	return 0;
//}

//计算字符串长度
//
//int my_strlen(char ch[])
//{
//	int count = 0;
//	while (*ch++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char ch[20] = { '0' };
//	gets(ch);
//	int ret = my_strlen(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//将奇数放在偶数的前面

void sort(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	while (left < right)
	{
		while (*(arr + left) % 2 == 0)
		{
			while (*(arr + right) % 2 != 0)
			{
				temp = *(arr + left);
				*(arr + left) = *(arr + right);
				*(arr + right) = temp;
			}
			right--;
		}
		left++;
	}
}

int main()
{
	int arr[20] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}