// malloc()������
// void* malloc(size_ size)
// ͷ�ļ���#include <stdlib.h>
// ����������ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ��
// 1.������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ��
// 2.�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ�����
// 3.����ֵ��������void*������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ�������
// 4.�������sizeΪ0��malloc����Ϊ��׼��δ����ģ�ȡ���ڱ�����
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	//int* p = (int*)malloc(INT_MAX);//�ڴ治�����ռ俪��ʧ��
	int* p = (int*)malloc(10 * sizeof(int));//���ڴ�����10�����Ϳռ�
	if (p == NULL)
	{
		printf("%s\n",strerror(errno)); //��ӡ���ٿռ�ʧ�ܵ�ԭ��
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
		free(p);
		p = NULL;//�ͷŶ�̬���ٵĿռ�
	}
	return 0;
}*/

// free()������
// void free(void* ptr)
// ͷ�ļ���#include <stdlib.h>
// ��������������ͷŶ�̬���ٵ��ڴ��
// 1.�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���ôfree��������Ϊ��δ�����
// 2.�������ptr��NULLָ�룬����ʲô�¶�����

// calloc()������
// void* calloc(size_t num,size_t size)
// ������̬�ڴ�����
// 1.������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ��
// 2.�������ʧ�ܣ��򷵻�һ��NULLָ�룬���calloc�ķ���ֵһ��Ҫ�����
// 3.�����Ĺ�����Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0
// 4.�뺯��malloc������ֻ����calloc���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);//�ͷŶ�̬���ٵĿռ�
	p = NULL;
	return 0;
}*/

// realloc()������
// void* realloc(void* ptr, size_t size)
// 1.ptr��Ҫ�������ڴ��ַ
// 2.size����֮���´�С
// 3.����ֵΪ����֮����ڴ���ʼλ��
// 4.�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ�
// 5.realloc�ڵ����ڴ�ռ�ʱ�������������
//   <1> ԭ�пռ�֮�����㹻��Ŀռ� ,����p
//   <2> ԭ�пռ�֮��û���㹻��Ŀռ䣬���¿���һ��ռ�,����ԭ���ڴ��е����ݿ����������Զ��ͷžɵ��ڴ�ռ䣬�����¿��ٵĵ�ַ
//   <3> ����һ���µı���������realloc�����ķ���ֵ
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	int* p1 = realloc(p, 10 * sizeof(int));//����p��������Ϊ����ֹ׷��ʧ�ܰ�pԭ���ĵ�ַŪ��
	if (p1 != NULL)
	{
		p = p1;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	ferr(p);
	p = NULL;
	return 0;
}