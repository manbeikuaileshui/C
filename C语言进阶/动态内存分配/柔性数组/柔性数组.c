// �������飺C99�У��ṹ���е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա
// ����������ص㣺
// 1.�ṹ���е����������Աǰ�����������һ��������Ա
// 2.sizeof���ص����ֽṹ���С����������������ڴ�
// 3.������������Ľṹ����malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ��Ĵ�С������Ӧ���������Ԥ�ڴ�С

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
/*struct S
{
	int n;
	int arr[]; // δ֪��С��--���������Ա--����Ĵ�С�ǿ��Ե�����
	//int arr[0]; // ���Ҳ��ʾδ֪��С��
};
int main()
{
	//struct S s;
	//printf("%d\n", sizeof(s)); // ������������Ľṹ���У���������Ĵ�С������ṹ����ܴ�С

	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int)); // 5���Լ���Ϊ��������Ĵ�С
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	// �����ڴ治�����ˣ��ٿ��ٿռ�
	struct S* ps1 = realloc(ps, 44);
	if (ps1 != NULL)
	{
		ps = ps1;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}*/

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	// ������С
	int* prt = (int*)realloc(ps->arr, 10 * sizeof(int));
	if (prt != NULL)
	{
		ps->arr = prt;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
}