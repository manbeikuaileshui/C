#include "game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols, int set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
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
			if (j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

	printf("\n");
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//�׵ĸ���
	while (count)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (x != 0 && y != 0)
		{
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}
		}
	}
}

//�ַ�1��ȥ�ַ�0����1  ��1��-��0��=1
//�ַ�0��ȥ�ַ�0����0  ��0��-��0��=0
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//�ж�����ĺϷ���
	while (win<(row-1)*(col-1)-EASY_COUNT)
	{
		printf("�������Ų��׵�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x < row && y >= 1 && y < col)
		{
			//1������
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			//2��������
			else
			{
				//����x��y������Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������!\n");
		}
	}
	if (win == (row - 1)*(col - 1) - EASY_COUNT)
	{
		printf("You Win\n");
		DisplayBoard(mine, ROW, COL);
	}
}