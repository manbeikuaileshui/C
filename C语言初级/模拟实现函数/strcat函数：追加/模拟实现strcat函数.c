//ԭ�ַ��������ԡ�\0������
//Ŀ��ռ�������㹻�Ĵ���������ԭ�ַ���������
//Ŀ��ռ������޸�
//�ַ�����θ��Լ�׷�ӣ�����strncat����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* arr1, const char* arr2)
{
	//assert(arr1 && arr2);
	assert(arr1 != NULL);
	assert(arr2);
	char* ret = arr1;//����Ŀ�꺯���ĵ�ַ
	while (*arr1)
	{
		arr1++;
	}
	while (*arr1++ = *arr2++);
	return ret;
}
int main()
{
	char arr1[20] = "hello\0xxxxxxxx";
	char arr2[] = " world";
	//strcat(arr1, arr2);//��arr1����׷��arr2,������׷�ӱ���
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}