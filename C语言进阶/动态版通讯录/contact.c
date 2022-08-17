#include "contact.h"
void ChekCapacity(Contact* ps); // 声明函数
void LoadContact(Contact* ps)  //  加载文件中的信息到通讯录
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	// 读取文件放到通讯录中
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		ChekCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	// 关闭文件
	fclose(pfRead);
	pfRead = NULL;
}
void InitContact(Contact* ps) //初始化通讯录
{
	ps->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo)); // 开辟三个空间，只能存放三个人的信息
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;  //设置通讯录最初只有0个元素
	ps->capacity = DEFAULT_SZ; // 设置通讯录最初最多能存放的元素个数
	// 把文件中已经存放的通讯录中的信息加载到通讯录中
	LoadContact(ps);  //加载文件中的信息到通讯录
}

void ChekCapacity(Contact* ps) // 增容
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void AddContact(Contact* ps) //添加
{
	ChekCapacity(ps); // 检测当前通讯录的容量 1.满了就增容  2.没满，啥都不干
	//增加数据
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入电话号码:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}

void ShowContact(const Contact* ps) // 打印
{
	assert(ps);
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-3s\t%-2s\t%-2s\t%-11s\t%-20s\n", "名字", "性别", "年龄", "电话号码", "地址");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-3s\t%-2s\t%-2d\t%-11s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const Contact* ps, char name[MAX_NAME]) //加了static使这个函数只能在这个文件使用和查看
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1; //找不到的情况
}

void DelContact(Contact* ps) // 删除指定名字的联系人
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("请输入要删除人的名字:>");
		scanf("%s", name);

		// 1.查找要删除的人在什么位置
		int pos = FindByName(ps, name);  //找到了返回名字所在元素的下标,找不到返回-1

		// 2.删除
		if (pos == -1)
		{
			printf("要删除的人不存在\n");
		}
		else
		{
			//删除数据
			int j = 0;
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("删除成功\n");
		}
	}
}

void SearchContact(const Contact* ps) // 查找指定好友信息
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", &name);
	// 1.查找要查找的人在什么位置
	int pos = FindByName(ps, name); // 找到了返回名字所在元素的下标, 找不到返回 - 1

	// 2.打印
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-3s\t%-2s\t%-2s\t%-11s\t%-20s\n", "姓名", "性别", "年龄", "电话号码", "地址");
		printf("%-3s\t%-2s\t%-2d\t%-11s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].sex,
			ps->data[pos].age,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("查找成功\n");
	}
}

void ModifyContact(Contact* ps) //修改指定好友的信息
{
	char name[MAX_NAME];
	printf("请输入需要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name); //查找需要修改人的名字的位置，找到了返回名字所在元素的下标, 找不到返回 -1
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入电话号码:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}

void Sortcontact(Contact* ps) // 排序
{
	printf("以年龄排序\n");
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 1; i < ps->size && flag == 1; i++)
	{
		flag = 0;
		for (j = 0; j < ps->size - i; j++)
		{
			if (ps->data[j].age > ps->data[j + 1].age)
			{
				PeoInfo ret = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = ret;
				flag = 1;
			}
		}
	}
	ShowContact(ps);
}

void DestroyContact(Contact* ps) ////销毁通讯录--释放动态开辟的内存
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(Contact* ps) //保存通讯录文件
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	// 写通讯录中的数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	// 关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
}