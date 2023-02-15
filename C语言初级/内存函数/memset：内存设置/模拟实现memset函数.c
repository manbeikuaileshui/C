// memset函数
// void* memset(void* dest, int value, size_t count)
// c：设置的字符是什么
// count：设置多少个字节
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
void* my_memset(void* ptr, int value, size_t count)
{
	assert(ptr);
	void* ret = ptr;
	while (count--)
	{
		*(char*)ptr = (char)value;
		++(char*)ptr;
	}
	return ret;
}
int main()
{
	//int i = 0;
	//char arr[10] = "";
	////memset(arr, '#', 10);
	//my_memset(arr, '#', 10);
	//for (i = 0; i < 10; i++)
	//{
	//	putchar(arr[i]);
	//}

	//错误用法
	//int i = 0;
	//int arr[10] = { 0 };
	//memset(arr, 1, 10);  //数组类型为int 而memset函数的第三个参数类型为字节，所以10个元素改为1失败
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	return 0;
}
