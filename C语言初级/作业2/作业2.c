//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//5λ�˶�Ա�μ���10����̨����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ���
//Bѡ��˵���ҵڶ���E����
//Cѡ��˵���ҵ�һ��D�ڶ�
//Dѡ��˵��C����ҵ���
//Eѡ��˵���ҵ��ģ�A��һ
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//��forѭ����ٳ�ÿһλѡ�ֿ��ܵó�������
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							//if (a * b * c * d * e == 120)
//							//{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							//}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//��������ִ�н����
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	char* str3 = "hello bit";//�����ַ��������ܱ��޸�
//	char* str4 = "hello bit";//�����ַ��������ܱ��޸�
//	if (str1 == str2)//str1��str2��Ȼ�����������ͬ���������Ǹ��Զ����ģ�Ϊ��������
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)//str3��str4��ŵĶ���h�ĵ�ַ����hello bit�����ڴ���ֻ��һ�ݣ��������
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}//������Ϊ��str1 and str2 are not same
//             str3 and str4 are same


//ģ��ʵ��qsort
//#include <stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//void swap(char* x, char* y, int width)
//{
//	char tmp = 0;
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		tmp = *x;
//		*x = *y;
//		*y = tmp;
//		x++;
//		y++;
//	}
//}
//void bubble_sort(int arr[], int sz, int width, int (*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
//			{
//				swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//}

//����Ľ����
//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr - 1), *(ptr2 - 1));//1 6
//	return 0;
//}


//ʵ��һ�����������������ַ����е�k���ַ���
//���磺ABCD����һ���ַ��õ�BCDA
//      ABCD���������ַ��õ�CDAB
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//1.������ⷽ��
//void left_move(char arr[], int k, int len)
//{
//	assert(arr != NULL);
//		int i = 0;
//		for (i = 0; i < k; i++)
//		{
//			//����תһ���ַ�
//			char tmp = *arr;//�ó���һ��Ԫ��
//			int j = 0;
//			for (j = 0; j < len - 1; j++)//����Ԫ����ǰŲ
//			{
//				*(arr + j) = *(arr + 1 + j);
//			}
//			*(arr + len - 1) = tmp;//�ó���Ԫ�طŵ����
//		}
//}
//void right_move(char* arr, int k, int len)
//{
//	assert(arr != NULL);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *(arr + len - 1);
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + len - 1 - j) = *(arr + len - 2 - j);
//		}
//		*arr = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(arr);
//	//left_move(arr, k, len);
//	right_move(arr, k, len);
//  printf("%s\n", arr);
//	return 0;
//}
//2.������ת��
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (right > left)
//	{
//		char ret = *left;
//		*left = *right;
//		*right = ret;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k, int len)
//{
//	assert(arr != NULL);
//	reverse(arr, arr + k - 1);//������ת�ĸ���
//	reverse(arr + k, arr + len - 1);//����ʣ��ĸ���
//	reverse(arr, arr + len - 1);//��������
//}
//void right_move(char* arr, int k, int len)
//{
//	assert(arr != NULL);
//	reverse(arr, arr + len - 1);//��������
//	reverse(arr, arr + k - 1);//������ת�ĸ���
//	reverse(arr + k, arr + len - 1);//����ʣ��ĸ���
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(arr);
//	assert(k <= len);
//	//left_move(arr, k, len);
//	right_move(arr, k, len);
//	printf("%s\n", arr);
//	return 0;
//}


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//���磺���� s1 = AABCD �� s2 = BCDAA, ����1
//      ���� s2 = abcd �� s2 = ACBD, ����0
// AABCD ����һ���ַ��õ� ABCDA
// AABCD ���������ַ��õ� BCDAA
// AABCD ����һ���ַ��õ� DAABC
// ����1
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
//int main()
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


//����2
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//1.s1�ַ�����׷��һ��s1�ַ���
//	//strcat���ַ���׷��
//	// strncat���ַ���׷�ӣ���׷�ӱ���
//	//strcat(s1, s1);//����ģ�����׷���Լ����ַ���
//	strncat(s1, s1, len1);
//	//2.�ж�s2ָ����ַ����Ƿ�����s1ָ����ַ������Ӵ�
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}


//���Ͼ���
//��һ�����־��󣬾����ÿ���Ǵ����ҵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�����ֵĴ���
//Ҫ��ʱ�临�Ӷ�С��O��N����N��Ԫ�أ�һ��һ������Ľ��������N�Σ�ʱ�����O(N)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d\n", x, y);
//	}
//	else
//	printf("�Ҳ���\n");
//	return 0;
//}