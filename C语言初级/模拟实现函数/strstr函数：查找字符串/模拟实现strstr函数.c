//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* str1 = NULL;
//	char* str2 = NULL;
//	char* cmp = (char*)p1;
//	if(*p2 == '\0')//���p2����Ϊ���ַ������򷵻�p1�ĵ�ַ
//  //if(!*str2)
//	{
//		return (char*)p1;
//	}
//	while (*cmp)
//	{
//		str1 = cmp;
//		str2 = (char*)p2;
//		while (*str1 && *str2 && (*str1 == *str2))
//      //while (*str1 && *str2 && !(*str1 - *str2))
//		{
//			str1++;
//			str2++;
//		}
//		if (*str2 == '\0')
//	  //if (!*str2)
//		{
//			return cmp;
//		}
//		else if (!*str1)
//		{
//			return NULL;
//		}
//		cmp++;
//	}
//}
//int main()
//{
//	char* p1 = "def";
//	char* p2 = "defg";
//	//char* ret = strstr(p1, p2);
//	char* ret = my_strstr(p1, p2);//�������ַ����Ƿ���ڣ��ҵ��ˣ����ص�һ���ַ���ͬ�ĵ�ַ���Ҳ��������ؿ�ָ��
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//KMP�㷨
#include <stdio.h>
#include <assert.h>
#include <string.h>
int KMP(char* str, int slen, char* ptr, int plen)
{
	int* next = (int*)malloc(sizeof(int)*(plen));

}
int main()
{
	char* str = "aabcadeffababcaceaabdf";
	char* ptr = "abc";
	int len1 = strlen(str);
	int len2 = strlen(ptr);
	int a = KMP(str, len1, ptr, len2);
	if (a == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}