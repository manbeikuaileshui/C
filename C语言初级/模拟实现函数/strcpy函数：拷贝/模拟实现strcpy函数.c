//                       模拟实现strcpy函数
//源字符必须以‘\0’结束
//会将源字符串的‘\0’拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <assert.h>
#include <string.h>
char* my_strcpy(char* str2, const char* str1)
{
	//方法1
	assert(str2 != NULL);
	assert(str1 != NULL);
	char* ret = str2;//保存目标函数的地址
	while (*str1 != '\0')
	{
		*str2 = *str1;
		str1++;
		str2++;
	}
	*str2 = *str1;//把str1里面的‘\0’拷贝到str2里面
	return ret;//返回目标函数的地址

	//方法2
	//assert(str2 != NULL);
	//assert(str1 != NULL);
	//char* ret = str2;//保存目标函数的地址
	//while (*str2++ = *str1++);
	//return ret;//返回目标函数的地址
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