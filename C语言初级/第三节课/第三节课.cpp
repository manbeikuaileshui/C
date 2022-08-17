//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//字符串的结束标志;'\0'
//	//"abcd"其实后面隐藏了"\0","abcd\0"
//	//'\0'--转义字符--0
//	//0--数字0
//	//'0'--字符0--48
// EOF-end of file--文件结束标志--1
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	int a = 10;
//	int b = 20;
//	if (a > b)
//		printf("%d\n", a);
//	else
//	printf("%d\n", b);

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("max = %d\n", max);
	/*return 0;
}*/


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//这个是不行的
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//计算元素个数 6
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 0;//四个字节，32个bit
//	//00000000000000000000000000000000
//	int b = ~a;//b是有符号的整型
//	//11111111111111111111111111111111
//	//10000000000000000000000000000001
//	// 只要是整数，内存中存储的都是二进制的补码
// //正数--原码、反码、补码都相同
// //负数
// //原码                   ---->        反码      ---->    补码
// //按照正负写         原码的符号位              反码+1
// //出二进制系列       不变其他位取反
//	//~--对一个二进制数按位取反
//	//1001
//	//0110
//	printf("%d\n", b);//打印的是这个数的原码
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++ 11 10
//	//int b = ++a;//前置++，先++，再使用 11 11
//	//int b = a--;//后置--，先使用，再-- 9 10
//	int b = --a;//前置--，先--，再使用 9 9
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//int a = 3.14;
//	int a = (int)3.14;//强制类型转换 double-->int
//	printf("%d\n", a);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//0表示假，非0表示真
//	//&&--逻辑与(有一个假则为假)
//	//||--逻辑或（有一个真则为真）
//	//int a = 3;//
//	//int b = 5;//
//	//int c = a && b;//1
//	//int c = a || b;//1
//	int a = 0;
//	int b = 5;
//	//int c = a && b;//0
//	int c = a || b;//1
//	printf("%d\n", c);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//条件操作符(三目操作符)：exp1？exp2：exp3；
//	//若表达式exp1为真，执行表达式exp2，表达式2的结果是整个表达式的结果
//	//若表达式exp1为假，执行表达式exp3，表达式3的结果是整个表达式的结果
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//if (a > b)
//		//max = a;
//	//else
//		//max = b;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//[]--下标引用操作符
//	//printf("%d\n", arr[4]);
//	//()函数调用
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
	//typedef--类型定义（类型重定义）
	//typedef unsigned int u int;//把unsigned int 改名为 u int
	//unsigned int num = 20;
	//u int num = 20;
	//return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
//void test()
//{
//	//int a = 1;//a出了{}就消失了
//	static int a = 1;//加了static后，a是一个静态的局部变量
//	//1.static 修饰局部变量，局部变量的生命周期变长（继续上次计算出的a）
//	a++;
//
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//int main()
//{
////extern--声明外部符号的
////2.static 修饰全局变量(改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用了）
//	//g_val在另一个文件
//	extern int g_val;
//	printf("g_val = %d\n", g_val);

//extern int add(int, int);
//int main ()
////3.static修饰函数
////static修饰的函数改变了函数的链接属性（外部链接属性--->内部链接属性）
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>

//#define 定义标识符常量
//#define MAX 100
//int main()
//{
//	int a = MAX;//相当于int a = 100;
//	printf("%d\n", a);
//	return 0;
//}

//#define 可以定义宏--带参数
//函数方式计算
//int MAX(int x, int y)
//{
//	if(x > y)
//	    return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//
////宏的方式计算
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//相当于max = (a>b? a;b)
//	printf("max = %d\n",max);
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>
int main()
{
	int a = 10;//向内存申请4个字节空间
	////&a//取地址
	////有一种变量是用来存放地址的----指针变量
	int* p = &a;//把a的地址存到p里面
	////p为指针，里面是a的地址
	////*--解引用操作符（间接访问操作符）
	////*p--对p进行解引用操作，找到它所指向的对象
	*p = 20;//把通过*p找到的对象的值改为20
	printf("%d\n", a);
	printf("%p\n", p);
	printf("%p\n", &a);
double d = 3.14;
double* pd = &d;
*pd = 5.5;
printf("%lf\n", d);
printf("%lf\n", *pd);
printf("%d\n", sizeof(pd));
////
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));
	return 0;
}
////指针大小在32位平台是4个字节，64位平台是8个字节