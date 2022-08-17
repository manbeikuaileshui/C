#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
// 程序的翻译环境和执行环境
// 在ANSI C的任何一种实现中，存在两个不同的环境

// 1.翻译环境：在这个环境中源代码被转换为可执行的机器指令
// 翻译环境分为：编译 + 链接
// 编译包含：预编译(gcc -E 文件名.c) + 编译(gcc -S 文件名.i) + 汇编(gcc - c 文件名.s)
// 预编译要做的事：#include头文件的包含 + 注释删除，使用空格替换注释 + #define   生成.i文件
// 编译要做的事：把C语言代码翻译成汇编代码 + 语法分析 + 词法分析 + 语义分析 + 符号汇总（汇总的是函数名、全局变量等）  生成.s文件
// 汇编要做的事：把汇编代码转换成二进制的代码 + 形成符号表  生成目标文件即.o文件
// 链接要做的事：合并段表 + 符号表的合并和重定位

// 2.执行环境：它用于实际执行代码
// 程序执行的过程
// 1.程序必须载入内存中。再有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，
//   程序的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
// 2.程序的执行便开始。接着便调用main函数。
// 3.开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回地址。程序同时也可以使用静态（static)内存，
//   存储于静态内存中的变量在程序的整个执行过程一直保留他们的值。
// 4.终止程序。正常终止main函数；也有可能是意外终止。

//               预编译详解
// 预定义符号：
// __FILE__  // 进行编译的源文件
// __LINE__  // 文件当前的行号
// __DATE__  // 文件被编译的日期
// __TIME__  // 文件被编译的时间
// __STDC__  // 如果编译器遵循ANSI C,其值为1，否则为定义
// 这些预定义符号都是语言内置的
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%d\n", __STDC__);  // 未定义
//
//	// 写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d data:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// #define：预处理指令(#开头的)
// #define 定义标识符
// 语法：#define name stuff
//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	int max = MAX;
//	printf("%d\n", max);
//
//	printf("%s\n", STR);
//
//	reg int a = 0;
//
//	do_forever;
//	
//	return 0;
//}

// 在#define定义标识符的时候，要不要在最后加上：？
// 建议不要加上：，这样容易导致问题。例：
//#define MAX 100;
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX); // MAX替换之后为"100;",出现语法错误
//	return 0;
//}

// #define 定义宏
// #define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏(macro)或定义宏(define macro)
// 下面是宏的申明方式：
// #define name(paramen-list)stuff其中的parament-list是一个由逗号隔开的符号表，他们可能出现在stuff中
// 注意：参数列表的左括号必须与name紧邻，如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分。例：
// #define SQUARE( x ) x * x     这个宏接收一个参数x,如果在上述声明之后，你把SQUARE( 5 );置于程序中，
//                               预处理器就会用下面这个表达式替换上面的表达式      5 * 5
// 警告：这个宏存在一个问题，观察下面的代码段：
//#define SQUARE(X) X*X
//// #define SQUARE(X) (X)*(X) // 这样定义能得到36
//// #define SQUARE(X) ((X)*(X))  //  这样定义能得到100
//int main()
//{
//	int ret = SQUARE(5);  // 替换成 int ret = 5 * 5
//	printf("ret=%d\n", ret);
//
//	int str = SQUARE(5 + 1);
//	printf("str=%d\n", str);  // 宏是完成替换的而不是传参的，替换之后：int str = 5 + 1 * 5 + 1,结果为11
//
//	int a = 5;
//	int sum = 10 * DOUBLE(a); // 宏是完成替换的而不是传参的，替换之后：int sum = 10 * 5 + 5,结果为55
//	printf("%d\n", sum);
//	return 0;
//}
// 提示：所以用于对数值表达式进行求值的宏定义都应该用这种方式加上括号，避免在使用宏时由于参数中的操作符或临近操作符之间不可预料的相互作用

// #define 替换规则
// 在程序中扩展#define定义符号和宏时，需要涉及几个步骤
// 1.在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换。
// 2.替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被它们的值替换。
// 3.最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上述处理过程。
// 注意：
// 1.宏参数和#define定义中可以出现其它#define定义的变量。但是对于宏，不能出现递归。
// 2.当预处理器搜素#define定义的符号的时候，字符串常量的内容并不被搜索。


// 如何把参数插入到字符串中？
// #：把一个宏参数变成对应的字符串
//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);   // the value of a is 10
//	print(b);   // the value of a is 20
//	return 0;
//}

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//int main()
//{
//	//printf("%s\n", "hello world");
//	//printf("%s\n", "hello""world");
//	// 结果相同
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);  // 替换之后：printf("the value of""a""is %d\n",a);
//	PRINT(b);  // 替换之后：printf("the value of""b""is %d\n",b);
//
//	return 0;
//}

