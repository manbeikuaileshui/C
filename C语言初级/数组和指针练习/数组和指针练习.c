//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
////一维数组
//int main()
//{
	//数组名是首元素地址,有两个例外
	//1.sizeof(数组名）--数组名表示整个数组
	//2.&数组名--数组名表示整个数组

	//整型数组
	//int arr[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(arr));//sizeof(数组名）--计算的是数组的总大小--单位是字--16
	//printf("%d\n", sizeof(arr + 0));//arr表示的是首元素地址，arr+0还是首元素地址，地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(*arr));//arr表示首元素地址，*arr表示首元素1--4
	//printf("%d\n", sizeof(arr + 1));//arr表示首元素地址，arr+1表示第二个元素的地址--地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(arr[1]));//第二个元素--4
	//printf("%d\n", sizeof(&arr));//&arr表示的是整个数组的地址--地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(*&arr));//&arr表示的是整个数组的地址，*&arr表示整个数组--16
	//printf("%d\n", sizeof(&arr + 1));//&arr表示的是整个数组的地址，&arr+1表示的是跳过这个数组，但还是地址--4/8
	//printf("%d\n", sizeof(&arr[0]));//arr[0]表示第一个元素，&arr[0]表示第一个元素的地址，地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//arr[0]表示第一个元素，&arr[0]表示第一个元素的地址，&arr[0]+1表示的是第二个元素的地址--4/8
	//printf("\n");

	////字符数组
	//char arr1[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr1));//arr1表示的是整个数组--6
	//printf("%d\n", sizeof(arr1 + 0));//arr1表示的是首元素地址，arr+0还是首元素的地址，地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(*arr1));//arr1表示的是首元素地址，*arr1表示的是首元素--1
	//printf("%d\n", sizeof(arr1[1]));//第二个元素--1
	//printf("%d\n", sizeof(&arr1));//arr1表示的是整个数组，&arr1表示的是整个数组的地址，地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(&arr1 + 1));//&arr1表示的是整个数组的地址，&arr1+1表示的是跳过该数组，但还是地址--4/8
	//printf("%d\n", sizeof(&arr1[0] + 1));//&arr1[0]表示的是首元素的地址，&arr1[0]+1表示的是第二个元素的地址--4/8
	//printf("\n");
	//printf("%d\n", strlen(arr1));//不知何时找到‘\0',所以为随机值  假如为 n
	//printf("%d\n", strlen(arr1 + 0));//不知何时找到‘\0',所以为随机值   n
	////printf("%d\n", strlen(*arr1));//*arr1表示的是首元素字符‘a'(97),strlen()函数的（）里面放的不是地址，程序崩溃
	////printf("%d\n", strlen(arr1[1]));//arr[1]表示的是第二个元素字符'b'(98),strlen()函数的（）里面放的不是地址，程序崩溃
	//printf("%d\n", strlen(&arr1));//&arr1表示的是整个数组的地址，不知何时找到‘\0',所以为随机值 n
	//printf("%d\n", strlen(&arr1 + 1));//&arr1+1表示的是跳过这个数组，也不知何时找到‘\0',所以为随机值 n-6
	//printf("%d\n", strlen(&arr1[0] + 1));//&arr1[0]+1表示的是第二个元素的地址，不知何时找到‘\0',所以为随机值 n-1

	//
	/*char arr[] = "abcdef";*/
	//printf("%d\n", sizeof(arr));//sizeof（数组名），计算的是整个数组的大小，数组名表示的是整个数组--7
	//printf("%d\n", sizeof(arr + 0));//arr代表的是首元素地址，arr+0还是首元素地址，地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(*arr));//*arr表示的是首元素是--1
	//printf("%d\n", sizeof(arr[1]));//arr[1]表示的是第二个元素--1
	//printf("%d\n", sizeof(&arr));//&arr表示的是整个数组的地址，地址的大小就是4/8个字节--4/8
	//printf("%d\n", sizeof(&arr + 1));//&arr+1表示的是跳过该数组的地址，但还是一个地址--4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]+1表示的是第二个元素的地址，地址的大小就是4/8个字节--4/8
	//printf("\n");
	//printf("%d\n", strlen(arr));//arr表示的是首元素地址--6
	//printf("%d\n", strlen(arr + 0));//arr+0表示的还是首元素地址--6
	////printf("%d\n", strlen(*arr));//*arr表示的是首元素a，strlen()函数的（）里面放的不是地址，程序崩溃
	////printf("%d\n", strlen(arr[1]));//arr[1]表示的是第二个元素b，strlen()函数的（）里面放的不是地址，程序崩溃
	//printf("%d\n", strlen(&arr));//&arr表示的是整个数组的地址--6
	//printf("%d\n", strlen(&arr + 1));//&arr+1表示的是跳过该数组的地址--随机值
	//printf("%d\n", strlen(&arr[0] + 1));//&arr[0]+1表示的是第二个元素的地址--5
	//printf("\n");
	
