#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��½ϵͳ
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//�˵�����
	printf("********************************\n");
	printf("*************1.��¼*************\n");
	printf("*************2.�˳�*************\n");
	printf("********************************\n");

	char password[20] = { 0 };
	int i = 0;
	int ret = 0;
	int k = 0;
	scanf("%d", &k);
	if (1 == k)
	{
		system("cls");
		while (i < 3)
		{
			printf("����������:");
			scanf("%s", password);
			ret = strcmp(password, "abcdef");
			//printf("%d\n", ret);
			if (0 == ret)
			{
				printf("������ȷ!\n");
				break;
			}
			else
			{
				printf("�����������������...\n");
			}
			i++;
			Sleep(1000);
			system("cls");
		}
		if (3 == i)
		{
			printf("����������࣬��ֹ��½...\n");
		}
	}
	else if (2 == k)
		system("cls");
	else
		printf("�������!!!\n");
	//while (i < 3)
	//{
	//	printf("����������:");
	//	scanf("%s", password);
	//	ret = strcmp(password, "abcdef");
	//	printf("%d\n", ret);
	//	if (0 == ret)
	//	{
	//		printf("������ȷ!\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�����������������...\n");
	//	}
	//	i++;
	//}

	return 0;
}