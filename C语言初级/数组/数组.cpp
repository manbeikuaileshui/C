//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
	//创建一个数组，存放整型，10个
	//int arr[10];

	//int n = 10;//不能这样创建,"[]"里面必须是常量
	//int arr[n];

	//数组初始化
	// int arr0[5]={1,2,3,4,5}//完全初始化
	//int arr[10] = { 1,2,3};//不完全初始化，剩下的元素默认为0
	//char arr1[5] = { 'a', 'b' };//不完全初始化，剩下的元素默认为0
	//char arr2[5] = "ab";//不完全初始化，第三个是\0(也是0，但不是默认的），其它默认为0
	//char arr3[] = "abcdef";//[]里边没给大小，它会根据初始化的元素确定大小（这里为7）
	//printf("%d\n", sizeof(arr3));//计算arr3所占空间大小（7），'\0'也要算进去
	//printf("%d\n", strlen(arr3));//计算字符串长度（6），'\0'结束标志，不算在里面
	//1.strlen和sizeof没有什么关系
	//2.strlen 是求字符串长度的，只能针对字符串求长度，它为库函数，得引用有文件
	//3.sizeof 计算变量、数组、类型的大小，单位是字节，它为操作符

	//char arr1[] = "abc";//a b c \0
	//char arr2[] = { 'a', 'b', 'c' };//a b c
	//printf("%d\n", sizeof(arr1));//4
	//printf("%d\n", sizeof(arr2));//3
	//printf("%d\n", strlen(arr1));//3
	//printf("%d\n", strlen(arr2));//15:结果为随机值，因为没有结束标志'\0'

	//return 0;
//}


//一维数组在内存中的存储
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);//结   论：一维数组在内存中是连续存放的
//	}
//	return 0;
//}


//二维数组
//#include <stdio.h>
//int main()
//{
	//二维数组的创建
	//int arr[3][4];//创建三行四列的数组
	//char ch[5][6];//创建五行六列的数组
	
	//二维数组的初始化
	//int arr[3][4] = { 1,2,3,4,5 };//不完全初始化，按顺序放完后，其它位置默认为0
	//int arr[3][4] = { {1,2,3},4,5 };//不完全初始化，“{}”里边的为第一行，其它从第二行按顺序放完，其余位置默认为0
	//int arr[][4] = { {1,2,3},{4,5,6} };//行可以省略，列不能省略

	//二维数组的使用
	//int arr[3][4] = { {1,2,3},{4,5} };
	////1 2 3 0
	////4 5 0 0 
	////0 0 0 0
	//int i = 0;
	//for (i = 0; 1 < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);//打印数组的所有元素
	//	}
	//	printf("\n");
	//}

	//二维数组在内存中的存储
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++);
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//总结：二维数组在内存中是连续存放的
//		}
//	}
//	
//	return 0;
//}


                                 //数组作为函数参数
//冒泡排序函数的设计
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数：n个元素，n-1趟冒泡排序
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//什么是数组名？   数组名是数组首元素的地址（有两个意外）
//1、sizeof(arr)--arr表示整个数组，sizeof（arr）计算的是整个数组的大小，单位是字节
//2、&arr--arr代表整个数组。&arr,取出的是整个数组的地址
#include <stdio.h>
int main()
{
	int arr[] = { 2,3,4,5,6,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	printf("%p\n", arr + 1);

	printf("%p\n", &arr);//与首元素地址相同，但意义不一样，&arr--取出的是整个元素的地址
	printf("%p\n", &arr + 1);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf(" ");
//		}
//
//	}
	return 0;
}