//	char* p = "abcdef";//只有a的地址放在p里面
//	printf("%d\n", sizeof(p));//p表示的是第一个字符地址，地址的大小就是4/8个字节--4/8
//	printf("%d\n", sizeof(p + 1));//p+1表示的是第二个字符的地址，地址的大小就是4/8个字节--4/8
//	printf("%d\n", sizeof(*p));//*p表示的是第一个字符--1
//	printf("%d\n", sizeof(p[0]));//p[0]表示的是第一个字符--1  p[0]==*(p+0)
//	printf("%d\n", sizeof(&p));//&p表示的是存放第一个字符地址的地址，地址的大小就是4/8个字节--4/8
//	printf("%d\n", sizeof(&p + 1));//&p+1表示的是跳过存放第一个字符地址的地址，还是一个地址--4/8
//	printf("%d\n", sizeof(&p[0] + 1));//&p[0]+1表示的是第二个字符的地址，地址的大小就是4/8个字节--4/8
//	printf("\n");
//	printf("%d\n", strlen(p));//p表示的是第一个字符的地址--6
//	printf("%d\n", strlen(p + 1));//p+0表示的还是第一个字符的地址--5
//	//printf("%d\n", strlen(*p));//*p表示的是字符a,strlen()函数的（）里面放的不是地址，程序崩溃
//	//printf("%d\n", strlen(p[0]));//p[0]表示的是字符a，strlen()函数的（）里面放的不是地址，程序崩溃
//	printf("%d\n", strlen(&p));//&p表示的是存放第一个字符的地址的地址--随机值
//	printf("%d\n", strlen(&p + 1));//&p+1表示的是跳过存放第一个字符的地址的地址--随机值
//	printf("%d\n", strlen(&p[0] + 1));//&p[0]+1表示的是第二个字符的地址--5
//	printf("\n");
//
//	return 0;
//}


//二维数组
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[3][4] = { 0 };
	printf("%d\n", sizeof(arr));//sizeof(arr)表示的是计算整个数组的大小--48
	printf("%d\n", sizeof(arr[0][0]));//arr[0][0]表示的是第一行的第一个元素--4
	printf("%d\n", sizeof(arr[0]));//arr[0]表示的是第一行的数组名,单独放在sizeof（）里面，计算的是总大小--16  arr[0]==*(arr+0)
	printf("%d\n", sizeof(arr[0]+1));//arr[0]表示的是第一行第一个元素的地址，arr[0]+1表示的是第一行第二个元素的地址--4/8
	printf("%d\n", sizeof(*(arr[0]+1)));//*(arr[0]+1)表示的是第一行的第二个元素--4
	printf("%d\n", sizeof(arr+1));//arr+1表示的是第二行的地址---4/8
	printf("%d\n", sizeof(*(arr+1)));//*(arr+1)表示的是第二行的数组名解引用，也就是第二行的数组名，数组名单独放在sizeof()里面，计算的是总大小--16 *(arr+1)==arr[1]
	printf("%d\n", sizeof(&arr[0]+1));//&arr[0]表示的是第一行的地址，&arr[0]+1表示的是第二行的地址--4/8
	printf("%d\n", sizeof(*(&arr[0]+1)));//*(&arr[0]+1)表示的是第二行--16
	printf("%d\n", sizeof(*arr));//*arr表示的是第一行--16
	printf("%d\n", sizeof(arr[3]));//arr[3]表示的是第四行，但sizeof()不会真的进去访问，只会根据类型计算，结果不会报错--16
	return 0;
}

//总结：
//数组名的意义：
//1.sizeof（数组名）：这里的数组名表示整个数组，计算的是整个数组的大小
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//3.除此之外所有的数组名都表示首元素的地址