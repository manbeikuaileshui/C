#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 4
#define COL 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DiaplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row,int col);
void ComputerMove(char board[ROW][COL],int row, int col);
char IsWin(char board[ROW][COL], int row, int col);//�ܷ����ĸ�״̬��1�����Ӯ��*�� 2������Ӯ��#�� 3��ƽ�֡�H' 4������'L'