//��1--2000���е����꣨�ܱ�400�������ܱ�4���������ܱ�100������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;
}


//��10�����������ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int arr[]{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
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

