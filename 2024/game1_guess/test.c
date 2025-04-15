#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//猜数字游戏
//电脑产生一个1-100的随机数
//猜数字，给予提示
//#include<windows.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	//菜单
//	printf("**********猜数字**********\n");
//	printf("**********1.开始**********\n");
//	printf("**********2.退出**********\n");
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
//		printf("游戏开始，请输入数字:\n");
//		while (1)
//		{
//			scanf("%d", &num);
//			if (num > random)
//				printf("太大了!\n");
//			else if (num < random)
//				printf("太小了!\n");
//			else
//			{
//				printf("猜对了!\n");
//				break;
//			}
//		}
//	}
//	else if (2 == sym)
//	{
//		system("cls");
//	}
//	else
//		printf("输入错误!!!\n");
//
//	return 0;
//}



void Guess(int n, int m)
{
	while (1)
	{
		scanf("%d", &m);
		if (m > n)
			printf("太大了!\n");
		else if (m < n)
			printf("太小了!\n");
		else
		{
			printf("猜对了!\n");
			break;
		}
	}
}


#include<windows.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//菜单
	printf("**********猜数字**********\n");
	printf("**********1.开始**********\n");
	printf("**********2.退出**********\n");

	int sym = 0;
	scanf("%d", &sym);
	if (1 == sym)
	{
		system("cls");
		srand((unsigned)time(NULL));
		//printf("%d\n", rand() % 100 + 1);
		int random = rand() % 100 + 1;
		int num = 0;
		printf("游戏开始，请输入数字:\n");
		Guess(random, num);
	}
	else if (2 == sym)
	{
		system("cls");
	}
	else
		printf("输入错误!!!\n");

	return 0;
}