// ##：把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符
// 注意：这样的连接必须产生一个合法的标识符，否则其结果就是为定义的
//#define CAT(X,Y)X##Y
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));  // 替换成printf("%d\n",Class##84);  -->  printf("%d\n",Class84)
//	return 0;
//}

// 带副作用的宏参数
// 当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能出现危险，
// 导致不可预测的后果。副作用就是表达式求值的时候出现的永久性效果。例如：
// X+1; //不带副作用    X++;  //带有副作用
// MAX宏可以证明具有副作用的参数所引起的问题
//int main()
//{
//	int a = 10;
//	int b = a + 1;
//	int b = ++a; //这个代码有副作用，改变b的同时，a的值也改变了
//	return 0;
//}

//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);  // 替换后：((a++)>(b++)?(a++):(b++))
//	printf("%d\n", max);  // 12
//	printf("%d\n", a);  // 11
//	printf("%d\n", b);  // 13
//	return 0;
//}

// 宏和函数对比
// 宏通常被应用于执行简单的运算，比如在两个数中找出较大的一个
// #define MAX(a,b)  ((a)>(b)?(a):(b))
// 那为什么不用函数来完成这个任务？原因有二：
// 1.用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多，所以宏比函数在程序的规模和速度方面更胜一筹
// 2.更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。
//   反之这个宏可以使用于整型、长整型、浮点型等可以用于比较的类型。宏是类型无关的
// 当然和函数相比宏也有劣势的地方：
// 1.每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
// 2.宏是没法调试的
// 3.宏由于类型无关，也就不够严谨
// 4.宏可能会带来运算符优先级的问题，导致程序容易出现错误

//int Max(int x, int y)  // 函数的方式
//{
//	return (x > y ? x : y);
//}
//#define MAX(X,Y) ((X)>(Y)? (X):(Y))  // 宏的方式
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 2.1f;
//	float d = 2.0f;
//	
//	int max1 = Max(a, b);
//	printf("%d\n", max1);
//	float max11 = Max(c, d);  // 使用函数比较大小，有可能丢失精度
//	printf("%f\n", max11);
//
//	int max2 = MAX(a, b);
//	printf("%d\n", max2);
//	float max22 = MAX(c, d);
//	printf("%f\n", max22);
//
//	return 0;
//}

// 宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);  // 替换后：int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p1 = MALLOC(10, int);  // 替换之后：int* p1 = (int*)malloc(10*sizeof(int));
//	return 0;
//}

// 1.#define定义宏    2.函数   对比：
// 代码长度：
// 1.每次使用时，宏代码都会被插入到程序中，除了非常小的宏之外，程序的长度会大幅度增长
// 2.函数代码值出现于一个地方，每次使用这个函数时，都调用那个地方的同一份代码
// 执行速度：
// 1.更快        2.存在函数的调用和返回的额外开销，所以相对慢一些
// 操作符优先级：
// 1.宏参数的求值是在所有周围表达式的上下文环境里，除非加上括号，否则邻近操作符的优先级可能会产生不可预料的后果，所有建议宏在书写的时候多些括号
// 2.函数参数只在函数调用的时候求值一次，它的结果值传递给函数。表达式的求值结果更容易预测。
// 带有副作用的宏：
// 1.参数可能被替换到宏体中的多个位置，所以带有副作用的参数求值可能会产生不可预测的结果
// 2.函数参数只在传参的时候求值一次，结果更容易控制
// 参数类型：
// 1.宏的参数与类型无关，只要对参数的操作是合法的，它就可以使用于任何参数类型
// 2.函数的参数是与类型有关的，如果参数的类型不同，就需要不同的函数，即使它们执行的任务是不同的
// 调试：
// 1.宏是不方便调试的    2.函数是可以逐语句调试的
// 递归：
// 1.宏是不能递归的    2.函数是可以递归的
// 命名约定：把宏名全部大写，函数名不要全部大写 

// #undef：这条指令用于移除一个宏定义
// 如果现存的一个名字需要被重新定义，那么它的旧名字首先要被移除
//#define MAX 100
//int main()
//{
//	printf("MAX=%d\n", MAX);
//#undef MAX
//	printf("MAX=%d\n", MAX);
//	return 0;
//}

// 命令行定义
// 许多C的编译器提供了一种能力，允许在命令行中定义符号。用于启动编译过程。例如：当我们根据统一个源文件要编译出不同的一个程序的
// 不同版本的时候,这个特性有点用处。（假定某个程序中声明了一个某个长度的数组，如果机器内存有限，我们需要一个很小的数组，但是另外
// 一个机器内存大写，我们需要一个数组能够大写）

