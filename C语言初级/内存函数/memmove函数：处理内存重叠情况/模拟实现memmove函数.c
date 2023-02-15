//memcpy����������ʵ���ڴ��ص���������C���Թ涨memcpy����ֻҪ�����ص����ڴ濽���Ϳ�����
//memmove�������ɴ����ص����ص����ڴ濽��
#include<stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	//����1
	//if ((char*)dest > (char*)src)  //�Ӻ���ǰ��
	//{
	//	while (num--)
	//	{
	//		*((char*)dest + num) = *((char*)src + num);
	//	}
	//}
	//else  //��ǰ����
	//{
	//	while (num--)
	//	{
	//		*(char*)dest = *(char*)src;
	//		++(char*)dest;
	//		++(char*)src;
	//    }
	//}

	//����2
	if (dest < src || dest >(char*)src + num)  //��ǰ����
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else  //�Ӻ���ǰ��
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
