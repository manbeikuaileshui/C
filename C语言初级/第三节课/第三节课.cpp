//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//�ַ����Ľ�����־;'\0'
//	//"abcd"��ʵ����������"\0","abcd\0"
//	//'\0'--ת���ַ�--0
//	//0--����0
//	//'0'--�ַ�0--48
// EOF-end of file--�ļ�������־--1
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	int a = 10;
//	int b = 20;
//	if (a > b)
//		printf("%d\n", a);
//	else
//	printf("%d\n", b);

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("max = %d\n", max);
	/*return 0;
}*/


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//����ǲ��е�
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//����Ԫ�ظ��� 6
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 0;//�ĸ��ֽڣ�32��bit
//	//00000000000000000000000000000000
//	int b = ~a;//b���з��ŵ�����
//	//11111111111111111111111111111111
//	//10000000000000000000000000000001
//	// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// //����--ԭ�롢���롢���붼��ͬ
// //����
// //ԭ��                   ---->        ����      ---->    ����
// //��������д         ԭ��ķ���λ              ����+1
// //��������ϵ��       ��������λȡ��
//	//~--��һ������������λȡ��
//	//1001
//	//0110
//	printf("%d\n", b);//��ӡ�����������ԭ��
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++ 11 10
//	//int b = ++a;//ǰ��++����++����ʹ�� 11 11
//	//int b = a--;//����--����ʹ�ã���-- 9 10
//	int b = --a;//ǰ��--����--����ʹ�� 9 9
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//int a = 3.14;
//	int a = (int)3.14;//ǿ������ת�� double-->int
//	printf("%d\n", a);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//0��ʾ�٣���0��ʾ��
//	//&&--�߼���(��һ������Ϊ��)
//	//||--�߼�����һ������Ϊ�棩
//	//int a = 3;//
//	//int b = 5;//
//	//int c = a && b;//1
//	//int c = a || b;//1
//	int a = 0;
//	int b = 5;
//	//int c = a && b;//0
//	int c = a || b;//1
//	printf("%d\n", c);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//����������(��Ŀ������)��exp1��exp2��exp3��
//	//�����ʽexp1Ϊ�棬ִ�б��ʽexp2�����ʽ2�Ľ�����������ʽ�Ľ��
//	//�����ʽexp1Ϊ�٣�ִ�б��ʽexp3�����ʽ3�Ľ�����������ʽ�Ľ��
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//if (a > b)
//		//max = a;
//	//else
//		//max = b;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//[]--�±����ò�����
//	//printf("%d\n", arr[4]);
//	//()��������
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
	//typedef--���Ͷ��壨�����ض��壩
	//typedef unsigned int u int;//��unsigned int ����Ϊ u int
	//unsigned int num = 20;
	//u int num = 20;
	//return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
//void test()
//{
//	//int a = 1;//a����{}����ʧ��
//	static int a = 1;//����static��a��һ����̬�ľֲ�����
//	//1.static ���ξֲ��������ֲ��������������ڱ䳤�������ϴμ������a��
//	a++;
//
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//int main()
//{
////extern--�����ⲿ���ŵ�
////2.static ����ȫ�ֱ���(�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û��ʹ���ˣ�
//	//g_val����һ���ļ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);

//extern int add(int, int);
//int main ()
////3.static���κ���
////static���εĺ����ı��˺������������ԣ��ⲿ��������--->�ڲ��������ԣ�
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>

//#define �����ʶ������
//#define MAX 100
//int main()
//{
//	int a = MAX;//�൱��int a = 100;
//	printf("%d\n", a);
//	return 0;
//}

//#define ���Զ����--������
//������ʽ����
//int MAX(int x, int y)
//{
//	if(x > y)
//	    return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//
////��ķ�ʽ����
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//�൱��max = (a>b? a;b)
//	printf("max = %d\n",max);
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>
int main()
{
	int a = 10;//���ڴ�����4���ֽڿռ�
	////&a//ȡ��ַ
	////��һ�ֱ�����������ŵ�ַ��----ָ�����
	int* p = &a;//��a�ĵ�ַ�浽p����
	////pΪָ�룬������a�ĵ�ַ
	////*--�����ò���������ӷ��ʲ�������
	////*p--��p���н����ò������ҵ�����ָ��Ķ���
	*p = 20;//��ͨ��*p�ҵ��Ķ����ֵ��Ϊ20
	printf("%d\n", a);
	printf("%p\n", p);
	printf("%p\n", &a);
double d = 3.14;
double* pd = &d;
*pd = 5.5;
printf("%lf\n", d);
printf("%lf\n", *pd);
printf("%d\n", sizeof(pd));
////
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));
	return 0;
}
////ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