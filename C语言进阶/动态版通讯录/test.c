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
	// 创建通讯录
	Contact con;  // con就是通讯录，里边包含1个指针和size(记录当前已经有的元素个数)以及capacity(记录当前通讯录的最大容量)
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);//销毁通讯录--释放动态开辟的内存
			printf("退出通讯录\n");
			break;
		case ADD:  // 增加
			AddContact(&con);
			break;
		case DEL:  // 删除
			DelContact(&con);
			break;
		case SEARCH:  // 查找
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con); //修改
			break;
		case SHOW:
			ShowContact(&con); //查看通讯录
			break;
		case SORT:
			Sortcontact(&con);//排序
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
