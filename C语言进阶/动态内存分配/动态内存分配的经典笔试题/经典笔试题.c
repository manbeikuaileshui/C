#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
// ����1 �������´������ʲô�����
/*void GerMemory(char* p)
{
	p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GerMemory(str);
	strcpy(str, "hello world");
	printf(str);
}
int main()
{
	Test();
	return 0;
}*/
// 1.�������
// ԭ��str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ�ں����ڲ���Ч��
//       ��GetMemory��������֮��str����һ����ָ�룬strcpy�������ܰ��ַ������Ƶ��Կ�ָ��Ϊ��ʼλ�õĵط�
// 
// 2.�ڴ�й©
// ԭ��str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ�ں����ڲ���Ч��
//       ��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������Ի�����ڴ�й©

// �ķ�1
/*void GerMemory(char** p)
{
	*p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GerMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}*/

//����2
/*char* GerMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GerMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}*/


// ����2 �������´������ʲô�����
/*char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}*/
// �Ƿ������ڴ�
// ԭ��p��������Getmemory�������洴���ģ����ھֲ����飬�����ջ����ֻ����Getmemory��������ʹ��


// ����3 �������´������ʲô�����
/*void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	// �����������´���
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}*/
// �ڴ�й©
// ԭ�򣺴����Ķ�̬�ڴ�δ�ͷ�


// ����4 �������´������ʲô�����
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
	//str = NULL;//�������������ȷ
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}
// �Ƿ������ڴ�
// ԭ��free(str),��strָ��Ŀռ��ͷ��ˣ���str����ָ��ԭ����λ�ã�����str��Ϊ��ָ�룬�ּ�������strָ��Ŀռ䣬���γ��˷Ƿ������ڴ���



// C/C++�����ڴ����ļ�������
// 1.ջ����stack������ִ�к���ʱ�������ھֲ������Ĵ洢��Ԫ��������ջ�ϴ���������ִ�н���ʱ��Щ�洢��Ԫ�Զ����ͷš�
//   ջ�ڴ�������������ڴ�������ָ��У�Ч�ʺܸߣ����Ƿ�����ڴ��������ޡ�
//   ջ��Ҫ������к���������ľֲ������������������������ݡ����ص�ַ��
// 2.������heap����һ���ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ������OS���ա����䷽ʽ����������
// 3.���ݶΣ���̬������static�������ȫ�ֱ�������̬���ݡ������������ϵͳ�ͷš�
// 4.����Σ���ź����壨���Ա������ȫ�ֺ������Ķ����ƴ��롣