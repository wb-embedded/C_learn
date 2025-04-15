#include "game.h"
//�˵�
void menu()
{
	printf("**************************\n");
	printf("********  1.play  ********\n");
	printf("********  0.exit  ********\n");
	printf("**************************\n");
}
//��ʼ��
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
//��ӡ
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ------\n");
}
//������
void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;
	while (i < MNUM)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			i++;
		}
	}
}
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//�ҵ����׵ĸ���

	while (win < ROW * COL - MNUM)
	{
		printf("������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("��Ϸ����...\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
				else
					printf("���������ظ����꣬����������...\n");
			}
		}
		else
			printf("�����������������...\n");
	}
	if (win == ROW * COL - MNUM)
	{
		printf("You Win!!!\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//ͳ��mine������x,y������Χ�м�����
int get_mine_count(char arr[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if((i != 0) || (j != 0))
				ret = ret + arr[x + i][y + j] - '0';
		}
	}
	return ret;
}

void game()
{
	//�����������飬�ֱ������Լ��������
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '0' };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	SetMine(mine, ROW, COL, '0');
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);

	//DisplayBoard(mine, ROW, COL);
}