#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����һ��ѧ��--һЩ����
//����
//����
//�绰
//�Ա�
//struct--�ṹ��ؼ���   stu--�ṹ���ǩ    struct stu-- �ṹ������

//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3;//s1,s2,s3������ȫ�ֵĽṹ�����
//int main()
//{
//	struct stu s;//s�Ǿֲ�����
//	return 0;
//}

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stuΪ����
//int main()
//{
//	stu s;
//	return 0;
//}
//����typedef ֱ��stu s�� û��struct stu s

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu s1)//��ʵ����.
//{
//	printf("name: %s\n", s1.name);
//	printf("age: %d\n", s1.age);
//	printf("tele: %s\n", s1.tele);
//	printf("sex: %s\n", s1.sex);
//}
//void print2(stu* s1)//����ַ��->
//{
//	printf("name: %s\n", s1->name);
//	printf("age: %d\n", s1->age);
//	printf("tele: %s\n", s1->tele);
//	printf("sex: %s\n", s1->sex);
//}
//int main()
//{
//	stu s1 = { "����",20,"12345678910","��" };//��ʼ��s1
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.tele);
//	printf("%s\n", s1.sex);*/
//	print1(s1);//ʵ�δ����βΣ��൱���βζ�ʵ�ε�һ����ʱ�������˷ѿռ���ʱ��
//	print2(&s1);//����ȥ���ǵ�ַ��ֻռ4/8���ֽڣ���������ȽϺ�
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };//Ƕ�׽ṹ���ʼ��
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	printf("%d\n", t.s.a);
//	printf("%c\n", t.s.c);
//
//	return 0;
//}

                    //                             |����������������������������������|
//ѹջ             //                              |  |����������������������������|  |
int Add(int x, int y)                         //   |ջ| ջ�����ٿռ䣺�ֲ�����     |  |
{                                            //    |��|         ��������ʽ����     |  |
	int z = 0;                              //     |  |         ��������           |  |     ջ���Ƚ����������ȳ�
	z = x + y;                                //   |  |����������������������������|  |   ѹջ������һ��Ԫ��
	return z;                       //             |                                  |   ��ջ��ɾ��һ��Ԫ��
}                     //                           |  |����������������������������|  |   �������·�
int main()                      //                 |��| �������ٿռ䣺��̬�ڴ���� |  |   ��Ҫɾ��1��������ɾ��2��3
{                   //                             |��|          malloc/free       |  |    
	int a = 10;             //                     |  |          realloc/calloc    |  |    
	int b = 20;          //                        |  |����������������������������|  |    |��������������������|��>ջ��/�ߵ�ַ
	int ret = 0;                   //              |                                  |    |          3         |
	ret = Add(a, b);               //              |  |����������������������������|  |    |��������������������|
	return 0;                      //              |��| ��̬�����ٿռ䣺ȫ�ֱ���   |  |    |          2         |
}                                   //             |̬|                 ��̬����   |  |    |��������������������|
                                       //          |��|����������������������������|  |    |          1         |
                                           //      |����������������������������������|    |��������������������|��>�͵�ַ
                                                                   //             ջ����Ĭ��ʹ�ã�
                                                                       //                      ��ʹ�øߵ�ַ�Ŀռ�
                                                                 //                            ��ʹ�õ͵�ַ�Ŀռ