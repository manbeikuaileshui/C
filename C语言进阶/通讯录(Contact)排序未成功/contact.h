// 通讯录（Contact）
// 1.test.c  测试
// 2.contact.c  实现函数的功能
// 3.contact.h  声明函数

// 要实现的功能：
// 1.存放1000个好友的信息
// 包括：名字、电话、性别、住址、年龄           
// 2.增加好友信息  add
// 3.删除指定名字的好友信息  del
// 4.查找好友信息  search
// 5.修改好友信息  modify
// 6.打印好友信息  show
// 7.排序  sort

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

typedef enum Option
{
	EXIT,   // 0
	ADD,    // 1
	DEL,    // 2
	SEARCH, // 3
	MODIFY, // 4
	SHOW,   // 5
	SORT    // 6
}Option;

typedef struct PeoInfo
{
	char name[MAX_NAME]; // 名字
	char sex[MAX_SEX];  // 性别
	int age;  // 年龄
	char tele[MAX_TELE];  // 电话
	char addr[MAX_ADDR]; // 住址
}PeoInfo;

// 通讯录类型
typedef struct Contact
{
	PeoInfo data[MAX];  //存放1000个信息
	int size;  // 记录当前已经有的元素个数
}Contact;

// 声明函数
void InitContact(Contact* ps);// 初始化通讯录
void AddContact(Contact* ps); // 添加一个信息到到通讯录
void ShowContact(const Contact* ps); //打印通讯录的内容
void DelContact(Contact* ps); // 删除指定好友信息
void SearchContact(const Contact* ps); // 查找指定好友信息
void ModifyContact(Contact* ps); // 修改指定好友信息
void Sortcontact(Contact* ps);  //排序
