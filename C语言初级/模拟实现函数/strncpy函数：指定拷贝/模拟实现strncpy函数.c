//����n���ַ���ԭ�ַ�����Ŀ��ռ�
//���ԭ�ַ�������С��n���򿽱���ԭ�ַ���֮����Ŀ��ĺ��׷��'\0'��ֱ��������Ҫ�����ĸ���nΪֹ
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strncpy(char* arr1, const char* arr2, size_t k)
{
	assert(arr1 && arr2);
	char* ret = arr1;
	while (k && (*arr1++ = *arr2++))
	{
		k--;
	}
	if (k)//�ж��Ƿ񿽱�����
	{
		while (--k)
		{
			*arr1++ = '\0';
		}
	}
	return ret;
}
int main()
{
	char arr1[10] = "abcdefgh";
	char arr2[] = "bit";
	strncpy(arr1, arr2, 6);//��arr2�п���6���ַ���arr1��
	//my_strncpy(arr1, arr2, 6);
 	printf("%s\n", arr1);
	return 0;
}
