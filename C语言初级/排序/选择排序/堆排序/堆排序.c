//堆的定义：
//若n个元素的序列{a1,a2,…an}满足
//ai<=a2i、ai<=a2i+1或ai>=a2i、ai>=a2i+1
//则分别称该序列{a1,a2,…an}为小根堆和大根堆
//堆实质是满足如下性质的完全二叉树：二叉树中任一非叶子结点均小于（大于）它的孩子结点
//基本思想：
//若在输出堆顶的最小值（最大值）后，使得剩余n-1个元素的序列重新建成一个堆，则得到n个元素的次小值（次大值）……如此反复，
//便能得到一个有序序列，这个过程称之为堆排序
//两个问题：
//1.如何由一个无序序列建成一个堆
// 对一个无序序列反复“筛选”就可以得到一个堆
// 显然：
// 单结点的二叉树是堆
// 在完全二叉树中所有以叶子结点（序号 i>n/2 )为根的子树是堆
// 这样，我们只需依次将以序号为 n/2、n/2-1、……、1 的结点为根的子树均调整为堆即可
//2.如何在输出堆顶元素后，调整剩余元素为一个新的堆？
//小根堆（大根堆）：<1>输出堆顶元素之后，以堆中最后一个元素替代之
//                  <2>然后将根结点值与左、右子树的根结点值进行比较，并与其中小者（大者）进行交换
//                  <3>重复上述操作，直至叶子结点，将得到新的堆，称这个从堆顶至叶子的调整过程为“筛选”
//时间复杂度：最好、最坏、平均情况：O(nlogn)
//空间复杂度：O(n^2)
//稳定性：不稳定
#include <stdio.h>
void swap(char arr[], int n, int m)
{
	arr[0] = arr[n];
	arr[n] = arr[m];
	arr[m] = arr[0];
}
void jiandui(char arr[], int m, int n)
{
	int ret = arr[m];
	int j = 0;
	for (j = 2 * m; j <= n; j *= 2)
	{
		if (j + 1 <= n && arr[j] < arr[j + 1])
		{
			j++;
		}
		if (ret >= arr[j])
		{
			break;
		}
		arr[m] = arr[j];
		m = j;
	}
	arr[m] = ret;
}
void duipaixu(char arr[], int sz)
{
	int i = 0;
	for (i = sz / 2; i > 0; i--)
	{
		jiandui(arr, i, sz);//建立初始堆
	}
	for (i = sz; i > 1; i--)
	{
		swap(arr, 1, i);//根与最后一个元素交换
		jiandui(arr, 1, i - 1);//对arr[0]到arr[1]重新建堆
	}
}
int main()
{
	int i = 0;
	char arr[] = { 0,49,38,65,49,76,12,27,97 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排序前：\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	duipaixu(arr, sz - 1);
	printf("\n排序后：\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}