#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = malloc(40);
//	free(p);
//
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//#include <stdio.h>
//
//int* f(void)
//{
//	int* ptr;
//	int a = 10;
//	ptr = &a;
//	return ptr;
//}
//
//int main()
//{
//	int* a = f();
//	printf("%p\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//#include <stdio.h>
//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//#include <stdio.h>
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//�����Լ������С������֮��
//���Լ��
//#include <stdio.h>

//���Լ��,շת�����
//int gcd(int m, int n)
//{
//	int temp = 0;
//	if (m < n)
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//	if (m % n == 0)
//		return n;
//	else
//		return gcd(n, (m % n));
//}

////���Լ��,�������
//int gcd(int m, int n)
//{
//	int temp = 0;
//	if (m < n)
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//	if (m - n == 0)
//		return n;
//	else
//		return gcd(n, m - n);
//}
//
////��С������
//int lcm(int m, int n)
//{
//	return m * n / gcd(m, n);
//}
//
//int gcd_and_lcm(int n, int m)
//{
//	return lcm(m, n) + gcd(m, n);
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d %d", &m, &n);
//
//	ret = gcd_and_lcm(m, n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//��ӡ����������
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		if ((i == 0) || (i == (n - 1)))
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((j == 0) || (j == (n - 1)))
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
//	//char i = 'a';
//	//for (i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i,pf);
//	//}
//	fputs("hello world!\n", pf);
//	fputs("hello world!\n", pf);
//
//	//���ļ�
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//#include <stdio.h>
//
//struct s
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct s s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д��
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

#include <stdio.h>

typedef struct stu
{
	char name[20];
	int age;
	float score;
}stu;

int main()
{
	stu s = { "zhangsan",25,430.0f };
	//�Զ����Ƶ���ʽ���ļ��ж�����
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//��������ʽ��
	fread(&s, sizeof(stu), 1, pf);

	printf("%s %d %f", s.name, s.age, s.score);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}

//int main()
//{
//	stu s = { "zhangsan",25,430.0f };
//	//�Զ����Ƶ���ʽд���ļ���
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//��������ʽд
//	fwrite(&s, sizeof(stu), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}