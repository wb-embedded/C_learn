#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 3;
//	int b = ++a;
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

//ǿ������ת��
//int main()
//{
//	//int a = (int)3.14;
//	//printf("%d\n", a);
//	float a = 3.0f;
//	printf("%f\n", a);
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//8 ��ַ���ֽڴ�С��ȡ�������û���
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//8
//}
//
//int main()
//{
//	int arr[10] = { 0 }; 
//	char ch[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}

//���ò�����
//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[7] = 8;
//	7[arr] = 9;//�����Ը�ֵ��˵��[]�ǲ�����
//
//	return 0;
//}

int main()
{
	char a = 5;
	char b = 126;
	char c = a + b;

	printf("%d\n", c);

	return 0;
}