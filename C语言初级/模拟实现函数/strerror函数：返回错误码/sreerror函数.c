//strerror�������������ش����룬����Ӧ�Ĵ�����Ϣ
//�������ͷ�ļ���#include <errno.h>
//ÿ�������붼�����Ӧ�Ĵ����룬strerror()�����ǰѴ����뷭�������Ӧ�Ĵ�����Ϣ
//errno ��һ��ȫ�ֵĴ�����ı���
//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븴�Ƶ�errno��
//���Ժ�������ȷʹ�÷�����strerror(errno)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");//������Ϊtest.txt���ļ�  ��r������ʾֻ��
	if (pf == NULL)//���û������ļ�
	{
		printf("%s\n", strerror(errno));//��᷵�ش����룬����strerror(errno)������������Ϣ
	}
	else//������ļ�
	{
		printf("open file success\n");//��ʾ���ļ��ɹ�
	}
	return 0;
}
