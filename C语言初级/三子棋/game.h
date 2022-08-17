#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 4
#define COL 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DiaplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row,int col);
void ComputerMove(char board[ROW][COL],int row, int col);
char IsWin(char board[ROW][COL], int row, int col);//能返回四个状态：1、玩家赢‘*’ 2、电脑赢‘#’ 3、平局‘H' 4、继续'L'