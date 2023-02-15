//基本思想：将两个或两个以上的有序子序列“归并”为一个有序序列
//在内部排序中，通常采用的是2-路归并排序
//即：将两个位置相邻的有序子序列arr[i…j]和arr[j+1…n]归并为一个有序序列arr[i…n]
//时间效率：最好、最坏、平均情况：O(nlogn)
//空间效率：O(n)
//稳定性：稳定
#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int low, int mid, int high)
{
    int i, k;
    int* tmp = (int*)malloc((high - low + 1) * sizeof(int));
    //申请空间，使其大小为两个
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;

    for (k = 0; left_low <= left_high && right_low <= right_high; k++) 
    {  // 比较两个指针所指向的元素
        if (arr[left_low] <= arr[right_low]) 
        {
            tmp[k] = arr[left_low++];
        }
        else 
        {
            tmp[k] = arr[right_low++];
        }
    }

    if (left_low <= left_high)
    {  //若第一个序列有剩余，直接复制出来粘到合并序列尾
    //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
        for (i = left_low; i <= left_high; i++)
        {
            tmp[k++] = arr[i];
        }
    }

    if (right_low <= right_high)
    {
        //若第二个序列有剩余，直接复制出来粘到合并序列尾
        //memcpy(tmp+k, arr+right_low, (right_high-right_low+1)*sizeof(int));
        for (i = right_low; i <= right_high; i++)
        {
            tmp[k++] = arr[i];
        } 
    }
    for (i = 0; i < high - low + 1; i++)
    {
        arr[low + i] = tmp[i];
    }
    free(tmp);
}

void merge_sort(int arr[], unsigned int first, unsigned int last)
{
    int mid = 0;
    if (first < last)
    {
        mid = (first + last) / 2; 
        merge_sort(arr, first, mid);
        merge_sort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

int main() {
    int i = 0;
    int a[] = { 32,12,56,78,76,45,36 };
    int sz = sizeof(a) / sizeof(a[0]);
    printf("排序前 \n");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", a[i]);
    }
    merge_sort(a, 0, sz - 1);  // 排序
    printf("\n排序后 \n");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}