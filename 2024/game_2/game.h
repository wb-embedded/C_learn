#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MNUM 79//À×µÄÊýÁ¿
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();
void InitBoard(char arr[ROW][COL], int row, int col, char set);
void DisplayBoard(char arr[ROW][COL], int row, int col);
void SetMine(char arr[ROWS][COLS], int row, int col);

void game();