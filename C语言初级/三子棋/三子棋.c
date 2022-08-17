//测试三子棋游戏
#include "game.h"
void game()//游戏的整个实现
{
	int ret = 0;
	//创建数组--存放走出的棋盘信息         
	char board[ROW][COL] = { 'a' };
	//初始化棋盘                           
	InitBoard(board, ROW, COL);  //初始化的作用是不管数组里边放了啥，最终都打印出来的空白棋盘         
	//打印棋盘
//	    |    |    
//	----|----|----
//	    |    |   
//	----|----|----
//	    |    |   
	DiaplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DiaplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DiaplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("***************************\n");
	printf("****  1.play  0.exil  *****\n");
	printf("***************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	int input = 0;
	test();
	return 0;
}
