#include "directory.h"

void menu()
{
	printf("********************************************\n");
	printf("**********   1.add       2.del    **********\n");
	printf("**********   3.search    4.modify **********\n");
	printf("**********   5.show      6.sort   **********\n");
	printf("**********   0.exit               **********\n");
	printf("********************************************\n");
}

int main()
{
	int input = 0;

	directory dir;//定义电话簿
	InitDir(&dir);

	do 
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add_dir(&dir);
			break;
		case 2:
			Del_dir(&dir);
			break;
		case 3:
			Search_dir(&dir);
			break;
		case 4:
			Mod_dir(&dir);
			break;
		case 5:
			Show_dir(&dir);
			break;
		case 6:
			Sort_dir(&dir);
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入...\n");
			break;
		}
	} while (input);

	return 0;
}