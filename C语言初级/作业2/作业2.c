//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//5位运动员参加了10米跳台比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三
//B选手说：我第二，E第四
//C选手说：我第一，D第二
//D选手说：C最后，我第三
//E选手说：我第四，A第一
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//用for循环穷举出每一位选手可能得出的名次
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


//下面代码的执行结果？
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	char* str3 = "hello bit";//常量字符串，不能被修改
//	char* str4 = "hello bit";//常量字符串，不能被修改
//	if (str1 == str2)//str1与str2虽然里面的内容相同，但他们是各自独立的，为两个数组
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)//str3与str4存放的都是h的地址，“hello bit”在内存中只存一份，所以相等
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}//输出结果为：str1 and str2 are not same
//             str3 and str4 are same


//模拟实现qsort
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

//输出的结果？
//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr - 1), *(ptr2 - 1));//1 6
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//例如：ABCD左旋一个字符得到BCDA
//      ABCD左旋两个字符得到CDAB
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//1.暴力求解方法
//void left_move(char arr[], int k, int len)
//{
//	assert(arr != NULL);
//		int i = 0;
//		for (i = 0; i < k; i++)
//		{
//			//左旋转一个字符
//			char tmp = *arr;//拿出第一个元素
//			int j = 0;
//			for (j = 0; j < len - 1; j++)//其余元素往前挪
//			{
//				*(arr + j) = *(arr + 1 + j);
//			}
//			*(arr + len - 1) = tmp;//拿出的元素放到最后
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
//2.三步翻转法
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
//	reverse(arr, arr + k - 1);//逆序旋转的个数
//	reverse(arr + k, arr + len - 1);//逆序剩余的个数
//	reverse(arr, arr + len - 1);//整体逆序
//}
//void right_move(char* arr, int k, int len)
//{
//	assert(arr != NULL);
//	reverse(arr, arr + len - 1);//整体逆序
//	reverse(arr, arr + k - 1);//逆序旋转的个数
//	reverse(arr + k, arr + len - 1);//逆序剩余的个数
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


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//例如：给定 s1 = AABCD 和 s2 = BCDAA, 返回1
//      给定 s2 = abcd 和 s2 = ACBD, 返回0
// AABCD 左旋一个字符得到 ABCDA
// AABCD 左旋两个字符得到 BCDAA
// AABCD 右旋一个字符得到 DAABC
// 方法1
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


//方法2
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//1.s1字符串中追加一个s1字符串
//	//strcat：字符串追加
//	// strncat：字符串追加（可追加本身）
//	//strcat(s1, s1);//错误的，不能追加自己的字符串
//	strncat(s1, s1, len1);
//	//2.判断s2指向的字符串是否是是s1指向的字符串的子串
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


//杨氏矩阵
//有一个数字矩阵，矩阵的每行是从左到右递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字的存在
//要求：时间复杂度小于O（N）：N个元素，一个一个找最坏的结果就是找N次，时间就是O(N)
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
//		printf("找到了\n");
//		printf("下标是：%d %d\n", x, y);
//	}
//	else
//	printf("找不到\n");
//	return 0;
//}