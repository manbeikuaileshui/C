//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////д���뽫���������Ӵ�С���
//int main()
//{
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d", &a,&b,&c);
	//if (a > b && a > c)
	//{
	//	if (b > c)
	//		printf("%d %d %d\n", a, b, c);
	//	else
	//		printf("%d %d %d\n", a, c, b);
	//}
	//else if (b > a && b > c)
	//{
	//	if (a > c)
	//		printf("%d %d %d", b, a, c);
	//	else
	//		printf("%d %d %d", b, c, a);
	//}
	//else
	//{
	//	if (a > b)
	//		printf("%d %d %d", c, a, b);
	//	else
	//		printf("%d %d %d", c, b, a);
	//}

//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a�����b��֮��c��С
//	if (a < b)
//	{
//		int A = a;
//		a = b;
//		b = A;
//	}
//	if (a < c)
//	{
//		int B = a;
//		a = c;
//		c = B;
//	}
//	if (b < c)
//	{
//		int C = b;
//		b = c;
//		c = C;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//дһ�������ӡ1-100֮�����е�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i < 34; i++)
//	{
//		sum = 3 * i;
//		printf("%d ", sum);
//	}
//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//���������������������������Լ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0; 
//	scanf("%d%d", &a, &b);
//		while (r = a % b)
//		{
//			a = b;
//			b = r;
//		}
//	printf("%d\n", b);
//	return 0;
//}



//��ӡ1000�굽2000��֮�������
//1.�ܱ�4�������Ҳ��ܱ�100����������
//2.�ܱ�400����������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
	//int year = 0;
	//int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);//�����������

//	int year = 0;
//	int cont = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			cont++;
//		}
//
//	}
//	printf("\ncont=%d\n", cont);
//	return 0;
//}


//дһ�����룬��ӡ100-200֮�������
//��i=a*c����a��c��������һ������<=��ƽ��i
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//    for (i = 100; i <= 200; i++)   //for(i=101;i<=200;i+=2)
//	{
//	    for (a = 2; a < i; a++)      //for(a=2;a<=sqrt(i);a++)//sqrt����-��ƽ������ѧ�⺯������Ҫ����ͷ�ļ�#include <math.h>
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		if (a == i)      //if(a>sqrt(i))
//		{
//			printf("%d ", i);
//			b++;
//		}
//	}
//	printf("\nb=%d\n", b);
//	return 0;
//}


//��д����1-100�����������г��ֶ��ٸ�����9
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
	/*int a = 0;
	int b = 0;
	double sum = 0.0;
	for (a = 1,b=2; a <= 99,b<=100; a+=2,b+=2)
	{
		sum = sum + 1.0 / a - 1.0 / b;
	}
	printf("%lf\n", sum);*/

//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		//sum = sum + flag * 1.0 / i;//��ʽͬһ����˼
//		flag = -flag;
//	}
//	printf("%fl\n", sum);
//	return 0;
//}


//��10�����������ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int i = 0;
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr[]{ -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];//����������������Ϊ��һ������ÿ��ֵ����Ƚϣ�������ֵ����������С����һ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//��ӡ9*9�˷���ھ�
//1*1=1
//1*2=2  2*2=4  
//1*3=3  2*3=6  3*3=9
//.....  .....  .....   .....
//1*8=8  2*8=16 3*8=24  4*8=32  ......
//1*9=9  2*9=18 3*9=27  4*9=36  ......
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			//printf("%d*%d=%2d  ", a, b, a * b);//%2d����ʾ��ӡ�Ľ��Ϊ��λ����������λ����ÿո����Ҳ���
//			printf("%d*%d=%-2d  ", a, b, a * b);  //%-2d,��ʾ��ӡ�Ľ��Ϊ��λ����������λ����ÿո�������
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**** ������Ϸ ****\n");
//	printf("* 1.play 0.exit  *\n");
//	printf("******************\n");
//}
//void game()
//{
//	int guess = 0;//���ղµ�����
//	int ret = 0;
////	//��ʱ����������������������ʼ��
////	//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1970.01.0.1 00:00:00��=��xxxx����
//	ret = rand()%100+1;//rand()  ����һ�������  ��Χ��0 to RAND_MAX(0-32767) Ϊ��ʹ��Ϸ���棬�������1-100�������
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("�������>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


////goto��䣺��ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣����磺һ�������������ѭ����(��������ȥ����˼��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	//again:
//	//printf("hello bit\n");
//	//goto again;
//	
//	printf("hello bit\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}


//�ػ���������goto��䣩
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
int main()
{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  //60���ػ�
//	//system()--ִ��ϵͳ������
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬���Խ���60s��ػ�����������ȡ���ػ�\n��ѡ��>;");
//	scanf("%s", input);
//	//strcmp()--�Ƚ������ַ���
//	if (strcmp(input, "1223") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}

	char input[20] = { 0 };
		system("shutdown -s -t 60");
		while (1)
		{
			printf("��ע�⣬���Խ���60s��ػ�����������ȡ���ػ�\n��ѡ��>;");
			scanf("%s", input);
			if (strcmp(input, "1223") == 0)
			{
				system("shutdown -a");
				break;
			}
			else if (strcmp(input, "1223") == !0)
			{
				printf("�������\n");
			}
		}
	return 0;
}

