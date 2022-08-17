//追加n个字符从原字符串到目标空间
//如果原字符串长度小于或等于n，则追加完原字符串之后，在目标的后边追加'\0'，虽然原字符串不够追加，但追加多少是多少
//如果原字符串长度大于n，则追加完n个字符之后，在目标的后边追加'\0'，原字符串剩余的元素不用管
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

	//while ( k && (*arr1++ = *arr2++))//够追加，追加完之后,后面都要放'\0'
	//{                                //不够追加，追加完源字符串之后，虽然不够，但也结束，后面放'\0'
	//	k--;
	//}
	//if (k == 0)
	//{
	//	*arr1 = '\0';//可替换17-24行代码
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