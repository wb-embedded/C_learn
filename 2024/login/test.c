#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//µÇÂ½ÏµÍ³
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//²Ëµ¥½çÃæ
	printf("********************************\n");
	printf("*************1.µÇÂ¼*************\n");
	printf("*************2.ÍË³ö*************\n");
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
			printf("ÇëÊäÈëÃÜÂë:");
			scanf("%s", password);
			ret = strcmp(password, "abcdef");
			//printf("%d\n", ret);
			if (0 == ret)
			{
				printf("ÃÜÂëÕýÈ·!\n");
				break;
			}
			else
			{
				printf("ÃÜÂë´íÎó£¡ÇëÖØÐÂÊäÈë...\n");
			}
			i++;
			Sleep(1000);
			system("cls");
		}
		if (3 == i)
		{
			printf("´íÎó´ÎÊý¹ý¶à£¬½ûÖ¹µÇÂ½...\n");
		}
	}
	else if (2 == k)
		system("cls");
	else
		printf("ÊäÈë´íÎó!!!\n");
	//while (i < 3)
	//{
	//	printf("ÇëÊäÈëÃÜÂë:");
	//	scanf("%s", password);
	//	ret = strcmp(password, "abcdef");
	//	printf("%d\n", ret);
	//	if (0 == ret)
	//	{
	//		printf("ÃÜÂëÕýÈ·!\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("ÃÜÂë´íÎó£¡ÇëÖØÐÂÊäÈë...\n");
	//	}
	//	i++;
	//}

	return 0;
}