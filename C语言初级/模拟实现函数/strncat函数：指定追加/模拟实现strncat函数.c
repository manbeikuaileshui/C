//׷��n���ַ���ԭ�ַ�����Ŀ��ռ�
//���ԭ�ַ�������С�ڻ����n����׷����ԭ�ַ���֮����Ŀ��ĺ��׷��'\0'����Ȼԭ�ַ�������׷�ӣ���׷�Ӷ����Ƕ���
//���ԭ�ַ������ȴ���n����׷����n���ַ�֮����Ŀ��ĺ��׷��'\0'��ԭ�ַ���ʣ���Ԫ�ز��ù�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strncat(char* arr1, const char* arr2, size_t k)
{
	assert(arr1 && arr2);
	char* ret = arr1;
	while (*arr1)
	{
		arr1++;
	}

	while (k--)
	{
		if (!(*arr1++ = *arr2++))
		{
			return ret;
		}
	}
	*arr1 = '\0';

	//while ( k && (*arr1++ = *arr2++))//��׷�ӣ�׷����֮��,���涼Ҫ��'\0'
	//{                                //����׷�ӣ�׷����Դ�ַ���֮����Ȼ��������Ҳ�����������'\0'
	//	k--;
	//}
	//if (k == 0)
	//{
	//	*arr1 = '\0';//���滻17-24�д���
	//}

	return ret;
}
int main()
{
	char arr1[30] = "hello\0xxxxxxx";
	char arr2[] = " world";
	//strncat(arr1, arr2, 6);
	my_strncat(arr1, arr2, 6);
	printf("%s\n", arr1);
	return 0;
}