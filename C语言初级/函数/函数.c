
//�⺯����www.cplusplus.com
//      Ӣ�İ棺http://en.cppreference.com
//      ���İ棺http://zh.cppreference.com
//�ڼ������ѧ�У��ӳ�����һ�����ͳ����е�ĳ���ִ��룬��һ������������ɡ����������ĳ���ض�����
//����������������룬�߱���ԵĶ����ԡ�
//һ���������������з���ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ����ء���Щ����ͨ��������Ϊ����⡣
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


////strcpy:��������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "####";
//	strcpy(arr2, arr1);//��arr1��������ݿ�����arr2����ȥ,��Ҫ����ͷ�ļ�<string.h>
//	printf("%s\n", arr2);
//	return 0;
//}


//memset(memory set):�滻��������
//       �ڴ�   ����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5 );//''������������ͣ����ܷ��ַ���
//	printf("%s\n", arr);
//	return 0;
//}


//дһ�����������ҳ����������е����ֵ
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}


//дһ���������Խ����������ͱ���������
//Swap1�Ǵ���ĺ�����ƣ�Swap2������ȷ�ĺ������
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
// }

//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);//��ֵ����
//	Swap2(&a, &b);//��ַ����
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//дһ�����������ж�һ�����ǲ���������100-200��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a < n; a++)//for(a=2;a<sqrt(n);a++)
//	{
//		if (n % a == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	while (1)
//	{
//		int i = 0;
//		int esc = 0;
//		scanf("%d", &i);
//		{
//			if (is_prime(i) == 1)
//				printf("����\n");
//			if (is_prime(i) == 0)
//				printf("��������\n");
//		}
//	}
//	return 0;
//}


//дһ�������ж�һ���ǲ�������(1000-2000)
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int is_leap_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	while (1)
//	{
//		int year = 0;
//		scanf("%d", &year);
//		if (is_leap_year(year) == 1)
//			printf("������\n");
//		else if (is_leap_year(year) == 0)
//			printf("��������\n");
//	}
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ���,�ҵ��˷�����������±꣬�Ҳ�������-1
//#include <stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//���鴫��֮����������Ԫ�ظ���,���������Ԫ�ظ����ڴ�����
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//	return 0;
//}


//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Ad(int* p)
//{
//	(*p)++;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


//������Ƕ�׵���(�����ͺ���֮������л�����ϵ�)
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//	return 0;
//}
//int main()
//{
//	three_line();
//	return 0;
//}


//��������ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//#include <stdio.h>
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	//strlen():���ַ�������
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf("%d",printf("%d",2));
//	//printf("%d",1);
//	//���ս��4321
//	//printf�ɹ�ʱ������ֵΪд����ַ�����
//	return 0;
//}

//�����������붨��
//int Add(int x, int y);//��������������add.h���棬����ͷ�ļ�#include "Add.h"
#include "Add.h"
#include <stdio.h>
//��������,����add.c����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);//��������
	printf("%d\n", sum);
	return 0;
}
