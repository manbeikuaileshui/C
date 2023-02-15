//����˼�룺���������������ϵ����������С��鲢��Ϊһ����������
//���ڲ������У�ͨ�����õ���2-·�鲢����
//����������λ�����ڵ�����������arr[i��j]��arr[j+1��n]�鲢Ϊһ����������arr[i��n]
//ʱ��Ч�ʣ���á����ƽ�������O(nlogn)
//�ռ�Ч�ʣ�O(n)
//�ȶ��ԣ��ȶ�
#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int low, int mid, int high)
{
    int i, k;
    int* tmp = (int*)malloc((high - low + 1) * sizeof(int));
    //����ռ䣬ʹ���СΪ����
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;

    for (k = 0; left_low <= left_high && right_low <= right_high; k++) 
    {  // �Ƚ�����ָ����ָ���Ԫ��
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
    {  //����һ��������ʣ�ֱ࣬�Ӹ��Ƴ���ճ���ϲ�����β
    //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
        for (i = left_low; i <= left_high; i++)
        {
            tmp[k++] = arr[i];
        }
    }

    if (right_low <= right_high)
    {
        //���ڶ���������ʣ�ֱ࣬�Ӹ��Ƴ���ճ���ϲ�����β
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
    printf("����ǰ \n");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", a[i]);
    }
    merge_sort(a, 0, sz - 1);  // ����
    printf("\n����� \n");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}