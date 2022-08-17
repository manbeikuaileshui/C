//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//从arr里面存的地址处开始打印字符串，直到遇到‘\0’结束
//  printf("%c\n",*pc);
//	printf("%s\n", pc);//从pc里面存的地址处开始打印字符串，直到遇到‘\0’结束
//	//打印出来的都是“abcdef”
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串，实际是把a的地址放在p里面
//	printf("%c\n", *p);
//	printf("%s\n", p);//从p里面存的地址处开始打印字符串，直到遇到‘\0’结束
//	//*p = 'w';//不能这样修改
//	//printf("%s\n", p);
//	return 0;
//}

//输出结果为？
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)//用相同的常量字符串去初始化不同的数组的时候会开辟出不同的内存块，所以打印的是haha
//	{                
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	if (p1 == p2)//当几个指针，指向同一个字符串的时候，他们实际会指向同一块内存
//	{            
//		printf("hehe\n");    
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组--指针数组
//	char* pch[5];//存放字符指针的数组--指针数组
//	return 0;
//}

//指针数组的用法(不是这样用的)
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//可能会这样用
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//			printf("%d ",*( parr[i] + j));
//			printf("%d ", (*(parr+i))[j]);
//			printf("%d ", *((*(parr+i)) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针--是指针
//#include <stdio.h>
//int main()
//{
//	//int* p = NULL;//p是整型指针--指向整型的指针--可以存放整型的地址
//	//cahr* pc = NULL;//pc是字符指针--指向字符的指针--可以存放字符的地址
//	               //数组指针--指向数组的指针--可以存放数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组的地址要存起来
//	//arr--首元素地址
//	//&arr[0]--首元素地址
//	//&arr--整个数组的地址
//	int(*p)[10] = &arr;//p就是数组指针
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* arr[5];
//	pa = &arr;//地址应该如何存放？如下：
//	//char* (*pa)[5] = &arr;
//	return 0;
//}

//数组指针的用法(不是这样用的）
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//数组的地址解引用就是数组名也就是首元素地址
//		printf("%d ", *(*pa + i));
//	}
	//上面这样子好麻烦，改为如下：
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
      printf("%d ", p[i]);
	}*/
//	return 0;
//}

//可能这样子用
//#include <stdio.h>
// 参数是数组的形式
//void printf1(int arr[3][5], int a, int b)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
// 参数是指针的形式
//void printf2(int(*p)[5], int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//把二维数组想象成一维数组，第一行为第一个元素，以此类推
//	//printf1(arr, 3, 5);//arr--数组名--首元素地址--也就是第一行元素的地址
//	printf2(arr, 3, 5);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//int arr[5];//arr是一个5个元素的整型数组
//int* arr1[10];//arr1是一个数组，数组有10个元素，每个元素的类型是int*，arr1是指针数组
//int(*arr2)[10];//arr2是一个指针，该指针指向一个数组，数组有10个元素，每个元素的类型是int，arr2是数组指针
//int(*arr3[10])[5];//arr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，
//                    每个元素的类型是int

//#include <stdio.h>
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p1 = "abcdef";//p1里面放的实际是a的地址，找到a的地址，也就能找到a所在的字符串
//	//指针数组--数组--存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针--指向数组
//	//int* p1;//整形指针--指向整形的指针
//	//char* p2;//字符指针--指向字符的
//	int arr2[5];//数组
//	int (*pa)[5] = &arr2;//取出数组的地址,pa就是一个数组指针
//	return 0;
//}

//一维数组传参
//#include <stdio.h>
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* p)
//{}
//void test2(int* arr2[20])
//{}
//void test2(int* arr2[])
//{}
//void test2(int** arr2)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };//指针数组
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//
////二维数组传参(如果用指针接收，需要用数组指针接收)
//#include <stdio.h>
//void test(int arr[3][5])
//{}
//void test(int arr[][5])//可以省略行，不能省略列
//{}
////void test(int arr[][])//这样传参不可以
////{}
////void test(int* arr)//这样传参不可以
////{}
//// void test(int* arr[5])//这样传参不可以
////{}
////void test(int **arr)//这样传参不可以
////{}
//void test(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//一级指针传参
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//void test(int* p)//接收参数的类型已定
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test();//（）里面能放什么参数？
//	//可以放：&a、p、 
//	return 0;
//}

//二级指针传参
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//#include <stdio.h>
//void test(int** prt)//接收参数的类型已定
//{}
//int main()
//{
//	int n = 10;
//	int* prt = &n;
//	int** ppt = &prt;
//	int* arr[10] = { 0 };//指针数组
//	test();//（）里面能放什么参数？
//	//可以放：&prt、ppt、arr、
//	return 0;
//}

//数组指针--指向数组的指针
//函数指针--指向函数的指针--存放函数地址的一个指针
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int sum = Add(a, b);
//	//printf("sum=%d\n", sum);
//	//printf("%p\n", Add);//打印的是函数的地址
//	//printf("%p\n", &Add);//打印的是函数的地址
//	//&函数名 和 函数名 都是函数的地址
//	int(*p)(int, int) = Add;
//	//int(*p)(int x, int y) = Add;
//	int ret = (*p)(10, 20);
//  int ret = p(10, 20);//*可以省略 
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#include <stdio.h>//如何存函数的地址？
//void print(char* str)//首先得是一个指针（*p）
//{                    //然后指针指向函数参数的类型 （*p）（char*）
//	printf("%s\n", str);//最后函数的返回类型  void （*p）（char*）
//}                      //如何使用？
//int main()             //写出函数 （*p）
//{                      //写入参数  （*p）（"hello world"）
//	void(*p)(char*) = print;
//	(*p)("hello world");
//	return 0;
//}

//下面代码表示什么意思？
//代码1
//(*(void(*)())0)();//void(*)()：这是一个函数指针类型
             //把0强制类型转换成：void(*)()函数指针类型--0就是一个函数的地址,然后解引用找到该函数，并调用，该函数是无参数的函数，并且返回类型为void
//代码2
//void (*signal(int,void(*)(int)))(int)
//是一个函数声明
//signal是一个函数名，第一个参数是整型(int)，第二个参数是函数指针(void(*)(int))，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型是一个函数指针(void(*)(int))，该函数指针指向的函数的参数是int，返回类型是void
//简化代码2
//举例：typedef unsigned int uint;//把unsigned改名为uint
//错误示范：typedef void(*)(int) int pfun_t;//把void(*)(int)改名为pfun_t  这样改是错的
//简化为：
//typedef void(*pfun_t)(int);//这个是对的
//pfun_t signal(int, pfun_t);
