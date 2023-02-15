                                    //递归
//接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void printf(int n)
//{
//	if (n > 9)
//	{
//		printf(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	printf(num);
//	//printf(1234)
//	//printf(123) 4
//	//printf(12) 3 4
//	//printf(1) 2 3 4
//	return 0;
//}


////编写函数不允许创建临时变量，求字符串的长度
//#include <stdio.h>
//#include <string.h>
//int my_strlen1(char* str)
//{
//	int z = 0;
//	while (*str != '\0')
//	{
//		z++;
//		str++;
//	}
//
//	return z;
//}

//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
	//1.正常情况   //strlen()求字符串长度，但要引用头文件 #include <string.h>
	//char arr[] = "bit";
	//int len = strlen(arr);
	//printf("%d\n", len);

	//2.模拟实现了一个strlen函数
	//char arr[] = "bit";
	//int len = my_strlen1(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	//printf("len = %d\n", len);

	//3.不创建临时变量，用递归方法解决
//  char arr[] = "bit";
//	int len = my_strlen2(arr);
//	printf("len=%d\n", len);
	//把大事化小
	//my_strlen2("bit");
	//1+my_strlen2("it");
	//1+1+my_strlen2("t");
	//1+1+1+my_strlen2("");
	//1+1+1+0
	//3
//	return 0;
//}


//求n的阶乘（不考虑溢出)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//循环的方式
//int Facl(int a)
//{
//	int b = 0;
//    int ret1 = 1;
//	for(b=1; b<=a; b++)
//	{
//		ret1 *= b;
//	}
//	return ret1;
//}

//递归的方式
//int Facl(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a * Facl(a - 1);
//}

//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}


                                        //递归与迭代
//求第n个斐波那契数。（不考虑溢出）
//斐波那契数列：1 1 2 3 5 8 13  21 .....(前两个数等于第三个数）
//描述第n个斐波那契数：Fib（n），n<=2时，第n个数为1；n>2时，第n个数为Fib(n-2)+Fib(n-1)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int count = 0;
//用递归方法不合适
//int Fib(int i)
//{
//	if (i == 3)
//	{
//		count++;//计算第三个斐波那契数的计算次数
//	}
//	else if (i <= 2)
//		return 1;
//	else
//		return Fib(i - 2) + Fib(i - 1);
//}

//用迭代的方法
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}


//递归加上限制条件也有可能栈溢出
#include <stdio.h>
void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}