#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ...\n");
			break;
		default:printf("�����������������...\n");
			break;
		}
	} while (input);

	return 0;
}