#include "contact.h"
void menu()
{
	printf("********************************\n");
	printf("*****  0.exit              *****\n");
	printf("*****  1.add     2.del     *****\n");
	printf("*****  3.search  4.modify  *****\n");
	printf("*****  5.show    6.sort    *****\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	// ����ͨѶ¼
	Contact con;  // con����ͨѶ¼����߰���1000��Ԫ�ص������size
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		case ADD:  // ����
			AddContact(&con);
			break;
		case DEL:  // ɾ��
			DelContact(&con);
			break;
		case SEARCH:  // ����
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con); //�޸�
			break;
		case SHOW:
			ShowContact(&con); //�鿴ͨѶ¼
			break;
		case SORT: 
			Sortcontact(&con);//����
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}