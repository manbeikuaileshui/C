// memcpy���ڴ濽��
// void* memcpy(void* destrination, const void* soure, size_t num)
// 1.����memcpy��sourre��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��
// 2.���������������\0����ʱ�򲢲���ͣ����
// 3.���sourre��destination���κε��ص������ƵĽ������δ�����
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
//	my_memcpy(arr2, arr1, 3*(sizeof(arr1[0])));  //�����ص�����
//	int len1 = sizeof(arr2) / sizeof(arr2[0]);
//	for (i = 0; i < len1; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	struct s arr3[] = { {"����",20},{"����",30} };
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
//memcpy����������ʵ���ڴ��ص���������C���Թ涨memcpy����ֻҪ�����ص����ڴ濽���Ϳ�����
//memmove�������ɴ����ص����ص����ڴ濽��
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