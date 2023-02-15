// memcpy：内存拷贝
// void* memcpy(void* destrination, const void* soure, size_t num)
// 1.函数memcpy从sourre的位置开始向后复制num个字节的数据到destination的内存位置
// 2.这个函数在遇到‘\0’的时候并不会停下来
// 3.如果sourre和destination有任何的重叠，复制的结果都是未定义的
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//struct s
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, 3*(sizeof(arr1[0])));  //不能重叠拷贝
//	int len1 = sizeof(arr2) / sizeof(arr2[0]);
//	for (i = 0; i < len1; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	struct s arr3[] = { {"张三",20},{"李四",30} };
//	struct s arr4[2] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	int len2 = sizeof(arr4) / sizeof(arr4[0]);
//	for (i = 0; i < len2; i++)
//	{
//		printf("%s %d\n", arr4[i].name, arr4[i].age);
//	}
//
//	return 0;
//}


#include<stdio.h>
//memcpy函数：可以实现内存重叠拷贝，但C语言规定memcpy函数只要处理不重叠的内存拷贝就可以了
//memmove函数：可处理不重叠和重叠的内存拷贝
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	memcpy(arr + 2,arr,20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}