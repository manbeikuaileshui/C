#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strncmp(const char* str1, const char* str2, size_t k)
{
	assert(str1 && str2);
	//while (--k && *str1++ == *str2++);//Ìæ»»8-12ÐÐ´úÂë
	while(--k && *str1==*str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcwer";
	//int ret = strncmp(p1, p2, 3);
	int ret = my_strncmp(p1, p2, 4);
	if (ret == 0)
	{
		printf("p1=p2\n");
	}
	else if (ret > 0)
	{
		printf("p1>p2\n");
	}
	else
	{
		printf("p1<p2\n");
	}
	return 0;
}