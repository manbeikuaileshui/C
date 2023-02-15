#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
#include <string.h>
//结构体--是我们自己创造出来的一种类型
//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};//这个";"不可缺少
int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	//利用strcpy时需要引用头文件include <string.h>
	strcpy(b1.name, "C++");//strcpy -- string copy -- 字符串拷贝
	b1.price = 15;
	printf("修改后的书名：%s\n", b1.name);
	printf("修改后的价格：%d元\n", b1.price);

	//利用pd打印出我的书名和价格
	struct Book* pd = &b1;
	printf("书名：%s\n", (*pd).name);
	printf("价格：%d元\n", (*pd).price);

	//.操作符--用在结构体变量-- .成员
	//->操作符--用在结构指针-- ->成员
	printf("书名：%s\n", pd->name);
	printf("价格：%d元\n", pd->price);
	return 0;
}

