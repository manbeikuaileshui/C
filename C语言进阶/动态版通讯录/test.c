#include "contact.h"
void menu()
{
	printf("********************************\n");
	printf("*****  0.exit    1.add     *****\n");
	printf("*****  2.del     3.search  *****\n");
	printf("*****  4.modify  5.show    *****\n");
	printf("*****  6.sort    7.save    *****\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	// ����ͨѶ¼
	Contact con;  // con����ͨѶ¼����߰���1��ָ���size(��¼��ǰ�Ѿ��е�Ԫ�ظ���)�Լ�capacity(��¼��ǰͨѶ¼���������)
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
			SaveContact(&con);
			DestroyContact(&con);//����ͨѶ¼--�ͷŶ�̬���ٵ��ڴ�
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
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
