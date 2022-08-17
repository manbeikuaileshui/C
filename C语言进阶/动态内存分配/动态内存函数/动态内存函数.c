// malloc()函数：
// void* malloc(size_ size)
// 头文件：#include <stdlib.h>
// 这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针
// 1.如果开辟成功，则返回一个指向开辟好空间的指针
// 2.如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查
// 3.返回值的类型是void*，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定
// 4.如果参数size为0，malloc的行为标准是未定义的，取决于编译器
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	//int* p = (int*)malloc(INT_MAX);//内存不够，空间开辟失败
	int* p = (int*)malloc(10 * sizeof(int));//向内存申请10个整型空间
	if (p == NULL)
	{
		printf("%s\n",strerror(errno)); //打印开辟空间失败的原因
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
		free(p);
		p = NULL;//释放动态开辟的空间
	}
	return 0;
}*/

// free()函数：
// void free(void* ptr)
// 头文件：#include <stdlib.h>
// 这个函数是用来释放动态开辟的内存的
// 1.如果参数ptr指向的空间不是动态开辟的，那么free函数的行为是未定义的
// 2.如果参数ptr是NULL指针，则函数什么事都不做

// calloc()函数：
// void* calloc(size_t num,size_t size)
// 用来动态内存分配的
// 1.如果开辟成功，则返回一个指向开辟好空间的指针
// 2.如果开辟失败，则返回一个NULL指针，因此calloc的返回值一定要做检查
// 3.函数的功能是为num个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0
// 4.与函数malloc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化为全0
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);//释放动态开辟的空间
	p = NULL;
	return 0;
}*/

// realloc()函数：
// void* realloc(void* ptr, size_t size)
// 1.ptr是要调整的内存地址
// 2.size调整之后新大小
// 3.返回值为调整之后的内存起始位置
// 4.这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间
// 5.realloc在调整内存空间时存在两种情况：
//   <1> 原有空间之后有足够大的空间 ,返回p
//   <2> 原有空间之后没有足够大的空间，重新开辟一块空间,并把原来内存中的数据拷贝回来，自动释放旧的内存空间，返回新开辟的地址
//   <3> 得用一个新的变量来接收realloc函数的返回值
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	int* p1 = realloc(p, 10 * sizeof(int));//不用p接收是因为：防止追加失败把p原来的地址弄丢
	if (p1 != NULL)
	{
		p = p1;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	ferr(p);
	p = NULL;
	return 0;
}