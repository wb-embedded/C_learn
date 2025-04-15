#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();
//�˵�
void menu();
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//����ƶ�
void PlayerMove(char board[ROW][COL], int row, int col);
//�����ƶ�
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж�����Ƿ�Ӯ
int IsPWin(char board[ROW][COL], int row, int col);
//�жϵ����Ƿ�Ӯ
int IsCWin(char board[ROW][COL], int row, int col);
//�ж��Ƿ�����
int IsFull(char board[ROW][COL], int row, int col);