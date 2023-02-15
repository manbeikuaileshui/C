// 函数          如果它的参数符合下列条件就返回真
// iscntrl       任何控制字符
// isspace       空白字符：空格''、换页'\f'、换行'\n'、回车'\r'、制表符'/t'或者垂直制表符'\v'
// isdigit       十进制数字0-9
// isxdigit      十六进制数字。包括所有十进制数字，小写字母a-f，大写字母A-F
// islower       小写字母a-z
// isupper       大写字母A-Z
// isalnum       字母或者数字，a-z,A-Z,0-9
// ispunct       标点符号，任何不属于数字或者字母的图形字符（可打印）
// isgraph       任何图形字符
// isprint       任何可打印字符，包括图形字符和空白字符
//全部都要引用头文件#include <ctype.h>
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	//例：判断ch的值是大写还是小写字母
//	char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//
//}

// int tolower(int c)        大写转小写
// int toupper(int c)        小写转大写 
//()里面是什么类型返回的值就是什么类型
//都要引用头文件#include <ctype.h>
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char ch = tolower('Q');
//	//char ch = toupper('q');
//	putchar(ch);
//	return 0;
//}

//将“I Am A Student”全部改写成小写字母
#include <stdio.h>
#include <ctype.h>
int main()
{
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}
