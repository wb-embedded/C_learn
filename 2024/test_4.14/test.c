#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ַ����������м��ƶ�
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "***************!!!";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0, right = sz - 2;//��'/0'��1���±��0��ʼ��1
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		int i = 0;
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}

	return 0;
}