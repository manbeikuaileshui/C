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
	// 创建通讯录
	Contact con;  // con就是通讯录，里边包含1000个元素的数组和size
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
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}