#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��������Ϸ
//���Բ���һ��1-100�������
//�����֣�������ʾ
//#include<windows.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	//�˵�
//	printf("**********������**********\n");
//	printf("**********1.��ʼ**********\n");
//	printf("**********2.�˳�**********\n");
//
//	int sym = 0;
//	scanf("%d", &sym);
//	if (1 == sym)
//	{
//		system("cls");
//		srand((unsigned)time(NULL));
//		//printf("%d\n", rand() % 100 + 1);
//		int random = rand() % 100 + 1;
//		int num = 0;
//		printf("��Ϸ��ʼ������������:\n");
//		while (1)
//		{
//			scanf("%d", &num);
//			if (num > random)
//				printf("̫����!\n");
//			else if (num < random)
//				printf("̫С��!\n");
//			else
//			{
//				printf("�¶���!\n");
//				break;
//			}
//		}
//	}
//	else if (2 == sym)
//	{
//		system("cls");
//	}
//	else
//		printf("�������!!!\n");
//
//	return 0;
//}



void Guess(int n, int m)
{
	while (1)
	{
		scanf("%d", &m);
		if (m > n)
			printf("̫����!\n");
		else if (m < n)
			printf("̫С��!\n");
		else
		{
			printf("�¶���!\n");
			break;
		}
	}
}


#include<windows.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//�˵�
	printf("**********������**********\n");
	printf("**********1.��ʼ**********\n");
	printf("**********2.�˳�**********\n");

	int sym = 0;
	scanf("%d", &sym);
	if (1 == sym)
	{
		system("cls");
		srand((unsigned)time(NULL));
		//printf("%d\n", rand() % 100 + 1);
		int random = rand() % 100 + 1;
		int num = 0;
		printf("��Ϸ��ʼ������������:\n");
		Guess(random, num);
	}
	else if (2 == sym)
	{
		system("cls");
	}
	else
		printf("�������!!!\n");

	return 0;
}