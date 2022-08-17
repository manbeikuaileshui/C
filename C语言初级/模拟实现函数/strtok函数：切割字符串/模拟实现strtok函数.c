// strtok函数
// char* strtok(char* str, const char* sep)
// 1.sep参数是个字符串，定义了用作分隔符的字符集合
// 2.第一个参数指定一个字符串，它包含了0个或多个由sep字符串中一个或多个分隔符分割的标记
// 3.strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个这个标记的指针（注：strtok函数会改变被操作的字符串，
//   所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改）
// 4.strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置
// 5.strtok函数的第一个NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
// 6.如果字符串中不存在更多的标记，则返回NULL指针
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
int main()
{
	//用法1
	//char arr[] = "201371988@qq.com";
	//char* p = "@.";
	//char buf[1024] = { 0 };
	//strcpy(buf, arr);//拷贝一份源字符串
	////while循环实现
	///*char* ret = strtok(arr, p);
	//while (ret != NULL)
	//{
	//	printf("%s\n", ret);
	//	ret = strtok(NULL, p);
	//}*/
	////for循环实现
	//char* ret = NULL;
	//for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	//{
	//	printf("%s\n", ret);
	//}

	//用法2
	char arr[] = "201371988@qq.com";
	char buf[1024] = { 0 };
	strcpy(buf, arr);//拷贝一份源字符串
	//while循环实现
	char* ret = strtok(arr,"@.");
	while (ret != NULL)
	{
		printf("%s\n", ret);
		ret = strtok(NULL, "@.");
	}
	//for循环实现
	/*char* ret = NULL;
	for (ret = strtok(arr, "@."); ret != NULL; ret = strtok(NULL, "@."))
	{
		printf("%s\n", ret);
	}*/
	return 0;
}
