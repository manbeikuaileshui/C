#include "game.h"
void game()
{
	//�׵���Ϣ�洢
	//���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//��������  11*11����
	//�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//��ӡ���ú��׵�����
	//ɨ��
	FindMine(mine, show, ROW, COL);
}
void menu()
{
	printf("********** ɨ����Ϸ **********\n");
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
		printf("��ѡ��:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (a);
}
int main()
{
	test();
	return 0;
}
