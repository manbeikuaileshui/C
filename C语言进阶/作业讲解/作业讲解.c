#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 1.��������ṹ����ռ�Ŀռ��С��
typedef struct
{
	int a; // 0-3 4���ֽ�
	char b; // 4 1���ֽ�
	// 5
	short c; // 6-7 2���ֽ�
	short d; // 8-9 2���ֽ�
	// 10-11
	// һ��10���ֽ�
	// �ṹ�����������Ϊ4
	// Ҫ���뵽�ṹ�������������������������Ϊ12
}AA_t;
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}


// 2.��32λϵͳ����������ѡ��Ϊ4�ֽڶ��룬��ôsizeof(A)��sizeof(B)�Ƕ��٣�
struct A
{
	int a; // 0-3 4���ֽ�
	short b; // 4-5 2���ֽ�
	// 6-7 2���ֽ�
	int c; // 8-11 4���ֽ�
	char d; // 12 1���ֽ�
	// 13-15
	// һ��13���ֽ�
	// �ṹ�����������Ϊ4
	// Ҫ���뵽�ṹ�������������������������Ϊ16

};
struct B
{
	int a; // 0-3 4���ֽ�
	short b; // 4-5 2���ֽ�
	char c; // 6 1���ֽ�
	// 7 1���ֽ�
	int d; // 8-11 4���ֽ�
	// һ��12���ֽ�
	// �ṹ�����������Ϊ4
	// Ҫ���뵽�ṹ�������������������������Ϊ12
};
//int main()
//{
//	printf("%d %d\n", sizeof(struct A), sizeof(struct B));
//	return 0;
//}


// 3.
#pragma pack(4) //����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013  ���ԣ�C����
int main(int argc, char* argv[])
{
	struct tagTest1
	{
		short a; // 0-1
		char d; // 2
		// 3
		long b; // 4-7
		long c; //8-11
		// һ��12���ֽ�
		// �ṹ�����������Ϊ4
		// Ҫ���뵽�ṹ�������������������������Ϊ12
	};
	struct tagTest2
	{
		long b; // 0-3
		short c; // 4-5
		char d; //6
		// 7
		long a;  //8-11
		// һ��12���ֽ�
		// �ṹ�����������Ϊ4
		// Ҫ���뵽�ṹ�������������������������Ϊ12
	};
	struct tagTest3
	{
		short c; // 0-1
		// 2-3
		long b; // 4-7
		char d; // 8
		// 9-11
		long a; // 12-15
		// һ��16���ֽ�
		// �ṹ�����������Ϊ4
		// Ҫ���뵽�ṹ�������������������������Ϊ16
	};
	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;
	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}
#pragma pack()