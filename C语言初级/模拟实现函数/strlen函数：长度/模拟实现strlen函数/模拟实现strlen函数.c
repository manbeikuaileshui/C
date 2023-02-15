//                                                strlen����
//�ַ�����'\0'��Ϊ������־��strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�������������'\0')
//����ָ����ַ�������Ҫ��'\0'����
//ע�⺯���ķ���ֵsize_t,���޷��ŵ�
#include <stdio.h>
#include <assert.h>
//size_t my_strlen(const char* str)//int��������Ϊ���ͣ�size_t��������Ϊ�޷��ŵ�
int my_strlen(const char* str)
{
	//1.�������ķ���
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str == '\0')
	{
		count++;
		str++;
	}
	return count;
	 
	//2.ָ��-ָ��ķ���
	assert(str != NULL);
	char* star = str;
	char* end = str;
	while (*end == '\0')
	{
		end++;
	}
	return end - star;

	//3.�ݹ�ķ���
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