//                                           strlen函数
//字符串以'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数（不包含'\0')
//参数指向的字符串必须要以'\0'结束
//注意函数的返回值size_t,是无符号的

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");//字符串后面有一个'\0',遇到之后结束计算，所以为6
//	printf("%d\n", len);
//	char arr[] = { 'a','b','c','d','e','f' };//最后一个字符后面不知道是什么，‘\0’不知道在哪里，输出的为随机值
//	int len1 = strlen(arr);
//	printf("%d\n", len1);
//	return 0;
//}

//模拟实现strlen函数
//1.计数器的方法
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strlen(const char* str)//加上const使内容不能被修改 
////size_t my_strlen(const char* str)//int返回类型为整型，size_t返回类型为无符号的
//{
//	assert(str != NULL);//断言传进来的指针不是空指针，若为空指针程序会具体的报错  #include <assert.h>
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//输出结果为？    hehe
//size_t == unsigned int
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen返回类型是无符号的（unsigned int）
//		// 3 - 6 = -3, -3以补码的形式放入内存中，读取的时候以无符号数拿出使用
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//                                             strcpy函数
//源字符串必须以‘\0’结束
//会将原字符串中的‘\0’拷贝到目标空间中
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可改变
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* ret = str1;
//	while (*str1++ = *str2++);
//	return ret;
//}
//int main()
//{
//	char str1[] = "Hello World";
//	char str2[] = "Hello Bit";
//	//strcpy(str1, str2);
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

//                                               strcat函数
#include <stdio.h>
#include <assert.h>
#include <string.h>
char* my_strcat(char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* str = str1;
	while (*str1)
	{
		str1++;
	}
	while (*str1++ = *str2++);
	return str1;
}
int main()
{
	char str1[20] = "Hello ";
	char str2[] = "World !";
	my_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}