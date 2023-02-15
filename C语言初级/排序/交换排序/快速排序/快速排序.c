//                                              ��������
//��ȡһ��Ԫ��(�磺��һ��)Ϊ����
//���б���С��Ԫ��һ��ǰ�ţ���ǰ����ţ����������Ԫ��һ�ɺ�ţ��Ӻ���ǰ�ţ����γ����������ӱ�
//��ߵĶ�����С���ұߵĶ����ڻ������
//�Ը��ӱ�����ѡ������Ԫ�ز��Դ˹���������ݹ�˼�룩
//ֱ��ÿ���ӱ��Ԫ��ֻʣһ��
//�����������ڶ�ԭ��������������ļ�¼���н�������
//ʱ�临�Ӷȣ���������O(nlogn)��������O(n^2)��ƽ�������O(nlogn)
//�ռ临�Ӷȣ�O(nlogn)
//�ȶ��ԣ����ȶ�
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
	int arr[] = { 0,49,38,65,97,76,13,27,49 };//���ڱ�����arr[0]����Ԫ�أ�������ʱ�洢�ռ�
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 1;
	printf("����ǰ��\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	qsort(arr, left,right);
	printf("\n�����\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
