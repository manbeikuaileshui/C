// 常见的动态内存错误
// 1.对NULL指针的解引用操作
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <windows.h>
//int main()
//{
//	//错误示范
//	int* p = (int*)malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	//正确示范
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)//正确操作
//	//for (i = 0; i <= 10; i++)//错误操作
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

// 3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);//free只会释放动态开辟的内存
//	p = NULL;
//	return 0;
//}

// 4.使用free释放一块动态开辟内存的一部分
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		printf("%d ", *p);
		p++;
	}
	free(p);// p已被改变，不在指向动态开辟出的空间的起始位置，所以free释放不了p,会报错
	p = NULL;
	return 0;
}*/

//5.对同一块动态内存多次释放
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}

	free(p);
	//……其余代码……
	free(p);
// 为了避免这种情况的发生，最好就是用完申请的动态内存空间之后就释放掉，如果释放不了，就标记好，后面再释放，或改为如下代码
	//free(p);  //free里面的如果为空指针，则free函数什么都不做
	//p = NULL;
	//free(p);
	//p = NULL;

	return 0;
}*/

// 6.动态开辟内存忘记释放(内存泄漏)
int main()
{
	while (1)
	{
		malloc(1);
		//申请了空间就要记得释放，不然你不用这块内存，别人也用不了
	}
	return 0;
}