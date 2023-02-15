//                                                strlen函数
//字符串以'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数（不包含'\0')
//参数指向的字符串必须要以'\0'结束
//注意函数的返回值size_t,是无符号的
#include <stdio.h>
#include <assert.h>
//size_t my_strlen(const char* str)//int返回类型为整型，size_t返回类型为无符号的
int my_strlen(const char* str)
{
	//1.计数器的方法
	int count = 0;
	assert(str != NULL);//保证指针的有效性
	while (*str == '\0')
	{
		count++;
		str++;
	}
	return count;
	 
	//2.指针-指针的方法
	assert(str != NULL);
	char* star = str;
	char* end = str;
	while (*end == '\0')
	{
		end++;
	}
	return end - star;

	//3.递归的方法
	assert(str != NULL);
	if (*str == '\0')
	{
		return 0;
	}
	return my_strlen(str + 1) + 1;

}
int main()
{
	char str[] = "abcdef";
	int count = my_strlen(str);
	//int count = strlen(str);
	printf("%d\n", count);
	return 0;
}