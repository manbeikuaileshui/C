//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//��arr�����ĵ�ַ����ʼ��ӡ�ַ�����ֱ��������\0������
//  printf("%c\n",*pc);
//	printf("%s\n", pc);//��pc�����ĵ�ַ����ʼ��ӡ�ַ�����ֱ��������\0������
//	//��ӡ�����Ķ��ǡ�abcdef��
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ�����ʵ���ǰ�a�ĵ�ַ����p����
//	printf("%c\n", *p);
//	printf("%s\n", p);//��p�����ĵ�ַ����ʼ��ӡ�ַ�����ֱ��������\0������
//	//*p = 'w';//���������޸�
//	//printf("%s\n", p);
//	return 0;
//}

//������Ϊ��
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)//����ͬ�ĳ����ַ���ȥ��ʼ����ͬ�������ʱ��Ὺ�ٳ���ͬ���ڴ�飬���Դ�ӡ����haha
//	{                
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	if (p1 == p2)//������ָ�룬ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ�
//	{            
//		printf("hehe\n");    
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������--ָ������
//	char* pch[5];//����ַ�ָ�������--ָ������
//	return 0;
//}

//ָ��������÷�(���������õ�)
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//���ܻ�������
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//			printf("%d ",*( parr[i] + j));
//			printf("%d ", (*(parr+i))[j]);
//			printf("%d ", *((*(parr+i)) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ��--��ָ��
//#include <stdio.h>
//int main()
//{
//	//int* p = NULL;//p������ָ��--ָ�����͵�ָ��--���Դ�����͵ĵ�ַ
//	//cahr* pc = NULL;//pc���ַ�ָ��--ָ���ַ���ָ��--���Դ���ַ��ĵ�ַ
//	               //����ָ��--ָ�������ָ��--���Դ������ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����ĵ�ַҪ������
//	//arr--��Ԫ�ص�ַ
//	//&arr[0]--��Ԫ�ص�ַ
//	//&arr--��������ĵ�ַ
//	int(*p)[10] = &arr;//p��������ָ��
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* arr[5];
//	pa = &arr;//��ַӦ����δ�ţ����£�
//	//char* (*pa)[5] = &arr;
//	return 0;
//}

//����ָ����÷�(���������õģ�
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//����ĵ�ַ�����þ���������Ҳ������Ԫ�ص�ַ
//		printf("%d ", *(*pa + i));
//	}
	//���������Ӻ��鷳����Ϊ���£�
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
      printf("%d ", p[i]);
	}*/
//	return 0;
//}

//������������
//#include <stdio.h>
// �������������ʽ
//void printf1(int arr[3][5], int a, int b)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
// ������ָ�����ʽ
//void printf2(int(*p)[5], int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//�Ѷ�ά���������һά���飬��һ��Ϊ��һ��Ԫ�أ��Դ�����
//	//printf1(arr, 3, 5);//arr--������--��Ԫ�ص�ַ--Ҳ���ǵ�һ��Ԫ�صĵ�ַ
//	printf2(arr, 3, 5);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//int arr[5];//arr��һ��5��Ԫ�ص���������
//int* arr1[10];//arr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��arr1��ָ������
//int(*arr2)[10];//arr2��һ��ָ�룬��ָ��ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��arr2������ָ��
//int(*arr3[10])[5];//arr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�
//                    ÿ��Ԫ�ص�������int

//#include <stdio.h>
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p1 = "abcdef";//p1����ŵ�ʵ����a�ĵ�ַ���ҵ�a�ĵ�ַ��Ҳ�����ҵ�a���ڵ��ַ���
//	//ָ������--����--���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��--ָ������
//	//int* p1;//����ָ��--ָ�����ε�ָ��
//	//char* p2;//�ַ�ָ��--ָ���ַ���
//	int arr2[5];//����
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
//	return 0;
//}

//һά���鴫��
//#include <stdio.h>
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* p)
//{}
//void test2(int* arr2[20])
//{}
//void test2(int* arr2[])
//{}
//void test2(int** arr2)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };//ָ������
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//
////��ά���鴫��(�����ָ����գ���Ҫ������ָ�����)
//#include <stdio.h>
//void test(int arr[3][5])
//{}
//void test(int arr[][5])//����ʡ���У�����ʡ����
//{}
////void test(int arr[][])//�������β�����
////{}
////void test(int* arr)//�������β�����
////{}
//// void test(int* arr[5])//�������β�����
////{}
////void test(int **arr)//�������β�����
////{}
//void test(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//һ��ָ�봫��
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//void test(int* p)//���ղ����������Ѷ�
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test();//���������ܷ�ʲô������
//	//���Էţ�&a��p�� 
//	return 0;
//}

//����ָ�봫��
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//#include <stdio.h>
//void test(int** prt)//���ղ����������Ѷ�
//{}
//int main()
//{
//	int n = 10;
//	int* prt = &n;
//	int** ppt = &prt;
//	int* arr[10] = { 0 };//ָ������
//	test();//���������ܷ�ʲô������
//	//���Էţ�&prt��ppt��arr��
//	return 0;
//}

//����ָ��--ָ�������ָ��
//����ָ��--ָ������ָ��--��ź�����ַ��һ��ָ��
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int sum = Add(a, b);
//	//printf("sum=%d\n", sum);
//	//printf("%p\n", Add);//��ӡ���Ǻ����ĵ�ַ
//	//printf("%p\n", &Add);//��ӡ���Ǻ����ĵ�ַ
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	int(*p)(int, int) = Add;
//	//int(*p)(int x, int y) = Add;
//	int ret = (*p)(10, 20);
//  int ret = p(10, 20);//*����ʡ�� 
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#include <stdio.h>//��δ溯���ĵ�ַ��
//void print(char* str)//���ȵ���һ��ָ�루*p��
//{                    //Ȼ��ָ��ָ�������������� ��*p����char*��
//	printf("%s\n", str);//������ķ�������  void ��*p����char*��
//}                      //���ʹ�ã�
//int main()             //д������ ��*p��
//{                      //д�����  ��*p����"hello world"��
//	void(*p)(char*) = print;
//	(*p)("hello world");
//	return 0;
//}

//��������ʾʲô��˼��
//����1
//(*(void(*)())0)();//void(*)()������һ������ָ������
             //��0ǿ������ת���ɣ�void(*)()����ָ������--0����һ�������ĵ�ַ,Ȼ��������ҵ��ú����������ã��ú������޲����ĺ��������ҷ�������Ϊvoid
//����2
//void (*signal(int,void(*)(int)))(int)
//��һ����������
//signal��һ������������һ������������(int)���ڶ��������Ǻ���ָ��(void(*)(int))���ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ���������һ������ָ��(void(*)(int))���ú���ָ��ָ��ĺ����Ĳ�����int������������void
//�򻯴���2
//������typedef unsigned int uint;//��unsigned����Ϊuint
//����ʾ����typedef void(*)(int) int pfun_t;//��void(*)(int)����Ϊpfun_t  �������Ǵ��
//��Ϊ��
//typedef void(*pfun_t)(int);//����ǶԵ�
//pfun_t signal(int, pfun_t);
