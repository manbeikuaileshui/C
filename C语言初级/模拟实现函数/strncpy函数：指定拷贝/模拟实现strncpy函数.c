//拷贝n个字符从原字符串到目标空间
//如果原字符串长度小于n，则拷贝完原字符串之后，在目标的后边追加'\0'，直到满足需要拷贝的个数n为止
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
	if (k)//判断是否拷贝完了
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
	strncpy(arr1, arr2, 6);//从arr2中拷贝6个字符到arr1中
	//my_strncpy(arr1, arr2, 6);
 	printf("%s\n", arr1);
	return 0;
}
