#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");//ʹ������ͣһ��
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;//Debug�汾ִ�У���ѭ��
//}           //Release�汾ִ�У���ӡ13��hehe

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);//F9:�л��ϵ㡣�Ȱ�F9,�ٰ�F5��ִ����ǰ��Ĵ��룬ͣ�ڴ˴����ٰ�F5������ִ���߼�����һ���ϵ�
//	}
//	return 0;
//}

//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	return 0;
//}

//#include <stdio.h>
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//����ʵ��
//1.ʵ�ִ��룺��1��+2��+3��+...+n�������������
//����3���ڴ����9�����������15 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//int ret = 1;//�޸ĺ�Ĵ��룺ɾ�������Ǹ����������
//	 	for (j = 1; j <= i; j++)
//		{
//			ret *= j;//ret = ret * j
//		}
//		sum += ret;//sum = sum + ret
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//2.�о�������ѭ����ԭ��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");//arr[12]��iͬһ����ַ�ռ䣬��arr[12]��Ϊ0��Ҳ�Ͱ�i��Ϊ0�����Ի���ѭ��
//	}
//	return 0;
//}

//strcpy(�ַ�������)��ʹ��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "######";
//	char arr2[] = "hehe";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//����arr2��ʱ���arr2��\0Ҳ������ȥ�ˣ�����ӡarr1��ʱ������\0�Ͳ��ٴ�ӡ��
//	return 0;                                                     //���Զ�����ġ�##�������ӡ����
//}

//ģ��ʵ��strcpy����
//#include <stdio.h>
//#include <assert.h>
////void my_strcpy(char* arr1, char* arr2)
////void my_strcpy(char* arr1, const char* arr2)
//char* my_strcpy(char* arr1, const char* arr2)//�����з���ֵ����150��ɾ164��166����167
//{
//	//while (*arr2!= '\0')
//	//{
//	//	//*arr1 = *arr2;
//	//	//arr1++;
//	//	//arr2++;
//	//	*arr1++ = *arr2++;//�Ż�137-139�Ĵ���
//	//}
//	//*arr1 = *arr2;
//	//if (arr1 != NULL && arr2 != NULL)//��if��Ϊ�˷�ֹ�ѿ�ָ�봫����,���������������ڷ�������
//	//{
//	//	while (*arr1++ = *arr2++)//�Ż�135-142�Ĵ���
//	//	{
//	//		;
//	//	}
//	//}
//	char* ret = arr1;
//	assert(arr1 != NULL);//���ԣ�ʹ������⺯����Ҫ����#include <assert.h>
//	assert(arr2 != NULL);//assert()����������Ϊ��ʲô������������Ϊ�ٻᱨ��,�����޸Ĵ���
//	while (*arr1++ = *arr2++)
//	//while(*arr2++ = *arr1++)//д���ˣ���132��д��133,�Ϳ��Ժܺõ��ҳ���������
//	{
//		;                        //�Ż�143-149�Ĵ���
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "######";
//	char arr2[] = "hehe";
//	//my_strcpy(arr1, arr2);
//	//my_strcpy(arr1, NULL);//д���ˣ���143-149��Ϊ151-157�ͺ������ҳ�����
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//const���÷�
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	//const int num = 10;//��constʹnum���ܱ��ı�,���ǽ�����Ǳ��ı���
//	int* p = &num;
//	//const int* p = &num;//const����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num)��ֵ,�����Ը�p
//	//int* const p = &num; //const����ָ�������*�ұ�ʱ�����ε���ָ�����p����Ҳ����˵��p���ܱ��ı䣬������ͨ��p���ı�*p(num����ֵ
//	*p = 20;               //���߶���p��*p�����ܱ��ı�
//	//int n = 100;
//	//p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//strlen
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//ģ��ʵ��strlen
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* arr)
{
	assert(arr != NULL);//��ָ֤�����Ч��
	int ret = 0;
	while (*arr++)
	{
		ret++;
	}
	return ret;
}
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}