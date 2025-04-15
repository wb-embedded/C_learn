#include "game.h"
//菜单
void menu()
{
	printf("**************************\n");
	printf("********  1.play  ********\n");
	printf("********  0.exit  ********\n");
	printf("**************************\n");
}
//初始化
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
//打印
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
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
	printf("------扫雷游戏------\n");
}
//设置雷
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
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到非雷的个数

	while (win < ROW * COL - MNUM)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("游戏结束...\n");
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
					printf("请勿输入重复坐标，请重新输入...\n");
			}
		}
		else
			printf("输入错误，请重新输入...\n");
	}
	if (win == ROW * COL - MNUM)
	{
		printf("You Win!!!\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//统计mine数组中x,y坐标周围有几个雷
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
	//定义两个数组，分别存放雷以及相关数据
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