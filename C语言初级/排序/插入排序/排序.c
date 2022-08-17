//                                         插入排序
//第一趟比较前两个数，把第二个数按大小插入
//第二趟把第三个数与前两个数比较，把第三个数按大小插入
//以此类推，进行了（n-1）趟完成排序
//时间复杂度：最好情况：O(n)、最坏情况：O(n^2)、平均情况：O(n^2)
//空间复杂度：O(1)
//稳定性：稳定
//                                   直接插入排序（顺序法定位插入位置）
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])//直接跳过前面有序的元素
//		{
//			x = str[i];
// 
//		//方法1：for、while实现
//			/*j = i - 1;
//			while (j >= 0 && str[j] > x)
//			{
//				str[j + 1] = str[j];
//				j--;
//			}*/
//		//方法2：for、 for实现
//			str[i] = str[i - 1];
//			for (j = i - 2; j >= 0 && x < str[j]; j--)
//			{
//				str[j + 1] = str[j];
//			}
// 
//			str[j + 1] = x;
//		}
//	}
//}
//int main()
//{
//	char str[] = { 5,65,34,23,53,23,21,12,28,4 };
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("排序前：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n排序后：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}	
//	return 0;
//}

//                                   带哨兵的直接插入排序（顺序法定位插入位置）
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])
//		{
//			str[0] = str[i];
//			//方法1：for、 for实现
//			for (j = i - 1; str[j] > str[0]; j--)
//			{
//				str[j + 1] = str[j];
//			}
//			//方法2：for、while实现
//			/*j = i - 1;
//			while (str[j] > str[0])
//			{
//				str[j + 1] = str[j];
//				j--;
//			}*/
//
//			str[j + 1] = str[0];
//		}
//	}
//}
//int main()
//{
//	char str[] = { 0,5,65,34,23,53,23,21,12,28,4 };//str[0]临时辅助空间，数据从str[1]
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("排序前：\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n排序后：\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	return 0;
//}

//                                   二分插入排序（二分法定位插入位置）
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])
//		{
//			char x = str[i];
//			int left = 0;
//			int right = i - 1;
//			while (left <= right)
//			{
//				int mid = (left + right) / 2;
//				if (str[mid] < x)
//				{
//					left = mid + 1;
//				}
//				else
//				{
//					right = mid - 1;
//				}
//			}
//			//方法1
//		/*	for (j = i; j > left; j--)
//			{
//				str[j] = str[j - 1];
//			}*/
//			//方法2
//			j = i;
//			while (j > left)
//			{
//				str[j] = str[j - 1];
//				j--;
//			}
//	
//			str[left] = x;
//		}
//	}
//}
//int main()
//{
//	char str[] = { 5,65,34,23,53,23,21,12,28,4 };
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("排序前：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n排序后：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}	
//	return 0;
//}

//                               带哨兵的二分插入排序（二分法定位插入位置）
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])
//		{
//			str[0] = str[i];
//			int left = 1;
//			int right = i - 1;
//			while (left <= right)
//			{
//				int mid = (left + right) / 2;
//				if (str[mid] < str[0])
//				{
//					left = mid + 1;
//				}
//				else
//				{
//					right = mid - 1;
//				}
//			}
//			//方法1
//			/*for (j = i - 1; j >= right + 1; j--)
//			{
//				str[j + 1] = str[j];
//			}*/
//			//方法2
//			j = i - 1;
//			while (j >= right + 1)
//			{
//				str[j + 1] = str[j];
//				j--;
//			}
//
//			str[right + 1] = str[0];
//		}
//	}
//}
//int main()
//{
//	char str[] = { 0,5,65,34,23,53,23,21,12,28,4 };//str[0]临时辅助空间，数据从str[1]
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("排序前：\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n排序后：\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//}
//                                                    希尔排序
//1.先将整个待排记录序列分割成n个子系列
//2.每个子序列的元素分别进行直接插入排序
//3.再分割 n /= 2 个子序列（n最后必须是1，n之间互为质数）
//4.再将每个子序列的元素分别进行直接插入排序
//5.待整个序列中的记录“基本有序”时
//6.再对全体记录进行一次直接插入排序
//时间复杂度：最好情况：O(n)、最坏情况：O(n^2)、平均情况：O(n^1.3)
//空间复杂度：O(1)
//稳定性：不稳定
//                                             不带哨兵的希尔排序
//#include <stdio.h>
//void Shell_sort(char arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int k = sz / 2;
//	int ret = 0;
//	while (k = k / 2)
//	{
//		for (i = k; i < sz; i++)
//		{
//			if (arr[i] < arr[i - k])
//			{
//				ret = arr[i];
//				for (j = i - k; j >= 0 && ret < arr[j]; j = j - k)
//				{
//					arr[j + k] = arr[j];
//				}
//				arr[j + k] = ret;
//			}
//		}
//	}
//
//}
//int main()
//{
//	char arr[] = { 0,81,94,11,96,12,35,17,95,28,58,41,75,15 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前：\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	Shell_sort(arr, sz);
//	printf("\n排序后：\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//                                    带哨兵的希尔排序（缩小增量多遍排序）
#include <stdio.h>
void Shell_sort(char arr[], int sz)
{
	int i = 0;
	int j = 0;
	int k = sz / 2;
	while (k = k / 2)
	{
		for (i = k + 1; i < sz; i++)
		{
			if (arr[i] < arr[i - k])
			{
				arr[0] = arr[i];
				for (j = i - k; j > 0 && arr[0] < arr[j]; j = j - k)
				{
					arr[j + k] = arr[j];
				}
				arr[j + k] = arr[0];
			}
		}
	}
	
}
int main()
{
	char arr[] = { 0,81,94,11,96,12,35,17,95,28,58,41,75,15 };//14
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排序前：\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	Shell_sort(arr, sz);
	printf("\n排序后：\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
