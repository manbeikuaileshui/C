// �����Ķ�̬�ڴ����
// 1.��NULLָ��Ľ����ò���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <windows.h>
//int main()
//{
//	//����ʾ��
//	int* p = (int*)malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	//��ȷʾ��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)//��ȷ����
//	//for (i = 0; i <= 10; i++)//�������
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

// 3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);//freeֻ���ͷŶ�̬���ٵ��ڴ�
//	p = NULL;
//	return 0;
//}

// 4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		printf("%d ", *p);
		p++;
	}
	free(p);// p�ѱ��ı䣬����ָ��̬���ٳ��Ŀռ����ʼλ�ã�����free�ͷŲ���p,�ᱨ��
	p = NULL;
	return 0;
}*/

//5.��ͬһ�鶯̬�ڴ����ͷ�
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}

	free(p);
	//����������롭��
	free(p);
// Ϊ�˱�����������ķ�������þ�����������Ķ�̬�ڴ�ռ�֮����ͷŵ�������ͷŲ��ˣ��ͱ�Ǻã��������ͷţ����Ϊ���´���
	//free(p);  //free��������Ϊ��ָ�룬��free����ʲô������
	//p = NULL;
	//free(p);
	//p = NULL;

	return 0;
}*/

// 6.��̬�����ڴ������ͷ�(�ڴ�й©)
int main()
{
	while (1)
	{
		malloc(1);
		//�����˿ռ��Ҫ�ǵ��ͷţ���Ȼ�㲻������ڴ棬����Ҳ�ò���
	}
	return 0;
}