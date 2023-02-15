#include "game.h"
void game()
{
	//雷的信息存储
	//布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//创建数组  11*11数组
	//排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//打印布置好雷的棋盘
	//扫雷
	FindMine(mine, show, ROW, COL);
}
void menu()
{
	printf("********** 扫雷游戏 **********\n");
	printf("******* 1.play  0.exit *******\n");
	printf("******************************\n");
}
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (a);
}
int main()
{
	test();
	return 0;
}
