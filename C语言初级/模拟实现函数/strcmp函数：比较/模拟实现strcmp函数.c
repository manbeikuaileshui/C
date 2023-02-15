//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//那么如何判断两个字符串？其实比较的是字符所代表的值，第一个相同比较第二个，以此类推
#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strcmp( const char* p1, const char* p2)
{
	assert(p1 && p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	/*if (*p1 > *p2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
	return (*p1 - *p2);//对不等于之后大小判断的简化
}
int main()
{
	char* p1 = "abc";
	char* p2 = "abcdef";
	int ret = my_strcmp(p1, p2);
	//int ret = strcmp(p1, p2);
	if (ret > 0)
	{
		printf("第一个字符串大于第二个字符串\n");
	}
	else if (ret < 0)
	{
		printf("第一个字符串小于第二个字符串\n");
	}
	else
	{
		printf("第一个字符串等于第二个字符串\n");
	}
	return 0;
}