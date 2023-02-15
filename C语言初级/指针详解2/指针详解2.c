//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////函数指针数组（把函数的地址存到一个数组中)
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//int* arr[5];//指针数组
//	//int(*pa)(int, int) = Add;//只能存一个地址
//	//需要一个数组，这个数组可以存放4个函数的地址--函数指针数组
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",pa[i](2, 3));
//		printf("%d\n", (*(pa + i))(2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//#include <stdio.h>
//int main()
//{
//	char* (*pf)(char*, const char*);//函数指针
//	char* (*pfArr[4])(char*, const char*);//函数指针数组
//	return 0;
//}

//函数指针数组的用法案列
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Calc(int (*arr)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个操作数");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", arr(a, b));
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**  0.exit   1.add  **\n");
//	printf("**  2.sub    3.mul  **\n");
//	printf("**  4.div    5.xor  **\n");
//	printf("**********************\n");
//}
//int main()
//{
////用switch case 语句解决
//	int n = 0;
//	//int a = 0;
//	//int b = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &n);
//		/*if (n >= 1 && n <= 5)
//		{
//			printf("请输入两个操作数");
//			scanf("%d%d", &a, &b);
//		}*/
//		switch (n)
//		{
//		case 0:
//			printf("退出程序\n");
//			break;
//		case 1:
//			//printf("%d\n",Add(a, b));
//			Calc(Add);
//			break;
//		case 2:
//			//printf("%d\n",Sub(a, b));
//			Calc(Sub);
//			break;
//		case 3:
//			//printf("%d\n",Mul(a, b));
//			Calc(Mul);
//			break;
//		case 4:
//			//printf("%d\n",Div(a, b));
//			Calc(Div);
//			break;
//		case 5:
//			//printf("%d\n", Xor(a, b));
//			Calc(Xor);
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (n);

//用函数指针数组解决
	//int n = 0;
	//int a = 0;
	//int b = 0;
	//int(*arr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//arr是一个函数指针数组--叫做转移表
	//do
	//{
	//	menu();
	//	printf("请选择：>");
	//	scanf("%d", &n);
	//	if (n >= 1 && n <= 5)
	//	{
	//		printf("请输入两个操作数");
	//		scanf("%d%d", &a, &b);
	//		printf("%d\n", arr[n](a, b));
	//	}
	//	else if (n == 0)
	//	{
	//		printf("退出程序\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("输入错误，请重新输入\n");
	//	}
	//} while (n);
//	return 0;
//}

//指向函数指针数组的指针：是一个指针，指针指向一个数组，数组的元素都是函数指针
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址--数组指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组--函数指针数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个指向函数指针数组的指针，是一个数组指针，指针指向的数组有4个元素，
//	return 0;                             //每个元素类型为函数指针:int(*)(int, int)
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int* arr[10];//指针数组
//	
//	//int* (*pa)[10] = &arr;//数组指针
//
//	//int (*pAdd)(int, int) = Add;//&Add,函数指针
//	////int sum = (*pAdd)(1, 2);
//	////int sum = pAdd(1, 2);
//	//int sum = Add(1, 2);
//	//printf("sum=%d\n", sum);
//
//	//int (*pArr[5])(int, int);//函数指针的数组
//
//	int (*pArr[5])(int, int);
//	int (*(*ppArr)[5])(int, int) = &pArr;//指向函数指针数组的指针
//
//	return 0;
//}


//回调函数
//#include <stdio.h>
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//冒泡排序（升序排序）
//#include <stdio.h>
//void BubbleSort(int arr[], int sz)
//{
////while循环解决
//	//int n = 0;
//	//while (sz - 1)//要sz-1趟冒泡循环，即九趟冒泡循环
//	//{
//	//	for (n = 0; n < sz - 1; n++)
//	//	{
//	//		if (arr[n] > arr[n + 1])//|
//	//		{                       //|
//	//			int ret = arr[n];   //|
//	//			arr[n] = arr[n + 1];//|---->  一趟冒泡排序
//	//			arr[n + 1] = ret;   //|
//	//		}                       //|
//	//	}
//	//	sz--;
//	//}

