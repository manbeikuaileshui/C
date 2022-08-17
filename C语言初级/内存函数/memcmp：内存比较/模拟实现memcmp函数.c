// memcmp
// int memcmp(const void* ptr1, const void* ptr2, size_t num)
// 比较从ptr1和ptr2指针开始的num个字节
// 遇到空字符不会停止比较
// 返回值：
// < 0	两个内存块中不匹配的字节中ptr1 < ptr2的值（如果评估为unsigned char值）
// > 0	两个内存块中不匹配的字节中ptr1 > ptr2的值（如果评估为unsigned char值）
// = 0	两个内存块的内容相等
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_memcmp(const void* ptr1, const void* ptr2, size_t count)
{
	assert(ptr1 && ptr2);
	while (count--)
	{
		if (*(char*)ptr1 == *(char*)ptr2)
		{
			++(char*)ptr1;
			++(char*)ptr2;
		}
		else
		{
			return *(char*)ptr1 - *(char*)ptr2;
		}
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,4,3 };
	//int ret = memcmp(arr1, arr2, 8);  // 两个内存块的内容相等
	//int ret = memcmp(arr1, arr2, 9);  // 两个内存块中不匹配的字节中ptr1 < ptr2的值
	int ret = my_memcmp(arr1, arr2, 15);
	printf("%d\n", ret);
	return 0;
}