//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//��ô����ж������ַ�������ʵ�Ƚϵ����ַ��������ֵ����һ����ͬ�Ƚϵڶ������Դ�����
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
	return (*p1 - *p2);//�Բ�����֮���С�жϵļ�
}
int main()
{
	char* p1 = "abc";
	char* p2 = "abcdef";
	int ret = my_strcmp(p1, p2);
	//int ret = strcmp(p1, p2);
	if (ret > 0)
	{
		printf("��һ���ַ������ڵڶ����ַ���\n");
	}
	else if (ret < 0)
	{
		printf("��һ���ַ���С�ڵڶ����ַ���\n");
	}
	else
	{
		printf("��һ���ַ������ڵڶ����ַ���\n");
	}
	return 0;
}