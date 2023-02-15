//原字符串必须以‘\0’结束
//目标空间必须有足够的大，能容纳下原字符串的内容
//目标空间必须可修改
//字符串如何给自己追加：利用strncat函数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* arr1, const char* arr2)
{
	//assert(arr1 && arr2);
	assert(arr1 != NULL);
	assert(arr2);
	char* ret = arr1;//保存目标函数的地址
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
	//strcat(arr1, arr2);//在arr1后面追加arr2,但不能追加本身
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}