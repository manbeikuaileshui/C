//基本思想：再带排序的数据中选出最大（小）的元素放在其最终的位置
//基本操作：1.首先通过n-1次关键字比较，从n个记录中找出关键字最小的记录，将它与第一个记录交换
//          2.再通过n-2次比较，从剩余的n-1个记录中找出关键字次小的记录，将它与第二个记录交换
//          3.重复上述操作，进行n-1趟排序后，排序结束
//时间复杂度：最好情况：O(n^2)、最坏情况：O(n^2)、平均情况：O(n^2)
//空间复杂度：O(1)
//稳定性：不稳定
#include <stdio.h>
void jiandan(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int ret = 0;
	for (i = 1; i < sz; i++)
	{
		k = i - 1;
		for (j = i; j < sz; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}
		if (k != i - 1)
		{
			ret = arr[i - 1];
			arr[i - 1] = arr[k];
			arr[k] = ret;
		}
	}
}
int main()
{
	int i = 0;
	int left = 0;
	int arr[] = { 21,25,49,25,16,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排序前：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	jiandan(arr, sz);
	printf("\n排序后：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}