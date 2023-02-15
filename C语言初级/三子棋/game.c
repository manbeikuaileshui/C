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
	int i = 0;                 //                   |   |    ��   |   |    ��   |   |         
	for (i = 0; i < row; i++)//��һ��ѭ����ӡ����---|---|---   ---|---|---
	{
		//1����ӡһ�е����� //   |   |    
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);�������Ż�
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

		//2����ӡ�ָ���  //---|---|---
		/*if (i < row - 1)
			printf("---|---|---\n");  �������Ż�*/
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
	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�жϣ�x,y����ĺϷ���
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			if (board[x][y] ==' ')
			{
				board[x][y] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������!");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
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
//����1��ʾ�������ˣ�����0��ʾ����û��
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
				return 0;//����û��
			}
		}
	}
	return 1;//��������
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//������
	for (i = 1; i < row; i++)
	{
		if (board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][2]!=' ')
		{
			return board[i][2];
		}
	}
	//������
	for(i=1;i<col;i++)
	{
		if (board[1][i] == board[2][i] && board[2][i] == board[3][i] && board[2][i] != ' ')
		{
			return board[2][i];
		}
	}
	//�����Խ���
	if (board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[2][2] != ' ')
	{
		return board[2][2];
	}
	if (board[3][1] == board[2][2] && board[2][2] == board[1][3] && board[2][2] != ' ')
	{
		return board[2][2];
	}
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board,ROW,COL))
	{
		return 'H';
	}
	return 'L';
}