#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
// 试题1 运行以下代码会有什么结果？
/*void GerMemory(char* p)
{
	p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GerMemory(str);
	strcpy(str, "hello world");
	printf(str);
}
int main()
{
	Test();
	return 0;
}*/
// 1.程序崩溃
// 原因：str以值传递的形式给p，p是GetMemory函数的形参，只在函数内部有效，
//       等GetMemory函数返回之后，str还是一个空指针，strcpy函数不能把字符串复制到以空指针为起始位置的地方
// 
// 2.内存泄漏
// 原因：str以值传递的形式给p，p是GetMemory函数的形参，只在函数内部有效，
//       等GetMemory函数返回之后，动态开辟内存尚未释放并且无法找到，所以会造成内存泄漏

// 改法1
/*void GerMemory(char** p)
{
	*p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GerMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}*/

//方法2
/*char* GerMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GerMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}*/


// 试题2 运行以下代码会有什么结果？
/*char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}*/
// 非法访问内存
// 原因：p数组是在Getmemory函数里面创建的，属于局部数组，存放在栈区，只能在Getmemory函数里面使用


// 试题3 运行以下代码会有什么结果？
/*void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	// 更正加入以下代码
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}*/
// 内存泄漏
// 原因：创建的动态内存未释放


// 试题4 运行以下代码会有什么结果？
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL
	//str = NULL;//加入这句代码才正确
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}
// 非法访问内存
// 原因：free(str),把str指向的空间释放了，但str还是指向原来的位置，所以str不为空指针，又继续访问str指向的空间，就形成了非法访问内存了



// C/C++程序内存分配的几个区域：
// 1.栈区（stack）：在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放。
//   栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有限。
//   栈区要存放运行函数而分配的局部变量、函数参数、返回数据、返回地址。
// 2.堆区（heap）：一般由程序员分配释放，若程序员不释放，程序结束时可能由OS回收。分配方式类似于链表。
// 3.数据段（静态区）（static）：存放全局变量、静态数据。程序结束后由系统释放。
// 4.代码段：存放函数体（类成员函数和全局函数）的二进制代码。