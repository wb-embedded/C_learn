#include "game.h"
//菜单
void menu()
{
	printf("**************************\n");
	printf("********* 1.play *********\n");
	printf("********* 0.exit *********\n");
	printf("**************************\n");
}
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0;j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家移动,玩家棋子为"*"
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	
	while (1)
	{
		printf("请输入坐标:\n");
		scanf("%d %d", &x, &y);
		//坐标合理性判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("位置已被占用，请重新选择...\n");
		}
		else
			printf("输入错误，请重新输入...\n");
	}
}
//电脑移动,电脑棋子为"#"  version 1.0
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断玩家是否赢 version 1.0
int IsPWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == '*')
		{
			printf("玩家赢!!!\n");
			return 1;
		}
		else if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == '*')
		{
			printf("玩家赢!!!\n");
			return 1;
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == '*')
	{
		printf("玩家赢!!!\n");
		return 1;
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == '*')
	{
		printf("玩家赢!!!\n");
		return 1;
	}
	return 0;
}
//判断电脑是否赢 version 1.0
int IsCWin(char board[ROW][COL], int row, int col)
{
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == '#')
			{
				printf("电脑赢!!!\n");
				return 1;
			}
			else if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == '#')
			{
				printf("电脑赢!!!\n");
				return 1;
			}
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == '#')
		{
			printf("电脑赢!!!\n");
			return 1;
		}
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == '#')
		{
			printf("电脑赢!!!\n");
			return 1;
		}
	}
	return 0;
}
//判断是否填满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (1 == IsPWin(board, ROW, COL))
			break;
		if (1 == IsFull(board, ROW, COL))
		{
			printf("平局...\n");
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (1 == IsCWin(board, ROW, COL))
			break;
		if (1 == IsFull(board, ROW, COL))
		{
			printf("平局...\n");
			break;
		}
	}
}