
//库函数：www.cplusplus.com
//      英文版：http://en.cppreference.com
//      中文版：http://zh.cppreference.com
//在计算机科学中，子程序，是一个大型程序中的某部分代码，由一个或多个语句块组成。它负责完成某项特定任务，
//而且相较于其他代码，具备相对的独立性。
//一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏。这些代码通常被集成为软件库。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


////strcpy:拷贝内容
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "####";
//	strcpy(arr2, arr1);//将arr1里面的内容拷贝到arr2里面去,需要引用头文件<string.h>
//	printf("%s\n", arr2);
//	return 0;
//}


//memset(memory set):替换部分内容
//       内存   设置
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5 );//''里面必须是整型，不能放字符串
//	printf("%s\n", arr);
//	return 0;
//}


//写一个函数可以找出两个整数中的最大值
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}


//写一个函数可以交换两个整型变量的内容
//Swap1是错误的函数设计，Swap2才是正确的函数设计
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
// }

//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);//传值调用
//	Swap2(&a, &b);//传址调用
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//写一个函数可以判断一个数是不是素数（100-200）
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a < n; a++)//for(a=2;a<sqrt(n);a++)
//	{
//		if (n % a == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	while (1)
//	{
//		int i = 0;
//		int esc = 0;
//		scanf("%d", &i);
//		{
//			if (is_prime(i) == 1)
//				printf("素数\n");
//			if (is_prime(i) == 0)
//				printf("不是素数\n");
//		}
//	}
//	return 0;
//}


//写一个函数判断一年是不是润年(1000-2000)
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int is_leap_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	while (1)
//	{
//		int year = 0;
//		scanf("%d", &year);
//		if (is_leap_year(year) == 1)
//			printf("是润年\n");
//		else if (is_leap_year(year) == 0)
//			printf("不是润年\n");
//	}
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找,找到了返回这个数的下标，找不到返回-1
//#include <stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//数组传参之后不能这样求元素个数,可以先求出元素个数在传过来
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了,下标是：%d\n", ret);
//	return 0;
//}


//写一个函数，每调用一次这个函数，就会将num的值增加1
//void Ad(int* p)
//{
//	(*p)++;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


//函数的嵌套调用(函数和函数之间可以有机的组合的)
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//	return 0;
//}
//int main()
//{
//	three_line();
//	return 0;
//}


//函数的链式访问（把一个函数的返回值作为另一个函数的参数）
//#include <stdio.h>
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	//strlen():求字符串长度
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf("%d",printf("%d",2));
//	//printf("%d",1);
//	//最终结果4321
//	//printf成功时，返回值为写入的字符个数
//	return 0;
//}

//函数的声明与定义
//int Add(int x, int y);//函数声明，放在add.h里面，需引头文件#include "Add.h"
#include "Add.h"
#include <stdio.h>
//函数定义,放在add.c里面
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);//函数调用
	printf("%d\n", sum);
	return 0;
}
