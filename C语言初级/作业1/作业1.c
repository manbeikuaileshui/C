//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//*(pulPtr+3)=*(pulPtr+3)+3
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}


//дһ����������������һ���ַ���������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char* arr)
//{
//	assert(arr);//��������Ƿ񴫴����
//	int sz = strlen(arr);
//	char* left = arr;
//	char* right = arr + sz - 1;
//	while (right > left)
//	{
//		char ret = *left;
//		*left = *right;
//		*right = ret;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//���������ַ����пո���ô�ո�֮����ַ��㲻��
//	gets(arr);//��ȡһ�У��пո�Ҳ����
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//дһ����������sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
//���磺2+22+222+2222+22222
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//���0--100000֮������������������
//��������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������磺153 = 1^3 + 5^3 + 3^3 ����153Ϊ������
//n = 3ʱ�������Ϊˮ�ɻ���
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����i��λ��--nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��--sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int) pow(tmp % 10, n);//pow����һ�����Ķ��ٴη���ͷ�ļ�#include <math.h>
//			tmp /= 10;                   //pow�������ص�������double����
//		}
//		//3.�Ƚ�i == sum
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��ӡ����
//        *      
//       ***
//      *****
//     *******           //�ϰ벿��
//    *********
//   ***********
//  *************
// 
//   ***********
//    *********
//     *******          //�°벿��
//      *****
//       ***
//        *
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//����7�У�����4��
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//1.��ӡ�ո�
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2*i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//1.��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//         ************         *************              **************
//        ************         *************              **************
//       ***                           ***               ***        ***
//      ***                          ***                ***        ***
//     ************                ***                 ***        ***
//    ************               ***                  ***        ***
//            ***              ***                   ***        ***
//           ***             ***                    ***        ***
// ************            *************           **************
//************            ***************         **************
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (i != 6 && i != 7)
//			{
//				printf(" ");
//			}
//		}
//		if (i == 6)
//		{
//			printf("            ");
//		}
//		else if (i == 7)
//		{
//			printf("           ");
//		}
//		if (i != 2 && i != 3 && i != 6 && i != 7)
//		{
//			printf("************");
//		}
//		else
//		{
//			printf("***");
//		}
//		if (i == 0 || i == 1)
//		{
//			printf("        ");
//			printf("*************");
//			printf("              ");
//			printf("**************");
//		}
//		else if (i == 2 || i == 3)
//		{
//			printf("                          ");
//		}
//		else
//		{
//			if (i != 9)
//			{
//				int p = 20;
//				for (p = 20; p - i > 0; p--)
//				{
//					printf(" ");
//				}
//			}
//			else
//			{
//				printf("            ");
//			}
//		}
//		if (8 > i && i > 1)
//		{
//			printf("***");
//			int r = 0;
//			for (r = 0; r < 12 + i; r++)
//			{
//				printf(" ");
//			}
//			if (i == 2)
//			{
//				printf(" ");
//			}
//			printf("***");
//			printf("        ");
//			printf("***");
//		}
//		else if (i == 8)
//		{
//			printf("**************");
//			printf("         ");
//			printf("**************");
//		}
//		else if(i == 9)
//		{
//			printf("****************");
//			printf("       ");
//			printf("**************");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//����Ľ��Ϊ��
//#include <stdio.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);//wang
//	return;
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);//students����Ԫ�ص�ַ������һ�е�ַ��students+1���ڶ��е�ַ
//	return 0;
//}

//1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�������ñ��ʵ�֣�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int money = 0;//�ܽ��
//	int j = 0;//����
//	int total = 0;//���˶���
//	int empty = 0;//��ƿ����
//	scanf("%d%d", &money, &j);
//	//���������ˮ
//	total = money / j;
//	empty = money / j;
//   //����������ˮ
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}


//Ϊʲôô����ѭ����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}


//ģ��ʵ��strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//int my_strlen1(const char* p)//������ʵ��
//{
//	int i = 0;
//	assert(p != NULL);
//	while ( *p++ )
//	{
//		i++;
//	}
//	return i;
//}
//int my_strlen2(const char* p)//�ݹ�ʵ��
//{
//	assert(p != NULL);
//	if (*p == '\0')
//		return 0;
//	else
//		return 1 + my_strlen2(p + 1);
//}
//int my_strlen3(const char* p)//ָ�����ʵ��
//{
//	assert(p != NULL);
//	char* pp = p;
//	while (*pp)
//	{
//		pp++;
//	}
//	return pp - p;
//}
//int main()
//{
//	char* arr = "ABCDEF";
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//	printf("%d\n", my_strlen3(arr));
//	return 0;
//}


//ģ��ʵ��strcpy
//#include <stdio.h>
//void copy(int* arr1, int* arr2, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr1[i] = arr2[i];
//	    printf("%d ", arr1[i]);
//	}
//}
//int main()
//{
//	int arr1[] = { 5,6,7,8 };
//	int arr2[] = { 1,2,3,4 };
//	int len = sizeof(arr2) / sizeof(arr2[0]);
//	copy(arr1, arr2, len);
//	return 0;
//}


//��������ʹ����ȫ����λ��ż��ǰ��
//#include <stdio.h>
//void move(int arr[], int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	int ret = 0;
//	while (left < right)
//	{
//		//����߿�ʼ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ߿�ʼ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����������
//		if (left < right)
//		{
//			ret = arr[right];
//			arr[right] = arr[left];
//			arr[left] = ret;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (right > left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr1, int k)
//{
//	assert(arr1 != NULL);
//	int len = strlen(arr1);
//	assert(k <= len);
//	reverse(arr1, arr1 + k - 1);
//	reverse(arr1 + k, arr1 + len - 1);
//	reverse(arr1, arr1 + len - 1);
//}
//int is_left_move(char* s1, char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
// int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "defabc";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}