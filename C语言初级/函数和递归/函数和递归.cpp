                                    //�ݹ�
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void printf(int n)
//{
//	if (n > 9)
//	{
//		printf(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	printf(num);
//	//printf(1234)
//	//printf(123) 4
//	//printf(12) 3 4
//	//printf(1) 2 3 4
//	return 0;
//}


////��д��������������ʱ���������ַ����ĳ���
//#include <stdio.h>
//#include <string.h>
//int my_strlen1(char* str)
//{
//	int z = 0;
//	while (*str != '\0')
//	{
//		z++;
//		str++;
//	}
//
//	return z;
//}

//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
	//1.�������   //strlen()���ַ������ȣ���Ҫ����ͷ�ļ� #include <string.h>
	//char arr[] = "bit";
	//int len = strlen(arr);
	//printf("%d\n", len);

	//2.ģ��ʵ����һ��strlen����
	//char arr[] = "bit";
	//int len = my_strlen1(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	//printf("len = %d\n", len);

	//3.��������ʱ�������õݹ鷽�����
//  char arr[] = "bit";
//	int len = my_strlen2(arr);
//	printf("len=%d\n", len);
	//�Ѵ��»�С
	//my_strlen2("bit");
	//1+my_strlen2("it");
	//1+1+my_strlen2("t");
	//1+1+1+my_strlen2("");
	//1+1+1+0
	//3
//	return 0;
//}


//��n�Ľ׳ˣ����������)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//ѭ���ķ�ʽ
//int Facl(int a)
//{
//	int b = 0;
//    int ret1 = 1;
//	for(b=1; b<=a; b++)
//	{
//		ret1 *= b;
//	}
//	return ret1;
//}

//�ݹ�ķ�ʽ
//int Facl(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a * Facl(a - 1);
//}

//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}


                                        //�ݹ������
//���n��쳲����������������������
//쳲��������У�1 1 2 3 5 8 13  21 .....(ǰ���������ڵ���������
//������n��쳲���������Fib��n����n<=2ʱ����n����Ϊ1��n>2ʱ����n����ΪFib(n-2)+Fib(n-1)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int count = 0;
//�õݹ鷽��������
//int Fib(int i)
//{
//	if (i == 3)
//	{
//		count++;//���������쳲��������ļ������
//	}
//	else if (i <= 2)
//		return 1;
//	else
//		return Fib(i - 2) + Fib(i - 1);
//}

//�õ����ķ���
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}


//�ݹ������������Ҳ�п���ջ���
#include <stdio.h>
void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}