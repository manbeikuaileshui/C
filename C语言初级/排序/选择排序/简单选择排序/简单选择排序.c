//����˼�룺�ٴ������������ѡ�����С����Ԫ�ط��������յ�λ��
//����������1.����ͨ��n-1�ιؼ��ֱȽϣ���n����¼���ҳ��ؼ�����С�ļ�¼���������һ����¼����
//          2.��ͨ��n-2�αȽϣ���ʣ���n-1����¼���ҳ��ؼ��ִ�С�ļ�¼��������ڶ�����¼����
//          3.�ظ���������������n-1��������������
//ʱ�临�Ӷȣ���������O(n^2)��������O(n^2)��ƽ�������O(n^2)
//�ռ临�Ӷȣ�O(1)
//�ȶ��ԣ����ȶ�
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
	printf("����ǰ��\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	jiandan(arr, sz);
	printf("\n�����\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}