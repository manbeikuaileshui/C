//                                          �ṹ��
// �ṹ��һЩֵ�ü��ϣ���Щֵ��Ϊ��Ա�������ṹ���ÿ����Ա�����ǲ�ͬ���͵ı���
// �ṹ������
// struct tag            // struct���ṹ��ؼ��֣����ܶ���     tag���ṹ���ǩ����㶨��
// {
// 	  member - list;    //  member - list��{}����Ľ���������Ա�б�      
// }variable - list;    //  variable - list��{}����Ľ������������б�       �����;����ʡ��
// ��������һ���ṹ�����ͣ�����һ��ѧ��
// ����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
// ����ѧ�������ԣ����֡��绰���Ա�����
//struct Stu          
//{
//	char name[20];  //  ����
//	char tele[12];  //  �绰
//	char sex[10];   //  �Ա�  
//	int age;
//}s4,s5,s6;  //s4,s5,s6��������������ʹ����Ľṹ���������ȫ�ֱ�����
//struct Stu s3;  //��ȫ�ֱ�����
//int main()
//{
////  �����ṹ��������ֲ�������
//	struct Stu s1;     //struct Stu ʵ�ʾ���һ����������  �磺int��char��
//	struct Stu s2;
//	return 0;
//}
//
////  �����ṹ�����ͣ�ʵ�ʾ��ǲ����ýṹ���ǩ����������������ʱ��ֻ���ڴ����ź��洴��
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}* psa;  //������˸�ָ�룬����������ṹ��ָ������
//int main()
//{
//	psa = &x;  // �ṹ��ָ��ֻ�ܴ����ͬ�ṹ�Ľṹ��ĵ�ַ
//	return 0;  // ���������ṹ��������Ȼ��Ա��ͬ����������������ǵ�����ȫ����ͬ����������
//}
//
//// �ṹ�������ã�
//// �ڽṹ�а���һ������Ϊ�ýṹ�屾��ĳ�Ա�Ƿ���ԣ�
//// ����
//struct Node
//{
//	int data;
//	struct Node next;
//};
//int main()
//{
//	sizeof(struct Node);  //��ôsizeof(struct Node)����Ƕ��٣�
//	return 0;             //������������д����
//}                         //�ṹ����԰����������͵ı����������ܰ����Լ��������͵ı���
//// ��ȷ�������÷�ʽ
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//// ����д���룬���з�
//typedef struct  // typedef��������������
//{
//	int data;
//	Node* next;  //��������ʹ�ã���û����Node,��ʹ����Node
//}Node;
//// �������
//typedef struct Node  // ʹ��typedef��������������ԭ������������struct Node s1;    ��������Node s1;
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1; //���ַ�ʽ�����Դ�������
//	Node n2;
//}

//  �ṹ������ĳ�ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	struct T st;  //�ṹ����������ṹ��
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//#include <stdio.h>
//int main()
//{
//	struct S s = { {55.6, 30},'c',100,3.14,"hello world" };  // �ṹ���ʼ��
//	printf("%c %d %lf %s %lf %d\n", s.c, s.a, s.d, s.arr, s.st.weight, s.st.age);
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//  �ṹ���ڴ���룺���ṹ���С�������
//  1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//  2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//    ������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//    VS��Ĭ�ϵ�ֵΪ8
//  3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
//  4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
//    �ṹ��������С��������������������Ƕ�׽ṹ��Ķ���������������
/*struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
#include <stdio.h>
int main()
{
	struct S1 s1 = { 0 }; // ��һ��������ʼ��Ϊ�㣬����Ĭ�ϳ�ʼ��Ϊ��
	printf("%d\n", sizeof(s1));// ?  12
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));// ?  8
	return 0;
}*/

// ����ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ䣬���������
// ��ռ�ÿռ�С�ĳ�Ա����������һ��

// Ϊʲô�����ڴ���룿
// 1.ƽ̨ԭ����ֲԭ�򣩣��������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�
//   ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵ĵ�����,�����׳�Ӳ���쳣
// 2.����ԭ�����ݽṹ��������ջ��Ӧ�þ����ܵ�����Ȼ�߽��϶��롣
//   ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η���
// ������˵���ṹ����ڴ�������ÿռ�����ȡʱ�������

// �޸�Ĭ�϶�����
/*#include <stdio.h>
#pragma pack(4)  //  �޸�Ĭ�϶�����Ϊ4
struct S
{
	char c1;
	double d;
};
#pragma pack()  //  ȡ���޸ĵ�Ĭ�϶�����
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}*/

// offsetof(structName, memberName)������ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
// ��һ���������ṹ��������  �ڶ����������ṹ�����͵ĳ�Ա��
// ����ֵ��ƫ����
// ͷ�ļ���#include <stddef.h>
/*struct S
{
	char c;
	int i;
	double d;
};
#include <stdio.h>
#include <stddef.h>
int main()
{
	printf("%d\n", offsetof(struct S, c)); //  0
	printf("%d\n", offsetof(struct S, i)); //  4
	printf("%d\n", offsetof(struct S, d)); //  8
	return 0;
}*/

// �ṹ�崫��
//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init1(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//void Init2(struct S* tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'w';
//	tmp->d = 3.14;
//}
//void print1(struct S ps)
//{
//	printf("��ֵ��%d %c %lf\n", ps.a, ps.c, ps.d);
//}
//void print2( const struct S* pa) //ֻ��Ҫ��ӡ����Ҫ�޸����ݼ���const
//{
//	printf("��ֵ��%d %c %lf\n", pa->a, pa->c, pa->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	printf("��ֵǰ��%-3d %c %lf\n", s.a, s.c, s.d);
////  Init1(s);  //����Ĵ��η�ʽ
//	Init2(&s);
//	print1(s);
//	print2(&s); //����ʹ�õ�ַ���δ�ӡ����ʡ�ռ�
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pf = fopen("text.txt", "W");
	if (pf = NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	// 1.��λ�ļ�ָ��
	//fseek(pf, 4, SEEK_CUR);
	//// 2.��ȡ�ļ�
	//int ch = fgetc(pf);
	//printf("%c\n", ch);
	//// 3.�ر��ļ�
	//fclose(pf);
	//pf = NULL;
	return 0;
}