////for循环解决
//	int i = 0;
//	for (i = 1; i < sz; i++)//要sz-1趟冒泡循环，即九趟冒泡循环
//	{
//		int j = 0;
//		for (j = 0; j < sz - i; j++)//|
//		{                           //|
//			if (arr[j] > arr[j + 1])//|
//			{                       //|
//				int tmp = arr[j];   //|---->  一趟冒泡循环
//				arr[j] = arr[j + 1];//|
//				arr[j + 1] = tmp;   //|
//			}                       //|
//		}
//	}
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//冒泡排序
//	//冒泡排序函数只能排序整形数组
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
	//BubbleSort(arr, sz);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

//	//float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };//按升序排序，上面的函数搞不定
//	//int i = 0;
//	//int sz = sizeof(f) / sizeof(f[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%lf ", f[i]);
//	//}
//	//printf("\n");
//	//BubbleSort(f, sz);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", f[i]);
//	//}

//	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };//也搞不定
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name：%-8s  age：%d\n", s[i].name,s[i].age);
//	}
//	return 0;
//}

//qsort--库函数--可以排序各种类型的数据
//void qsort(void* base, size_t num, size_t width, int(*compare)(const void* e1, const void* e2));//四个参数
//1.目标数组的起始位置，即数组名 f
//2.数组的大小，单位是元素。即有几个元素 sz = sizeof(f) / sizeof(f[0])
//3.宽度，即元素的大小，单位是字节 sizeof(f[0])或者sizeof(float)
//4.比较函数，即比较两个数大小的函数名 cmp_int  自己实现
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int cmp_int(const void* e1, const void* e2)//这个函数是用来比较两个整型元素的
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()//排序整型数组的元素
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//引用头文件#include <stdlib.h>
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n\n");
//}
//
//
//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//	return 0;// e1指向的元素等价于e2指向的元素
//	//else if (*(float*)e1 > *(float*)e2)
//	//	return 1;// e1指向的元素在e2指向的元素之后
//	//else
//	//	return -1;// e1指向的元素在e2指向的元素之前
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//test2()
//{
//	float f[] = { 9.0, 8.0, 7.0,3.0, 6.0, 5.0, 4.0 };
//	int i = 0;
//	int sz = sizeof(f) / sizeof(f[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n");
//	qsort(f, sz, sizeof(f[0]),cmp_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n\n");
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)//按年龄排序
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name：%-8s  age：%d\n", s[i].name, s[i].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	for (i = 0; i < sz; i++)
//	{
//		printf("name：%-8s  age：%d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)//按名字排序
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp函数进行比较
//	//return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;//错误
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name：%-8s  age：%d\n", s[i].name, s[i].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	for (i = 0; i < sz; i++)
//	{
//		printf("name：%-8s  age：%d\n", s[i].name, s[i].age);
//	}
//}
//
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	return 0;
//}

//void* 是无类型的指针，可以接收任意类型的地址，不能进行解引用操作，不能进行+-整数的操作
//#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//char ch = 'w';
//	//int* pa = &a;//没问题
//    //char* pc = &a;//可以这样放，但是会报警告
//	//void* p = &a;//无类型的指针，没问题
//	//int* pa1 = &ch;//可以这样放，但是会报警告
//	//char* pc1 = &ch;//没问题
//	//void* p1 = &ch;//无类型的指针，没问题
//
//	int a = 10;
//	void* p = &a;
//	*p = 0;//修改失败，因为void* 是无类型指针，解引用的时候不知道访问几个字节，void* 类型的指针，不能进行解引用操作
//	p++;//也不行，原因上同
//	return 0;
//}


//使用bubble_sort函数模拟实现qsort函数
#include <stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//实现bubble_sort函数的程序员，不知道未来排序数据的类型
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 1; i < sz; i++)//趟数
	{
		int j = 0;
		for (j = 0; j < sz - i; j++)//每一趟比较的对数
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	//使用bubble_sort函数的程序员一定知道自己排序的是什么数据
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("name：%-8s  age：%d\n", s[i].name, s[i].age);
	}
	printf("\n");
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	for (i = 0; i < sz; i++)
	{
		printf("name：%-8s  age：%d\n", s[i].name, s[i].age);
	}
	printf("\n");
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	for (i = 0; i < sz; i++)
	{
		printf("name：%-8s  age：%d\n", s[i].name, s[i].age);
	}
}
int main()
{
	test1();
	test2();
	return 0;
}