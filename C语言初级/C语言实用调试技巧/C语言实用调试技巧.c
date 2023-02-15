#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");//使程序暂停一下
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;//Debug版本执行：死循环
//}           //Release版本执行：打印13个hehe

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);//F9:切换断点。先按F9,再按F5：执行完前面的代码，停在此处，再按F5，跳到执行逻辑的下一个断点
//	}
//	return 0;
//}

//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	return 0;
//}

//#include <stdio.h>
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//调试实例
//1.实现代码：求1！+2！+3！+...+n！，不考虑溢出
//输入3，期待输出9，但是输出了15 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//int ret = 1;//修改后的代码：删除上面那个，加上这个
//	 	for (j = 1; j <= i; j++)
//		{
//			ret *= j;//ret = ret * j
//		}
//		sum += ret;//sum = sum + ret
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//2.研究程序死循环的原因
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");//arr[12]与i同一个地址空间，把arr[12]改为0，也就把i改为0，所以会死循环
//	}
//	return 0;
//}

//strcpy(字符串拷贝)的使用
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "######";
//	char arr2[] = "hehe";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//拷贝arr2的时候把arr2的\0也拷贝进去了，当打印arr1的时候遇到\0就不再打印了
//	return 0;                                                     //所以多出来的“##”不会打印出来
//}

//模拟实现strcpy函数
//#include <stdio.h>
//#include <assert.h>
////void my_strcpy(char* arr1, char* arr2)
////void my_strcpy(char* arr1, const char* arr2)
//char* my_strcpy(char* arr1, const char* arr2)//函数有返回值，加150，删164和166，加167
//{
//	//while (*arr2!= '\0')
//	//{
//	//	//*arr1 = *arr2;
//	//	//arr1++;
//	//	//arr2++;
//	//	*arr1++ = *arr2++;//优化137-139的代码
//	//}
//	//*arr1 = *arr2;
//	//if (arr1 != NULL && arr2 != NULL)//用if是为了防止把空指针传过来,但是这样做不易于发现问题
//	//{
//	//	while (*arr1++ = *arr2++)//优化135-142的代码
//	//	{
//	//		;
//	//	}
//	//}
//	char* ret = arr1;
//	assert(arr1 != NULL);//断言：使用这个库函数需要引用#include <assert.h>
//	assert(arr2 != NULL);//assert()：若（）里为真什么都不发生，若为假会报错,便于修改代码
//	while (*arr1++ = *arr2++)
//	//while(*arr2++ = *arr1++)//写反了，把132改写成133,就可以很好的找出问题所在
//	{
//		;                        //优化143-149的代码
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "######";
//	char arr2[] = "hehe";
//	//my_strcpy(arr1, arr2);
//	//my_strcpy(arr1, NULL);//写错了，把143-149改为151-157就很容易找出问题
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//const的用法
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	//const int num = 10;//加const使num不能被改变,但是结果还是被改变了
//	int* p = &num;
//	//const int* p = &num;//const放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num)的值,但可以改p
//	//int* const p = &num; //const放在指针变量的*右边时，修饰的是指针变量p本身，也就是说：p不能被改变，但可以通过p来改变*p(num）的值
//	*p = 20;               //两边都放p和*p都不能被改变
//	//int n = 100;
//	//p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//strlen
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//模拟实现strlen
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* arr)
{
	assert(arr != NULL);//保证指针的有效性
	int ret = 0;
	while (*arr++)
	{
		ret++;
	}
	return ret;
}
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}