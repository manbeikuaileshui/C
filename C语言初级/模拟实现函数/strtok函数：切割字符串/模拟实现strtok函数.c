// strtok����
// char* strtok(char* str, const char* sep)
// 1.sep�����Ǹ��ַ����������������ָ������ַ�����
// 2.��һ������ָ��һ���ַ�������������0��������sep�ַ�����һ�������ָ����ָ�ı��
// 3.strtok�����ҵ�str�е���һ����ǣ���������\0��β������һ��ָ����������ǵ�ָ�루ע��strtok������ı䱻�������ַ�����
//   ������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ģ�
// 4.strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
// 5.strtok�����ĵ�һ��NULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
// 6.����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
int main()
{
	//�÷�1
	//char arr[] = "201371988@qq.com";
	//char* p = "@.";
	//char buf[1024] = { 0 };
	//strcpy(buf, arr);//����һ��Դ�ַ���
	////whileѭ��ʵ��
	///*char* ret = strtok(arr, p);
	//while (ret != NULL)
	//{
	//	printf("%s\n", ret);
	//	ret = strtok(NULL, p);
	//}*/
	////forѭ��ʵ��
	//char* ret = NULL;
	//for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	//{
	//	printf("%s\n", ret);
	//}

	//�÷�2
	char arr[] = "201371988@qq.com";
	char buf[1024] = { 0 };
	strcpy(buf, arr);//����һ��Դ�ַ���
	//whileѭ��ʵ��
	char* ret = strtok(arr,"@.");
	while (ret != NULL)
	{
		printf("%s\n", ret);
		ret = strtok(NULL, "@.");
	}
	//forѭ��ʵ��
	/*char* ret = NULL;
	for (ret = strtok(arr, "@."); ret != NULL; ret = strtok(NULL, "@."))
	{
		printf("%s\n", ret);
	}*/
	return 0;
}
