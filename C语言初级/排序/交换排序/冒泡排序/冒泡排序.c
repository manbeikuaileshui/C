//                                          冒泡排序
//两两比较，把最大的数放最后面
//不用管排好的数，继续步骤一
//时间复杂度：最好情况：O(n)、最坏情况：O(n^2)、平均情况：O(n^2)
//空间复杂度：O(1)
//稳定性：稳定
#include <stdio.h>
void bubble_sortr(char arr[], int sz)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 1; i < sz && flag == 1; i++)
	{
		flag = 0;
		for (j = 0; j < sz - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				char ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
				flag = 1;
			}
		}
	}
}
int main()
{
	char arr[] = { 66,32,23,45,25,5,15,69,46,37 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("排序前：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sortr(arr, sz);
	printf("排序后：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
