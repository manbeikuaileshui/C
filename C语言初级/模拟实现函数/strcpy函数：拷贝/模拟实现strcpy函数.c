//                       ģ��ʵ��strcpy����
//Դ�ַ������ԡ�\0������
//�ὫԴ�ַ����ġ�\0��������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <assert.h>
#include <string.h>
char* my_strcpy(char* str2, const char* str1)
{
	//����1
	assert(str2 != NULL);
	assert(str1 != NULL);
	char* ret = str2;//����Ŀ�꺯���ĵ�ַ
	while (*str1 != '\0')
	{
		*str2 = *str1;
		str1++;
		str2++;
	}
	*str2 = *str1;//��str1����ġ�\0��������str2����
	return ret;//����Ŀ�꺯���ĵ�ַ

	//����2
	//assert(str2 != NULL);
	//assert(str1 != NULL);
	//char* ret = str2;//����Ŀ�꺯���ĵ�ַ
	//while (*str2++ = *str1++);
	//return ret;//����Ŀ�꺯���ĵ�ַ
}
int main()
{
	char str1[] = "Hello Bit";
	char str2[] = "Hello World";
	//my_strcpy(str2, str1);
	strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}