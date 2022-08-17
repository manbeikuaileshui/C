//基本思想：分配+收集
//也叫作桶排序或箱排序：设置若干个箱子，将关键字为k的记录放入第k个箱子，然后再按序号将非空的连接
//基数排序：数字是有范围的， 均由0-9这十个数字组成，则只需设置十个箱子，相继按个、十、百…进行排序
//最好情况O：O(n+m)  最坏情况：O(k*(n+m)) 平均情况：O(k*(n+m)) k：关键字个数   m：关键字取值范围为m个值
//空间效率：O(n+m)
//稳定性：稳定
#include <stdio.h>
void jishu(int* arr, int sz)
{
	int max = arr[0];
	for (int i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	int base = 1;
	int* b = (int*)malloc(sizeof(int) * sz);
	while (max / base > 0)
	{
		int t[10] = { 0 };
		for (int i = 0; i < sz; i++)
		{
			t[arr[i] / base % 10]++;
		}
		for (int i = 1; i < 10; i++)
		{
			t[i] += t[i - 1];
		}
		for (int i = sz - 1; i >= 0; i--)
		{
			b[t[arr[i] / base % 10] - 1] = arr[i];
			t[arr[i] / base % 10]--;
		}
		for (int i = 0; i < sz; i++)
		{
			arr[i] = b[i];
		}
		base = base * 10;
	}
}
int main()
{
	int i = 0;
	int arr[] = { 614,738,921,485,637,101,215,530,790,306 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排序前：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	jishu(arr, sz);
	printf("\n排序后：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}