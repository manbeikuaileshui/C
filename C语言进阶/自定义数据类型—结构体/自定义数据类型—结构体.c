//                                          结构体
// 结构是一些值得集合，这些值称为成员变量，结构体的每个成员可以是不同类型的变量
// 结构体声明
// struct tag            // struct：结构体关键字，不能丢掉     tag：结构体标签，随便定义
// {
// 	  member - list;    //  member - list（{}里面的叫做）：成员列表      
// }variable - list;    //  variable - list（{}后面的叫做）：变量列表       后面的;不能省略
// 例：声明一个结构体类型，描述一个学生
// 声明一个学生类型，是想通过学生类型来创建学生变量（对象）
// 描述学生的属性：名字、电话、性别、年龄
//struct Stu          
//{
//	char name[20];  //  名字
//	char tele[12];  //  电话
//	char sex[10];   //  性别  
//	int age;
//}s4,s5,s6;  //s4,s5,s6是利用上面的类型创建的结构体变量名（全局变量）
//struct Stu s3;  //（全局变量）
//int main()
//{
////  创建结构体变量（局部变量）
//	struct Stu s1;     //struct Stu 实际就是一种数据类型  如：int、char等
//	struct Stu s2;
//	return 0;
//}
//
////  匿名结构体类型（实际就是不设置结构体标签），但创建变量的时候，只能在大括号后面创建
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}* psa;  //后面放了个指针，变成了匿名结构体指针类型
//int main()
//{
//	psa = &x;  // 结构体指针只能存放相同结构的结构体的地址
//	return 0;  // 上面两个结构体类型虽然成员相同，但编译器会把它们当成完全不相同的两个类型
//}
//
//// 结构的自引用：
//// 在结构中包含一个类型为该结构体本身的成员是否可以？
//// 例：
//struct Node
//{
//	int data;
//	struct Node next;
//};
//int main()
//{
//	sizeof(struct Node);  //那么sizeof(struct Node)结果是多少？
//	return 0;             //报错，不能这样写代码
//}                         //结构体可以包含各种类型的变量，但不能包含自己这种类型的变量
//// 正确的自引用方式
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//// 这样写代码，可行否？
//typedef struct  // typedef：给类型重命名
//{
//	int data;
//	Node* next;  //不能这样使用，还没创建Node,就使用了Node
//}Node;
//// 解决方案
//typedef struct Node  // 使用typedef给类型重命名，原本创建变量：struct Node s1;    重命名后：Node s1;
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1; //两种方式都可以创建变量
//	Node n2;
//}

//  结构体变量的初始化
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	struct T st;  //结构体里面包含结构体
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//#include <stdio.h>
//int main()
//{
//	struct S s = { {55.6, 30},'c',100,3.14,"hello world" };  // 结构体初始化
//	printf("%c %d %lf %s %lf %d\n", s.c, s.a, s.d, s.arr, s.st.weight, s.st.age);
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//  结构体内存对齐：（结构体大小计算规则）
//  1.第一个成员在与结构体变量偏移量为0的地址处
//  2.其它成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//    对齐数 = 编译器默认的一个对齐数与该成员大小的较小值
//    VS中默认的值为8
//  3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
//  4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//    结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
/*struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
#include <stdio.h>
int main()
{
	struct S1 s1 = { 0 }; // 第一个参数初始化为零，其余默认初始化为零
	printf("%d\n", sizeof(s1));// ?  12
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));// ?  8
	return 0;
}*/

// 在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到？
// 让占用空间小的成员尽量集中在一起

// 为什么存在内存对齐？
// 1.平台原因（移植原因）：不是所有的硬件平台都能访问任意地址上的任意数据的；
//   某些硬件平台只能在某些地址处取某些特定类型的的数据,否则抛出硬件异常
// 2.性能原因：数据结构（尤其是栈）应该尽可能地在自然边界上对齐。
//   原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问
// 总体来说：结构体的内存对齐是拿空间来换取时间的做法

// 修改默认对齐数
/*#include <stdio.h>
#pragma pack(4)  //  修改默认对齐数为4
struct S
{
	char c1;
	double d;
};
#pragma pack()  //  取消修改的默认对齐数
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}*/

// offsetof(structName, memberName)：计算结构体成员相对于结构体起始位置的偏移量
// 第一个参数：结构体类型名  第二个参数：结构体类型的成员名
// 返回值：偏移量
// 头文件：#include <stddef.h>
/*struct S
{
	char c;
	int i;
	double d;
};
#include <stdio.h>
#include <stddef.h>
int main()
{
	printf("%d\n", offsetof(struct S, c)); //  0
	printf("%d\n", offsetof(struct S, i)); //  4
	printf("%d\n", offsetof(struct S, d)); //  8
	return 0;
}*/

// 结构体传参
//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init1(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//void Init2(struct S* tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'w';
//	tmp->d = 3.14;
//}
//void print1(struct S ps)
//{
//	printf("赋值后：%d %c %lf\n", ps.a, ps.c, ps.d);
//}
//void print2( const struct S* pa) //只需要打印不需要修改内容加上const
//{
//	printf("赋值后：%d %c %lf\n", pa->a, pa->c, pa->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	printf("赋值前：%-3d %c %lf\n", s.a, s.c, s.d);
////  Init1(s);  //错误的传参方式
//	Init2(&s);
//	print1(s);
//	print2(&s); //尽量使用地址传参打印，节省空间
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pf = fopen("text.txt", "W");
	if (pf = NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	// 1.定位文件指针
	//fseek(pf, 4, SEEK_CUR);
	//// 2.读取文件
	//int ch = fgetc(pf);
	//printf("%c\n", ch);
	//// 3.关闭文件
	//fclose(pf);
	//pf = NULL;
	return 0;
}