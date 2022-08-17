#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//指针类型的意义
//1、指针的解引用   2、指针+-整数
//int main()
//{
	//指针的解引用
	//int a = 0x11223344;
	//int* pa = &a;
	//*pa = 0;//改变了4个字节的内容
	//char* pc = &a;
	//*pc = 0;//只改变了1个字节的内容
	//指针类型决定了指针进行解引用操作的时候，能够访问的空间大小
	//int*p     *p    能够访问4个字节
	//char*p    *p    能够访问1个字节
	//double*p  *p    能够访问8个字节

	//指针+-整数
	//int a = 0x11223344;
	//int* pa = &a;
	//char* pc = &a;
	//printf("%d\n", pa);    //00000054
	//printf("%d\n", pa + 1);//00000058
	//printf("%d\n", pc);    //00000054
	//printf("%d\n", pc + 1);//00000055
	//指针类型决定了：指针走一步走多远（指针的步长）
	//int*p;     p+1   -->4
	//char*p;    p+1   -->1
	//double*p;  p+1   -->8
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;//数组名--首元素地址  这里修改了10个整型
//	//char* p = arr;//这个只修改了两个半的整型
//	for (i = 0; i < 10; i++)//把数组内容改为1
//	{
//		*(p + i) = 1;
//		printf("%d ", *p);
//	}
//	return 0;
//}


//野指针：就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
//形成野指针的原因：1、指针未初始化 2、指针越界访问 3、指针指向的空间释放
//如何规避野指针：1、指针初始化 2、小心指针越界 3、指针指向空间释放即使置NULL 4、指针使用之前检查有效性
//#include <stdio.h>
//int main()
//{
//	//1、指针未初始化
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化为随机值
//	*p = 20;//随便找了个地方存放
//
//	//2、指针越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		p++;//数组越界导致的野指针问题
//	}
//	return 0;
//}

//3、指针指向的空间释放
//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	printf("%d\n", *p);//地址是传回来了，但是调用的函数里面a被清除了，超出了他的范围了
//	//*p = 20;
//	return 0;
//}


//指针运算：1、指针+-整数 2、指针-指针 3、指针的关系运算
//#include <stdio.h>
//int main()
//{
//指针+整数
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = arr;
	////for (i = 0; i < sz; i++)
	////{
	////	printf("%d ", *p);//打印出1-10
	////	p++;
	////}
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", *p);//打印出1 3  5 7 9
	//	p += 2;
	//}

//指针-整数
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//int* p = &arr[9];
////for (i = 0; i < sz; i++)
////{
////	printf("%d ", *p);//打印出10-1
////	p--;
////}
//for (i = 0; i < 5; i++)
//{
//	printf("%d ", *p);//打印出10 8 6 4 2
//	p -= 2;
//}

//指针-指针
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//|指针-指针|=中间的元素个数  9
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen--求字符串长度
//	//递归--模拟实现了strlen--1、计数器的方法  2、递归的方法
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//指针和数组
//#include <stdio.h>
//int main()
//{
//int arr[10] = { 0 };
//printf("%p\n", arr);//打印的是数组首元素的地址  00EFF8E0
//printf("%p\n", arr + 1);//  00EFF8E4   +4
//
//printf("%p\n", &arr[0]);//打印的是数组首元素的地址  00EFF8E0
//printf("%p\n", &arr[0] + 1);//00EFF8E4   +4
//
//printf("%p\n", &arr);//打印出来的地址一样，但意义不同  00EFF8E0
//printf("%p\n", &arr + 1);//00EFF908    +40
////例外：
////1、&arr-&数组名-数组名不是首元素地址，这时表示整个数组--&数组名，取出的是整个数组的地址
////2、sizeof(arr)-sizeof(数组名)-数组名表示整个数组-sizeof（数组名）计算的是整个数组的大小
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p   =====   %p\n", p + i, &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		* (p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//二级指针
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int * pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	//int** * pppa = &ppa;//三级指针
//	printf("%p\n", *ppa);//打印出来的是存放a的地址
//	printf("%d\n", **ppa);//打印出来的是a的值
//	return 0;
//}


//指针数组----本质上是数组
//数组指针----本质上是指针
#include <stdio.h>
int main()
{
int a = 10;
int b = 20;
int c = 30;
//int* pa = &a;
//int* pb = &b;
//int* pc = &c;
//整型数组----存放整型
//字符数组----存放字符
//指针数组----存放指针
int* arr[3] = { &a, &b, &c };//指针数组
int i = 0;
for (i = 0; i < 3; i++)
{
	printf("%p %d\n", &arr[i], *arr[i]);
}
return 0;
}