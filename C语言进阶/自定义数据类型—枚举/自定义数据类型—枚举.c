// 枚举：把可能的取值一一例举
// 枚举类型的定义
/*enum Day // enum：关键字  Day：枚举类型名
{        // {}里面的是：枚举的可能取值（枚举常量）
	Mon,  // 0
	Tues, // 1
	Wed,  // 2
	Thur, // 3
	Fri,  // 4
	Sat,  // 5
	Sun   // 6
};
enum Sex //性别
{
	// 默认为0,1,2……递增
	// 若默认的取值不合适，则可以给常量赋一个初始值，如下：
	MALE = 2,   // 2
	FEMALE = 4, // 4
	SECRET = 8  // 8
};
enum Color
{
	RED,       // 0
	GREEN = 4, // 4
	BLUE       // 5   
};*/
/*#define RED 0
#define GREEN 4
#define BLUE 5*/
/*#include <stdio.h>
int main()
{
	enum Sex s = MALE;// 只能赋值可能取值的值
	enum Day c = Wed;
	printf("%d %d %d %d %d %d %d\n", Mon, Tues, Wed, Thur, Fri, Sat, Sun);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	printf("%d %d %d\n", RED, GREEN, BLUE);
	return 0;
}*/

// 枚举的大小都是4个字节
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
#include <stdio.h>
int main()
{
	enum Sex s = MALE;
	printf("%d\n", sizeof(s));
	return 0;
}

// 枚举的优点
// 我们可以使用#define 定义常量，为什么非要使用枚举？枚举的优点：
// 1.增加代码的可读性和可维护性
// 2.和#define 定义的标识符比较枚举有类型检查，更加严谨
// 3.防止了命名污染（封装）
// 4.便于调试
// 5.使用方便，一次可以定义多个常量

// 枚举的使用
/*enum Color
{
	RED,
	GREEN = 4,
	BLUE
}; 
#include <stdio.h>
int main()
{
	enum Color c = RED;
	return 0;
}*/



