#define _CRT_SECURE_NO_WARNINGS 1

//字符串左旋
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDBA
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strlr(char* p, size_t num)
//{
//	char* s = p;
//	char temp = '0';
//
//	while (num--)
//	{
//		s = p;
//		temp = *s;
//		while (*(++s))
//		{
//			*(s - 1) = *s;
//		}
//		*(--s) = temp;
//	}
//
//	return p;
//}
//
//int main()
//{
//	char ch[] = "ABCD";
//
//	printf("%s", my_strlr(ch, 2));
//
//	return 0;
//}


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//1 2 3
//4 5 6
//7 8 9
//N

//#include <stdio.h>
//
//struct point
//{
//	int x;
//	int y;
//};
//
//struct point find_num(int arr[3][3], int r, int c, int num)
//{
//	int x = 0;
//	int y = c - 1;
//	struct point p = { -1,-1 };
//
//	while (x <= r - 1 && y >= 0)
//	{
//		if (num > arr[x][y])
//		{
//			x++;
//		}
//		else if (num < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//
//	return p;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int num = 0;
//	scanf("%d", &num);
//
//	printf("%d %d\n", find_num(arr, 3, 3, num).x, find_num(arr, 3, 3, num).y);
//
//	return 0;
//}

//判断一个字符串是否由另一个字符串旋转之后得到的
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//int is_left_rotate(char ch1[], char ch2[])
//{
//	assert(ch1);
//	assert(ch2);
//
//	int len = strlen(ch1);
//	while (len--)
//	{
//		char* p = ch1;
//		char temp = *p;
//		while (*(++p))
//		{
//			*(p - 1) = *p;
//		}
//		*(--p) = temp;
//		if (strcmp(ch1, ch2) == 0)
//			return 1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "cdefba";
//
//	printf("%d\n", is_left_rotate(ch1, ch2));
//
//	return 0;
//}

//判断数组是否有序
//#include <stdio.h>
//#include <assert.h>
//
//int is_sorted(int arr[], int n)
//{
//	assert(arr);
//	int flag = 0;
//	while (--n)
//	{
//		if (*arr > *(arr + 1))
//		{
//			if (flag == 2)
//				return 0;
//			flag = 1;//递减
//		}
//		else if (*arr < *(arr + 1))
//		{
//			if (flag == 1)
//				return 0;
//			flag = 2;//递增
//		}
//		arr++;
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int ret = is_sorted(arr, n);
//
//	if (ret == 0)
//		printf("unsorted\n");
//	else if (ret == 1)
//		printf("sorted\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//
//	return 0;
//}

//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)//临时变量所占空间太大,不好
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //传结构体
//	print2(&s); //传地址
//	return 0;
//}

//#include <stdio.h>
//
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//一个例子
#include <stdio.h>

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(s));

	return 0;
}

