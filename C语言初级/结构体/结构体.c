#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//描述一个学生--一些数据
//名字
//年龄
//电话
//性别
//struct--结构体关键字   stu--结构体标签    struct stu-- 结构体类型

//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3;//s1,s2,s3是三个全局的结构体变量
//int main()
//{
//	struct stu s;//s是局部变量
//	return 0;
//}

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu为类型
//int main()
//{
//	stu s;
//	return 0;
//}
//加了typedef 直接stu s， 没加struct stu s

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu s1)//传实参用.
//{
//	printf("name: %s\n", s1.name);
//	printf("age: %d\n", s1.age);
//	printf("tele: %s\n", s1.tele);
//	printf("sex: %s\n", s1.sex);
//}
//void print2(stu* s1)//传地址用->
//{
//	printf("name: %s\n", s1->name);
//	printf("age: %d\n", s1->age);
//	printf("tele: %s\n", s1->tele);
//	printf("sex: %s\n", s1->sex);
//}
//int main()
//{
//	stu s1 = { "张三",20,"12345678910","男" };//初始化s1
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.tele);
//	printf("%s\n", s1.sex);*/
//	print1(s1);//实参传给形参，相当于形参对实参的一份临时拷贝，浪费空间与时间
//	print2(&s1);//传过去的是地址，只占4/8个字节，这个方法比较好
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };//嵌套结构体初始化
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	printf("%d\n", t.s.a);
//	printf("%c\n", t.s.c);
//
//	return 0;
//}

                    //                             |—————————————————|
//压栈             //                              |  |——————————————|  |
int Add(int x, int y)                         //   |栈| 栈区开辟空间：局部变量     |  |
{                                            //    |区|         函数的形式参数     |  |
	int z = 0;                              //     |  |         函数调用           |  |     栈：先进后出，后进先出
	z = x + y;                                //   |  |——————————————|  |   压栈：插入一个元素
	return z;                       //             |                                  |   出栈：删除一个元素
}                     //                           |  |——————————————|  |   从上往下放
int main()                      //                 |堆| 堆区开辟空间：动态内存分配 |  |   若要删除1，必须先删除2和3
{                   //                             |区|          malloc/free       |  |    
	int a = 10;             //                     |  |          realloc/calloc    |  |    
	int b = 20;          //                        |  |——————————————|  |    |——————————|—>栈顶/高地址
	int ret = 0;                   //              |                                  |    |          3         |
	ret = Add(a, b);               //              |  |——————————————|  |    |——————————|
	return 0;                      //              |静| 静态区开辟空间：全局变量   |  |    |          2         |
}                                   //             |态|                 静态变量   |  |    |——————————|
                                       //          |区|——————————————|  |    |          1         |
                                           //      |—————————————————|    |——————————|—>低地址
                                                                   //             栈区的默认使用：
                                                                       //                      先使用高地址的空间
                                                                 //                            再使用低地址的空间