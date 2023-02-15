//                                               顺序查找
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int chazhao( char arr[], int sz, const int ret )
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == ret)
//			return i;
//	}
//	return -1;
//}
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	printf("请输入要查找的元素：\n");
//	scanf("%d", &ret);
//	int len = chazhao(arr, sz, ret);
//	if (len == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", len);
//	return 0;
//}

//                                             二分查找
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//方法1
int chazhao(char arr[], int sz, int ret)
{
	int left = 0;
	int right = sz - 1;
	while (right >= left)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == ret)
		{
			return mid;
		}
		else if (arr[mid] > ret)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
// //方法2 递归
//int digui(char arr[], int ret, int left, int right)
//{
//	if (left > right)
//	{
//		return -1;
//	}
//	int ban = (left + right) / 2;
//	if (arr[ban] == ret)
//	{
//		return ban;
//	}
//	else if (arr[ban] > ret)
//	{
//		right = ban - 1;
//		digui(arr, ret, left, right);
//	}
//	else
//	{
//		left = ban + 1;
//		digui(arr, ret, left, right);
//	}
//}
int main()
{
	
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	printf("请输入要查找的元素：\n");
	scanf("%d", &ret);
	int len = chazhao(arr, sz, ret);
	//int left = 0;
	//int right = sz - 1;
	//int len = digui(arr, ret, left, right);
	if (len == -1)
		printf("找不到\n");
	else
		printf("找到了，下标是：%d\n", len);
	return 0;
}
