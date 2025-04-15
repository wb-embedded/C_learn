#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//将字符串中单词倒置顺序输出
//1.将字符串逆序
//2.将每个单词逆序
#include <string.h>
#include <assert.h>

//版本1

//void inv(char ch[], int len)
//{
//	assert(ch);
//	int left = 0;
//	int right = len-1;
//	char temp = '0';
//	while (left < right)
//	{
//		temp = *(ch + left);
//		*(ch + left) = *(ch + right);
//		*(ch + right) = temp;
//		left++;
//		right--;
//	}
//}
//
//void word_inv(char ch[], int len)
//{
//	assert(ch);
//	int i = 0;
//	int tmp = 0;
//	while (*(ch + i) != '\0')
//	{
//		if (*(ch + i) == ' ')
//		{
//			int left = tmp;
//			int right = i - 1;
//			char temp = '0';
//			while (left < right)
//			{
//				temp = *(ch + left);
//				*(ch + left) = *(ch + right);
//				*(ch + right) = temp;
//				left++;
//				right--;
//			}
//			i++;
//			tmp = i;
//		}
//		else if (i == (len - 1))
//		{
//			int left = tmp;
//			int right = i;
//			char temp = '0';
//			while (left < right)
//			{
//				temp = *(ch + left);
//				*(ch + left) = *(ch + right);
//				*(ch + right) = temp;
//				left++;
//				right--;
//			}
//			i++;
//			tmp = i;
//		}
//		else
//		{
//			i++;
//		}
//	}
//}
//
//int main()
//{
//	char ch[20] = {'0'};
//	gets(ch);
//	int len = strlen(ch);
//
//	inv(ch,len);
//	word_inv(ch, len);
//
//	printf("%s\n", ch);
//
//	return 0;
//}

//版本2

//void inv(char ch[], int len)
//{
//	assert(ch);
//	int left = 0;
//	int right = len-1;
//	char temp = '0';
//	while (left < right)
//	{
//		temp = *(ch + left);
//		*(ch + left) = *(ch + right);
//		*(ch + right) = temp;
//		left++;
//		right--;
//	}
//}
//
//void word_inv(char ch[], int len)
//{
//	assert(ch);
//	int i = 0;
//	int tmp = 0;
//	while (*(ch + i) != '\0')
//	{
//		if (*(ch + i) != ' ')
//		{
//			if (i != (len - 1))
//				i++;
//			else
//			{
//				int left = tmp;
//				int right = i;
//				char temp = '0';
//				while (left < right)
//				{
//					temp = *(ch + left);
//					*(ch + left) = *(ch + right);
//					*(ch + right) = temp;
//					left++;
//					right--;
//				}
//				i++;
//				tmp = i;
//			}
//		}
//		else
//		{
//			if (*(ch + i) == ' ')
//			{
//				int left = tmp;
//				int right = i - 1;
//				char temp = '0';
//				while (left < right)
//				{
//					temp = *(ch + left);
//					*(ch + left) = *(ch + right);
//					*(ch + right) = temp;
//					left++;
//					right--;
//				}
//				i++;
//				tmp = i;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char ch[20] = {'0'};
//	gets(ch);
//	int len = strlen(ch);
//
//	inv(ch,len);
//	word_inv(ch, len);
//
//	printf("%s\n", ch);
//
//	return 0;
//}

//版本3

void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	char temp = '0';
	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char ch[100] = { '1' };
	gets(ch);

	int len = strlen(ch);
	reverse(ch, ch + len - 1);

	char* start = ch;
	char* end = start;

	while (*end)
	{
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		if (*end != '0')
		{
			reverse(start, end - 1);
			end++;
			start = end;
		}
		else
		{
			reverse(start, end - 1);
			start = end;
		}
	}

	printf("%s\n", ch);

	return 0;
}