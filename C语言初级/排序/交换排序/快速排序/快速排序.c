//                                              快速排序
//任取一个元素(如：第一个)为中心
//所有比它小的元素一律前放（从前往后放），比它大的元素一律后放（从后往前放），形成左右两个子表
//左边的都比它小，右边的都大于或等于它
//对各子表重新选择中心元素并以此规则调整（递归思想）
//直到每个子表的元素只剩一个
//快速排序不适于对原本有序或基本有序的记录序列进行排序
//时间复杂度：最好情况：O(nlogn)、最坏情况：O(n^2)、平均情况：O(nlogn)
//空间复杂度：O(nlogn)
//稳定性：不稳定
#include <stdio.h>
void qsort(int arr[], int left, int right)
{
	int i = left;
	int j = right;
	if (j < i)
	{
		return;
	}
	arr[0] = arr[i];
	while (j > i)
	{
		while (i < j && arr[j] >= arr[0])
		{
			j--;
		}
		arr[i] = arr[j];
		while (i< j && arr[i] <= arr[0])
		{
			i++;
		}
		arr[j] = arr[i];
	}
	arr[j] = arr[0];
	qsort(arr, left, j-1 );
	qsort(arr, i+1, right);
}
int main()
{
	int i = 0;
	int arr[] = { 0,49,38,65,97,76,13,27,49 };//带哨兵，即arr[0]不存元素，用作临时存储空间
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 1;
	printf("排序前：\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	qsort(arr, left,right);
	printf("\n排序后：\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