// 条件编译：在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的，因为我们有条件编译指令。例：
// 调试性的代码，删除可惜，保留又碍事，所以我们可以选择性的编译
// 常见的条件编译指令：
// 1. #if 常量表达式
//           //...
//    #endif
// 常量表达式由预处理器求值，如：
// #define __DEBUG__ 1
// if __DEBUG__
//         //..
// #endif

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
////#if 1
//#if 0
//		printf("%d ", arr[i]);  // 如果#if为假，则不参与编译，反之
//#endif
//	}
//	return 0;
//}

// 2.多个分支的条件编译
// #if 常量表达式
//          //...
// #elif  常量表达式
//          //...
// #else
//          //...
// #endif

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf('hehe\n');
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}

// 3.判断是否被定义
// #if defined(symbol)
// #ifdef symbol
// 
// #if !defined(symbol)
// #ifndef symbol

//#define DEBUG
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n"); // 如果DEBUG未定义，则不参与编译，反之
//#endif
//
//#ifdef DEBUG
//	printf("haha\n");
//#endif
//	// 上面两个一样的意思
//
//#if !defined(DEBUG)
//	printf("heihei\n");
//#endif
//
//#ifndef DEBUG
//	printf("peipei");
//#endif
//	// 3、4代码是1、2代码的对立面
//	return 0;
//}

// 4.嵌套指令
// #if defined(OS_UNIX)
//         #ifdef OPTION1
//                 unix_version_option1();
//         #endif
//         #ifdef OPTION2
//                 unix_version_option2();
//         #endif
// #elif defined(OS_MSDOS)
//         #ifdef OPTION2
//                 msdos_version_option2();
//         #endif
// #endif

// 文件包含
// 我们已经知道，#include指令可以使另外一个文件被编译。就像它实际出现于#include指令的地方一样。
// 这种替换的方式很简单：预处理器先删除这条指令，并用包含文件的内容替换。这样一个源文件被包含10次，那就实际被编译10次
// 头文件被包含的方式：
// 本地文件包含： #include "filename"
// 查找策略：先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标准位置查找头文件。
//           如果找不到就是提示编译错误。linux环境的标准头文件的路径： /usr/include
// vs环境的标准头文件的路径： C：\Program Files (x86)\Microsoft visual Studio 9.0\VC\include

// 避免头文件的重复引入
// 每个头文件的开头写：
// #ifndef __TEST_H__
// #define __TEST_H__
// //头文件的内容
// #endif    //__TEST_H__
// 或者：#pragma once

// 请编写宏，计算结构体中某变量相对于等候地址的偏移。
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//struct S
//{
//	char c1; // 0
//	// 1-3
//	int a;  // 4-7
//	char c2;  // 8
//	//  9-11
//	// 一共9个字节，占用内存12个字节
//};
//int main()
//{
//	//struct S s;
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//
//	printf("%d\n", OFFSETOF(struct S, c1));  //替换之后：(int)&(((struct S*)0)->c1)
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

// 下面代码的结果为？
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	// 00000000  00000000 00000000 00000000
//	// 0000 0010  0010 1001 0000 0000 0000 0000     // 02 29 00 00
//	pstPimData->ucPim1 = 2;   // 00000010
//	pstPimData->ucData0 = 3;  // 00000011
//	pstPimData->ucData1 = 4;  // 00000100
//	pstPimData->ucData2 = 5;  // 00000101
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}

// 下面代码的结果为？
// 联合体(共用体)：使用同一块空间
//union Un
//{
//	short s[7]; // 14
//	int n;  // 4
//	// 对齐到自己的最大对齐数的整数倍处，所以为16
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

// 下面代码的结果为？
//int main()
//{
//	union // 联合体大小为2个字节
//	{
//		short k;  // 两个字节
//		char i[2];  // 两个元素
//	}*s,a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);  // 表示取两个字节的元素，由于小端存储，所以结果为3839
//	return 0;
//}

// 寻找单身狗，即不重复出现的数字
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int str = arr[0];
//	for (i = 0; i < 8; i++)
//	{
//		str = str ^ arr[i + 1];
//	}
//	printf("%d\n", str);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	int arr1[5] = { 0 };
	int arr2[5] = { 0 };
	int i = 0;
	int j = 0;
	int z = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[j] = arr[i];
			j += 1;
		}
		else
		{
			arr2[z] = arr[i];
			z += 1;
		}
	}
	int str1 = arr1[0];
	int str2 = arr2[0];
	for (i = 0; i < 4; i++)
	{
		str1 = str1 ^ arr1[i + 1];
	}
	printf("%d\n", str1);
	for (i = 0; i < 4; i++)
	{
		str2 = str2 ^ arr2[i + 1];
	}
	printf("%d\n", str2);
	return 0;
}