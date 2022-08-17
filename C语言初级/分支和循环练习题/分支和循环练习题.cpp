//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////写代码将三个数按从大到小输出
//int main()
//{
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d", &a,&b,&c);
	//if (a > b && a > c)
	//{
	//	if (b > c)
	//		printf("%d %d %d\n", a, b, c);
	//	else
	//		printf("%d %d %d\n", a, c, b);
	//}
	//else if (b > a && b > c)
	//{
	//	if (a > c)
	//		printf("%d %d %d", b, a, c);
	//	else
	//		printf("%d %d %d", b, c, a);
	//}
	//else
	//{
	//	if (a > b)
	//		printf("%d %d %d", c, a, b);
	//	else
	//		printf("%d %d %d", c, b, a);
	//}

//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a放最大，b次之，c最小
//	if (a < b)
//	{
//		int A = a;
//		a = b;
//		b = A;
//	}
//	if (a < c)
//	{
//		int B = a;
//		a = c;
//		c = B;
//	}
//	if (b < c)
//	{
//		int C = b;
//		b = c;
//		c = C;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//写一个代码打印1-100之间所有的数字
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i < 34; i++)
//	{
//		sum = 3 * i;
//		printf("%d ", sum);
//	}
//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//给定两个数，求这两个数的最大公约数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0; 
//	scanf("%d%d", &a, &b);
//		while (r = a % b)
//		{
//			a = b;
//			b = r;
//		}
//	printf("%d\n", b);
//	return 0;
//}



//打印1000年到2000年之间的润年
//1.能被4整除并且不能被100整除是润年
//2.能被400整除是润年
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
	//int year = 0;
	//int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);//计算润年个数

//	int year = 0;
//	int cont = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			cont++;
//		}
//
//	}
//	printf("\ncont=%d\n", cont);
//	return 0;
//}


//写一个代码，打印100-200之间的素数
//若i=a*c，则a和c中至少有一个数字<=开平方i
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//    for (i = 100; i <= 200; i++)   //for(i=101;i<=200;i+=2)
//	{
//	    for (a = 2; a < i; a++)      //for(a=2;a<=sqrt(i);a++)//sqrt（）-开平方的数学库函数，需要引用头文件#include <math.h>
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		if (a == i)      //if(a>sqrt(i))
//		{
//			printf("%d ", i);
//			b++;
//		}
//	}
//	printf("\nb=%d\n", b);
//	return 0;
//}


//编写程序1-100的所有整数中出现多少个数字9
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
	/*int a = 0;
	int b = 0;
	double sum = 0.0;
	for (a = 1,b=2; a <= 99,b<=100; a+=2,b+=2)
	{
		sum = sum + 1.0 / a - 1.0 / b;
	}
	printf("%lf\n", sum);*/

//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		//sum = sum + flag * 1.0 / i;//与式同一个意思
//		flag = -flag;
//	}
//	printf("%fl\n", sum);
//	return 0;
//}


//求10个整数中最大值
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int i = 0;
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr[]{ -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];//假设这组数据最大的为第一个，则每个值与其比较，比他大赋值给他，比他小，下一个
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//打印9*9乘法表口诀
//1*1=1
//1*2=2  2*2=4  
//1*3=3  2*3=6  3*3=9
//.....  .....  .....   .....
//1*8=8  2*8=16 3*8=24  4*8=32  ......
//1*9=9  2*9=18 3*9=27  4*9=36  ......
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			//printf("%d*%d=%2d  ", a, b, a * b);//%2d，表示打印的结果为两位，若不够两位则会用空格向右补齐
//			printf("%d*%d=%-2d  ", a, b, a * b);  //%-2d,表示打印的结果为两位，若不够两位则会用空格向左补齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


////猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**** 猜字游戏 ****\n");
//	printf("* 1.play 0.exit  *\n");
//	printf("******************\n");
//}
//void game()
//{
//	int guess = 0;//接收猜的数字
//	int ret = 0;
////	//拿时间戳来设置随机数的生成起始点
////	//时间戳：当前计算机的时间-计算机的起始时间（1970.01.0.1 00:00:00）=（xxxx）秒
//	ret = rand()%100+1;//rand()  生成一个随机数  范围：0 to RAND_MAX(0-32767) 为了使游戏好玩，最好生成1-100的随机数
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


////goto语句：终止程序在某些深度嵌套的结构的处理过程，例如：一次跳出两层或多层循环。(跳到哪里去的意思）
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	//again:
//	//printf("hello bit\n");
//	//goto again;
//	
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}


//关机程序（利用goto语句）
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
int main()
{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  //60秒后关机
//	//system()--执行系统的命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，电脑将在60s后关机。输入密码取消关机\n请选择>;");
//	scanf("%s", input);
//	//strcmp()--比较两个字符串
//	if (strcmp(input, "1223") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}

	char input[20] = { 0 };
		system("shutdown -s -t 60");
		while (1)
		{
			printf("请注意，电脑将在60s后关机。输入密码取消关机\n请选择>;");
			scanf("%s", input);
			if (strcmp(input, "1223") == 0)
			{
				system("shutdown -a");
				break;
			}
			else if (strcmp(input, "1223") == !0)
			{
				printf("密码错误！\n");
			}
		}
	return 0;
}

