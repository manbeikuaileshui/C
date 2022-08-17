#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 1.计算下面结构体所占的空间大小？
typedef struct
{
	int a; // 0-3 4个字节
	char b; // 4 1个字节
	// 5
	short c; // 6-7 2个字节
	short d; // 8-9 2个字节
	// 10-11
	// 一共10个字节
	// 结构体的最大对齐数为4
	// 要对齐到结构体的最大对齐数的整数倍，所以为12
}AA_t;
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}


// 2.在32位系统环境，编译选项为4字节对齐，那么sizeof(A)和sizeof(B)是多少？
struct A
{
	int a; // 0-3 4个字节
	short b; // 4-5 2个字节
	// 6-7 2个字节
	int c; // 8-11 4个字节
	char d; // 12 1个字节
	// 13-15
	// 一共13个字节
	// 结构体的最大对齐数为4
	// 要对齐到结构体的最大对齐数的整数倍，所以为16

};
struct B
{
	int a; // 0-3 4个字节
	short b; // 4-5 2个字节
	char c; // 6 1个字节
	// 7 1个字节
	int d; // 8-11 4个字节
	// 一共12个字节
	// 结构体的最大对齐数为4
	// 要对齐到结构体的最大对齐数的整数倍，所以为12
};
//int main()
//{
//	printf("%d %d\n", sizeof(struct A), sizeof(struct B));
//	return 0;
//}


// 3.
#pragma pack(4) //编译选项，表示4字节对齐 平台：VS2013  语言：C语言
int main(int argc, char* argv[])
{
	struct tagTest1
	{
		short a; // 0-1
		char d; // 2
		// 3
		long b; // 4-7
		long c; //8-11
		// 一共12个字节
		// 结构体的最大对齐数为4
		// 要对齐到结构体的最大对齐数的整数倍，所以为12
	};
	struct tagTest2
	{
		long b; // 0-3
		short c; // 4-5
		char d; //6
		// 7
		long a;  //8-11
		// 一共12个字节
		// 结构体的最大对齐数为4
		// 要对齐到结构体的最大对齐数的整数倍，所以为12
	};
	struct tagTest3
	{
		short c; // 0-1
		// 2-3
		long b; // 4-7
		char d; // 8
		// 9-11
		long a; // 12-15
		// 一共16个字节
		// 结构体的最大对齐数为4
		// 要对齐到结构体的最大对齐数的整数倍，所以为16
	};
	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;
	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}
#pragma pack()