//strerror（）函数：返回错误码，所对应的错误信息
//必须包含头文件：#include <errno.h>
//每个错误码都有相对应的错误码，strerror()函数是把错误码翻译成其相应的错误信息
//errno 是一个全局的错误码的变量
//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码复制到errno中
//所以函数的正确使用方法：strerror(errno)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");//打开名字为test.txt的文件  “r”：表示只读
	if (pf == NULL)//如果没有这个文件
	{
		printf("%s\n", strerror(errno));//则会返回错误码，函数strerror(errno)翻译错误码的信息
	}
	else//有这个文件
	{
		printf("open file success\n");//提示打开文件成功
	}
	return 0;
}
