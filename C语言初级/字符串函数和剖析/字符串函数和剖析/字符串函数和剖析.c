//                                           strlen����
//�ַ�����'\0'��Ϊ������־��strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�������������'\0')
//����ָ����ַ�������Ҫ��'\0'����
//ע�⺯���ķ���ֵsize_t,���޷��ŵ�

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");//�ַ���������һ��'\0',����֮��������㣬����Ϊ6
//	printf("%d\n", len);
//	char arr[] = { 'a','b','c','d','e','f' };//���һ���ַ����治֪����ʲô����\0����֪������������Ϊ���ֵ
//	int len1 = strlen(arr);
//	printf("%d\n", len1);
//	return 0;
//}

//ģ��ʵ��strlen����
//1.�������ķ���
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strlen(const char* str)//����constʹ���ݲ��ܱ��޸� 
////size_t my_strlen(const char* str)//int��������Ϊ���ͣ�size_t��������Ϊ�޷��ŵ�
//{
//	assert(str != NULL);//���Դ�������ָ�벻�ǿ�ָ�룬��Ϊ��ָ���������ı���  #include <assert.h>
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

//������Ϊ��    hehe
//size_t == unsigned int
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen�����������޷��ŵģ�unsigned int��
//		// 3 - 6 = -3, -3�Բ������ʽ�����ڴ��У���ȡ��ʱ�����޷������ó�ʹ��
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//                                             strcpy����
//Դ�ַ��������ԡ�\0������
//�Ὣԭ�ַ����еġ�\0��������Ŀ��ռ���
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɸı�
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

//                                               strcat����
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