// 柔性数组：C99中，结构体中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员
// 柔性数组的特点：
// 1.结构体中的柔性数组成员前面必须至少有一个其他成员
// 2.sizeof返回的这种结构体大小不包括柔性数组的内存
// 3.包含柔性数组的结构体用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构体的大小，以适应柔性数组的预期大小

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
/*struct S
{
	int n;
	int arr[]; // 未知大小的--柔性数组成员--数组的大小是可以调整的
	//int arr[0]; // 这个也表示未知大小的
};
int main()
{
	//struct S s;
	//printf("%d\n", sizeof(s)); // 包含柔性数组的结构体中，柔性数组的大小不计入结构体的总大小

	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int)); // 5是自己认为柔性数组的大小
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	// 假设内存不够用了，再开辟空间
	struct S* ps1 = realloc(ps, 44);
	if (ps1 != NULL)
	{
		ps = ps1;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}*/

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	// 调整大小
	int* prt = (int*)realloc(ps->arr, 10 * sizeof(int));
	if (prt != NULL)
	{
		ps->arr = prt;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
}