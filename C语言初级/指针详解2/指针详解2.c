//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////����ָ�����飨�Ѻ����ĵ�ַ�浽һ��������)
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//int* arr[5];//ָ������
//	//int(*pa)(int, int) = Add;//ֻ�ܴ�һ����ַ
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ--����ָ������
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",pa[i](2, 3));
//		printf("%d\n", (*(pa + i))(2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//#include <stdio.h>
//int main()
//{
//	char* (*pf)(char*, const char*);//����ָ��
//	char* (*pfArr[4])(char*, const char*);//����ָ������
//	return 0;
//}

//����ָ��������÷�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Calc(int (*arr)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", arr(a, b));
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**  0.exit   1.add  **\n");
//	printf("**  2.sub    3.mul  **\n");
//	printf("**  4.div    5.xor  **\n");
//	printf("**********************\n");
//}
//int main()
//{
////��switch case �����
//	int n = 0;
//	//int a = 0;
//	//int b = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &n);
//		/*if (n >= 1 && n <= 5)
//		{
//			printf("����������������");
//			scanf("%d%d", &a, &b);
//		}*/
//		switch (n)
//		{
//		case 0:
//			printf("�˳�����\n");
//			break;
//		case 1:
//			//printf("%d\n",Add(a, b));
//			Calc(Add);
//			break;
//		case 2:
//			//printf("%d\n",Sub(a, b));
//			Calc(Sub);
//			break;
//		case 3:
//			//printf("%d\n",Mul(a, b));
//			Calc(Mul);
//			break;
//		case 4:
//			//printf("%d\n",Div(a, b));
//			Calc(Div);
//			break;
//		case 5:
//			//printf("%d\n", Xor(a, b));
//			Calc(Xor);
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (n);

//�ú���ָ��������
	//int n = 0;
	//int a = 0;
	//int b = 0;
	//int(*arr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//arr��һ������ָ������--����ת�Ʊ�
	//do
	//{
	//	menu();
	//	printf("��ѡ��>");
	//	scanf("%d", &n);
	//	if (n >= 1 && n <= 5)
	//	{
	//		printf("����������������");
	//		scanf("%d%d", &a, &b);
	//		printf("%d\n", arr[n](a, b));
	//	}
	//	else if (n == 0)
	//	{
	//		printf("�˳�����\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�����������������\n");
	//	}
	//} while (n);
//	return 0;
//}

//ָ����ָ�������ָ�룺��һ��ָ�룬ָ��ָ��һ�����飬�����Ԫ�ض��Ǻ���ָ��
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ--����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������--����ָ������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ��ָ����ָ�������ָ�룬��һ������ָ�룬ָ��ָ���������4��Ԫ�أ�
//	return 0;                             //ÿ��Ԫ������Ϊ����ָ��:int(*)(int, int)
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int* arr[10];//ָ������
//	
//	//int* (*pa)[10] = &arr;//����ָ��
//
//	//int (*pAdd)(int, int) = Add;//&Add,����ָ��
//	////int sum = (*pAdd)(1, 2);
//	////int sum = pAdd(1, 2);
//	//int sum = Add(1, 2);
//	//printf("sum=%d\n", sum);
//
//	//int (*pArr[5])(int, int);//����ָ�������
//
//	int (*pArr[5])(int, int);
//	int (*(*ppArr)[5])(int, int) = &pArr;//ָ����ָ�������ָ��
//
//	return 0;
//}


//�ص�����
//#include <stdio.h>
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//ð��������������
//#include <stdio.h>
//void BubbleSort(int arr[], int sz)
//{
////whileѭ�����
//	//int n = 0;
//	//while (sz - 1)//Ҫsz-1��ð��ѭ����������ð��ѭ��
//	//{
//	//	for (n = 0; n < sz - 1; n++)
//	//	{
//	//		if (arr[n] > arr[n + 1])//|
//	//		{                       //|
//	//			int ret = arr[n];   //|
//	//			arr[n] = arr[n + 1];//|---->  һ��ð������
//	//			arr[n + 1] = ret;   //|
//	//		}                       //|
//	//	}
//	//	sz--;
//	//}

////forѭ�����
//	int i = 0;
//	for (i = 1; i < sz; i++)//Ҫsz-1��ð��ѭ����������ð��ѭ��
//	{
//		int j = 0;
//		for (j = 0; j < sz - i; j++)//|
//		{                           //|
//			if (arr[j] > arr[j + 1])//|
//			{                       //|
//				int tmp = arr[j];   //|---->  һ��ð��ѭ��
//				arr[j] = arr[j + 1];//|
//				arr[j + 1] = tmp;   //|
//			}                       //|
//		}
//	}
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//ð������
//	//ð��������ֻ��������������
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
	//BubbleSort(arr, sz);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

