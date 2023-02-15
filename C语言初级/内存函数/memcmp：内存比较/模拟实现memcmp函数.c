// memcmp
// int memcmp(const void* ptr1, const void* ptr2, size_t num)
// �Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
// �������ַ�����ֹͣ�Ƚ�
// ����ֵ��
// < 0	�����ڴ���в�ƥ����ֽ���ptr1 < ptr2��ֵ���������Ϊunsigned charֵ��
// > 0	�����ڴ���в�ƥ����ֽ���ptr1 > ptr2��ֵ���������Ϊunsigned charֵ��
// = 0	�����ڴ����������
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
	//int ret = memcmp(arr1, arr2, 8);  // �����ڴ����������
	//int ret = memcmp(arr1, arr2, 9);  // �����ڴ���в�ƥ����ֽ���ptr1 < ptr2��ֵ
	int ret = my_memcmp(arr1, arr2, 15);
	printf("%d\n", ret);
	return 0;
}