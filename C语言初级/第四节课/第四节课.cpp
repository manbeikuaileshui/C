#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
#include <string.h>
//�ṹ��--�������Լ����������һ������
//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};//���";"����ȱ��
int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	//����strcpyʱ��Ҫ����ͷ�ļ�include <string.h>
	strcpy(b1.name, "C++");//strcpy -- string copy -- �ַ�������
	b1.price = 15;
	printf("�޸ĺ��������%s\n", b1.name);
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);

	//����pd��ӡ���ҵ������ͼ۸�
	struct Book* pd = &b1;
	printf("������%s\n", (*pd).name);
	printf("�۸�%dԪ\n", (*pd).price);

	//.������--���ڽṹ�����-- .��Ա
	//->������--���ڽṹָ��-- ->��Ա
	printf("������%s\n", pd->name);
	printf("�۸�%dԪ\n", pd->price);
	return 0;
}

