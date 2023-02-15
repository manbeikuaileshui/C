//memcpy函数：可以实现内存重叠拷贝，但C语言规定memcpy函数只要处理不重叠的内存拷贝就可以了
//memmove函数：可处理不重叠和重叠的内存拷贝
#include<stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	//方法1
	//if ((char*)dest > (char*)src)  //从后向前拷
	//{
	//	while (num--)
	//	{
	//		*((char*)dest + num) = *((char*)src + num);
	//	}
	//}
	//else  //从前往后拷
	//{
	//	while (num--)
	//	{
	//		*(char*)dest = *(char*)src;
	//		++(char*)dest;
	//		++(char*)src;
	//    }
	//}

	//方法2
	if (dest < src || dest >(char*)src + num)  //从前往后拷
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else  //从后往前拷
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//memmove(arr + 2, arr, 20);
	my_memmove(arr, arr + 2, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