//	//float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };//��������������ĺ����㲻��
//	//int i = 0;
//	//int sz = sizeof(f) / sizeof(f[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%lf ", f[i]);
//	//}
//	//printf("\n");
//	//BubbleSort(f, sz);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", f[i]);
//	//}

//	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };//Ҳ�㲻��
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name��%-8s  age��%d\n", s[i].name,s[i].age);
//	}
//	return 0;
//}

//qsort--�⺯��--��������������͵�����
//void qsort(void* base, size_t num, size_t width, int(*compare)(const void* e1, const void* e2));//�ĸ�����
//1.Ŀ���������ʼλ�ã��������� f
//2.����Ĵ�С����λ��Ԫ�ء����м���Ԫ�� sz = sizeof(f) / sizeof(f[0])
//3.��ȣ���Ԫ�صĴ�С����λ���ֽ� sizeof(f[0])����sizeof(float)
//4.�ȽϺ��������Ƚ���������С�ĺ����� cmp_int  �Լ�ʵ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int cmp_int(const void* e1, const void* e2)//��������������Ƚ���������Ԫ�ص�
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()//�������������Ԫ��
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//����ͷ�ļ�#include <stdlib.h>
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n\n");
//}
//
//
//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//	return 0;// e1ָ���Ԫ�صȼ���e2ָ���Ԫ��
//	//else if (*(float*)e1 > *(float*)e2)
//	//	return 1;// e1ָ���Ԫ����e2ָ���Ԫ��֮��
//	//else
//	//	return -1;// e1ָ���Ԫ����e2ָ���Ԫ��֮ǰ
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//test2()
//{
//	float f[] = { 9.0, 8.0, 7.0,3.0, 6.0, 5.0, 4.0 };
//	int i = 0;
//	int sz = sizeof(f) / sizeof(f[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n");
//	qsort(f, sz, sizeof(f[0]),cmp_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n\n");
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)//����������
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name��%-8s  age��%d\n", s[i].name, s[i].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	for (i = 0; i < sz; i++)
//	{
//		printf("name��%-8s  age��%d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)//����������
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp�������бȽ�
//	//return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;//����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name��%-8s  age��%d\n", s[i].name, s[i].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	for (i = 0; i < sz; i++)
//	{
//		printf("name��%-8s  age��%d\n", s[i].name, s[i].age);
//	}
//}
//
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	return 0;
//}

//void* �������͵�ָ�룬���Խ����������͵ĵ�ַ�����ܽ��н����ò��������ܽ���+-�����Ĳ���
//#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//char ch = 'w';
//	//int* pa = &a;//û����
//    //char* pc = &a;//���������ţ����ǻᱨ����
//	//void* p = &a;//�����͵�ָ�룬û����
//	//int* pa1 = &ch;//���������ţ����ǻᱨ����
//	//char* pc1 = &ch;//û����
//	//void* p1 = &ch;//�����͵�ָ�룬û����
//
//	int a = 10;
//	void* p = &a;
//	*p = 0;//�޸�ʧ�ܣ���Ϊvoid* ��������ָ�룬�����õ�ʱ��֪�����ʼ����ֽڣ�void* ���͵�ָ�룬���ܽ��н����ò���
//	p++;//Ҳ���У�ԭ����ͬ
//	return 0;
//}


//ʹ��bubble_sort����ģ��ʵ��qsort����
#include <stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//ʵ��bubble_sort�����ĳ���Ա����֪��δ���������ݵ�����
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 1; i < sz; i++)//����
	{
		int j = 0;
		for (j = 0; j < sz - i; j++)//ÿһ�˱ȽϵĶ���
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	//ʹ��bubble_sort�����ĳ���Աһ��֪���Լ��������ʲô����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu s[3] = { {"wangwu",50},{"lisi",40},{"zhangsan",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("name��%-8s  age��%d\n", s[i].name, s[i].age);
	}
	printf("\n");
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	for (i = 0; i < sz; i++)
	{
		printf("name��%-8s  age��%d\n", s[i].name, s[i].age);
	}
	printf("\n");
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	for (i = 0; i < sz; i++)
	{
		printf("name��%-8s  age��%d\n", s[i].name, s[i].age);
	}
}
int main()
{
	test1();
	test2();
	return 0;
}