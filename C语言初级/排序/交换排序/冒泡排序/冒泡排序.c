//                                          ð������
//�����Ƚϣ����������������
//���ù��źõ�������������һ
//ʱ�临�Ӷȣ���������O(n)��������O(n^2)��ƽ�������O(n^2)
//�ռ临�Ӷȣ�O(1)
//�ȶ��ԣ��ȶ�
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
	printf("����ǰ��\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sortr(arr, sz);
	printf("�����\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
