#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();
//菜单
void menu();
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家移动
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑移动
void ComputerMove(char board[ROW][COL], int row, int col);
//判断玩家是否赢
int IsPWin(char board[ROW][COL], int row, int col);
//判断电脑是否赢
int IsCWin(char board[ROW][COL], int row, int col);
//判断是否填满
int IsFull(char board[ROW][COL], int row, int col);