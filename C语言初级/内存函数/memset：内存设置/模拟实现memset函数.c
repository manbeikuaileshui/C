// memset����
// void* memset(void* dest, int value, size_t count)
// c�����õ��ַ���ʲô
// count�����ö��ٸ��ֽ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
void* my_memset(void* ptr, int value, size_t count)
{
	assert(ptr);
	void* ret = ptr;
	while (count--)
	{
		*(char*)ptr = (char)value;
		++(char*)ptr;
	}
	return ret;
}
int main()
{
	//int i = 0;
	//char arr[10] = "";
	////memset(arr, '#', 10);
	//my_memset(arr, '#', 10);
	//for (i = 0; i < 10; i++)
	//{
	//	putchar(arr[i]);
	//}

	//�����÷�
	//int i = 0;
	//int arr[10] = { 0 };
	//memset(arr, 1, 10);  //��������Ϊint ��memset�����ĵ�������������Ϊ�ֽڣ�����10��Ԫ�ظ�Ϊ1ʧ��
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	return 0;
}
