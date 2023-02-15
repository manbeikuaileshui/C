#include "game.h"
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

void DiaplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;                 //                   |   |    二   |   |    三   |   |         
	for (i = 0; i < row; i++)//第一次循环打印的是---|---|---   ---|---|---
	{
		//1、打印一行的数据 //   |   |    
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);下面是优化
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (i == 0)
			{
				printf(" %d ", j);
			}
			else
			{
				if (j == 0)
				{
					printf(" %d ", i);
				}
				else
				{
					printf(" %c ", board[i][j]);
				}
			}
			if(j < col-1)
			printf("|");
		}
		printf("\n");

		//2、打印分割行  //---|---|---
		/*if (i < row - 1)
			printf("---|---|---\n");  下面是优化*/
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j < col-1)
				printf("|");
			}
			printf("\n");
		}
}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断，x,y坐标的合法性
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			if (board[x][y] ==' ')
			{
				board[x][y] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入!");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
	    x = rand() % row;
	    y = rand() % col;
		if (x != 0 && y != 0)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}

}
//返回1表示棋盘满了，返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < row; i++)
	{
		for (j = 1; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}
		}
	}
	return 1;//棋盘满了
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三行
	for (i = 1; i < row; i++)
	{
		if (board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][2]!=' ')
		{
			return board[i][2];
		}
	}
	//竖三列
	for(i=1;i<col;i++)
	{
		if (board[1][i] == board[2][i] && board[2][i] == board[3][i] && board[2][i] != ' ')
		{
			return board[2][i];
		}
	}
	//两个对角线
	if (board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[2][2] != ' ')
	{
		return board[2][2];
	}
	if (board[3][1] == board[2][2] && board[2][2] == board[1][3] && board[2][2] != ' ')
	{
		return board[2][2];
	}
	//判断是否平局
	if (1 == IsFull(board,ROW,COL))
	{
		return 'H';
	}
	return 'L';
}