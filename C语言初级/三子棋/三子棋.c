//������������Ϸ
#include "game.h"
void game()//��Ϸ������ʵ��
{
	int ret = 0;
	//��������--����߳���������Ϣ         
	char board[ROW][COL] = { 'a' };
	//��ʼ������                           
	InitBoard(board, ROW, COL);  //��ʼ���������ǲ���������߷���ɶ�����ն���ӡ�����Ŀհ�����         
	//��ӡ����
//	    |    |    
//	----|----|----
//	    |    |   
//	----|----|----
//	    |    |   
	DiaplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DiaplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DiaplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
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
