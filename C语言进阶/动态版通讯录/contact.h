// ͨѶ¼��Contact��
// 1.test.c  ����
// 2.contact.c  ʵ�ֺ����Ĺ���
// 3.contact.h  ��������

// Ҫʵ�ֵĹ��ܣ�
// 1.���1000�����ѵ���Ϣ
// ���������֡��绰���Ա�סַ������           
// 2.���Ӻ�����Ϣ  add
// 3.ɾ��ָ�����ֵĺ�����Ϣ  del
// 4.���Һ�����Ϣ  search
// 5.�޸ĺ�����Ϣ  modify
// 6.��ӡ������Ϣ  show
// 7.����  sort

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
//#define MAX 1000
#define DEFAULT_SZ 3
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
	SORT,   // 6
	SAVE    // 7
}Option;

typedef struct PeoInfo
{
	char name[MAX_NAME]; // ����
	char sex[MAX_SEX];  // �Ա�
	int age;  // ����
	char tele[MAX_TELE];  // �绰
	char addr[MAX_ADDR]; // סַ
}PeoInfo;

// ͨѶ¼����
typedef struct Contact
{
	PeoInfo* data;
	int size;  // ��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity; //��¼��ǰͨѶ¼���������
}Contact;

// ��������
void InitContact(Contact* ps);// ��ʼ��ͨѶ¼
void AddContact(Contact* ps); // ���һ����Ϣ����ͨѶ¼
void ShowContact(const Contact* ps); //��ӡͨѶ¼������
void DelContact(Contact* ps); // ɾ��ָ��������Ϣ
void SearchContact(const Contact* ps); // ����ָ��������Ϣ
void ModifyContact(Contact* ps); // �޸�ָ��������Ϣ
void Sortcontact(Contact* ps);  //����
void DestroyContact(Contact* ps);//����ͨѶ¼
void SaveContact(Contact* ps); //����ͨѶ¼�ļ�
