#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//#define M 3
//
//int main()
//{
//#if M > 3
//	printf("hehe\n");
//#elif M == 3
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}

//#define OFFSETOF(type, m_name) (size_t)&(((type*)0)->m_name)
//#include <stdio.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}

//¼ýÐÎÍ¼°¸
#include <stdio.h>

int main()
{
	int n = 0;

	while ((scanf("%d", &n)) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = n - i; j > 0; j--)
			{
				printf("  ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}
			for (j = n - i; j >= 0; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}