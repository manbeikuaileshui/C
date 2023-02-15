#define _CRT_SECURE_NO_WARNINGS 1
//逻辑操作符：&&(逻辑与：有假则假)、||（逻辑或：有真则真）  0为假，非0为真
//#include <stdio.h>
//int main()
//{
//int i = 0, a = 0, b = 1, c = 2;
//	int d = a && b;
//	int e = b && c;
//	int f = a && i;
//	int q = a || b;
//	int t = b || c;
//	int y = a || i;
//	printf("%d %d %d %d %d %d\n", d, e, f, q, t, y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//1 2  3 4
//	//i = a++ || ++b || d++;//1 3 3 4
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//条件操作符（三目操作符）：exp1 ？ exp2 ： exp3 //若表达式1为真，执行表达式2，表达式2的结果是整个表达式的结果，
                          //exp为表达式          //若表达式1为假，执行表达式3，表达式3的结果是整个表达式的结果.
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//   /* if (a > 5)
//        b = 3;
//    else
//        b = -3;*/
//
//    b = (a > 5 ? 3: - 3);
//    printf("%d\n", b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = 0;
//   /* if (a > b)
//        max = a;
//    else
//        max = b;*/
//
//    max = (a > b ? a : b);
//    printf("max=%d\n", max);
//    return 0;
//}


//逗号表达式：就是用逗号隔开的多个表达式 exp1，exp2，exp3，……expn.从左向右依次执行，整个表达式的结果是最后一个表达式的结果
//#include <stdio.h>
//int main()
//{
 //代码1
    //int a = 1;
    //int b = 2;
    //int c = (a > b, a = 10 + b, a, b = a + 1);//13
    //printf("%d\n", c);
    //return 0;
//代码2
    //int a = 1;
    //int b = 2;
    //int c = 4;
    ////if (a = b + 1, c = a / 2, c > 0)
    //if (a = b + 1, c = a / 2, c > 2)
    //{
    //    printf("hehe\n");
    //}
    //else
    //{
    //    printf("haha\n");
    //}
    //return 0;

//代码3
//    a = get_val();
//    count_val(a);
//    while (a > 0)
//    {
//        //业务处理
//        a = get_val;
//        count_val(a);
//    }
//    //改写
//    while (a = get_val, count_val, a > 0)
//    {
//        //业务处理
//    }
//}

//结构成员：.(结构体.成员名）、->（结构体->成员名）
//#include <stdio.h>
////创建一个结构体类型--struct Stu
//struct Stu //描述一个学生
//{
//    //成员变量
//    char name[20];
//    int age;
//    char id[20];
//};
//int main()
//{
//    struct Stu s1 = { "张三",20,"2019010305" };//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//   /* printf("%s\n", s1.name);
//    printf("%d\n", s1.age);
//    printf("%s\n", s1.id);*/
//         //结构体变量.成员名
//    
//    struct Stu* ps = &s1;
//    /*printf("%s\n", (*ps).name);
//    printf("%d\n", (*ps).age);
//    printf("%s\n", (*ps).id);*/
//    printf("%s\n", ps->name);
//    printf("%d\n", ps->age);
//    printf("%s\n", ps->id);
//         //结构体指针->成员名
//    return 0;
//}


//隐式类型转换
//#include <stdio.h>
//int main()
//{
//    char a = 3;//char是一个字节，8个bit
////（int a）补 = 3 = 00000000000000000000000000000011
////（char a）补 = 3 = 00000011 
////整型提升后（char a)补 = 00000000000000000000000000000011
//    char b = 127;
////（int b）补 = 127 = 00000000000000000000000001111111
////（char b）补 = 127 = 0111111
////整型提升后（char b)补 = 00000000000000000000000001111111
//    char c = a + b;
////(int c)补 = 00000000000000000000000000000011 + 00000000000000000000000001111111 = 00000000000000000000000010000010
////（char c)补 = 10000010 
//// (int c)补 = 11111111111111111111111110000010
////(int c)原 =  10000000000000000000000001111110 = -126
//    printf("%d\n", c);
//    return 0;
//}
//实例1
#include <stdio.h>
int main()
{

    char a = 129;//最大存放128
    short b = 65537;//最大存放65536
    int c = 5;
    if (a == 129)
        printf("a");
    if (b == 65537)
        printf("b");
    if (c == 5)
        printf("c");
}
//实例2
//#include <stdio.h>
//int main()
//{
//    char c = 1;
//    printf("%u\n", sizeof(c));//1
//    printf("%u\n", sizeof(+c));//4(c只要参与表达式运算，就会发生整型提升，表达式+c，就会发生提升，所以sizeof（+c）是4个字节
//    printf("%u\n", sizeof(!c));//1
//    return 0;
//}