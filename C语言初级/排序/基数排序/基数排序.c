//����˼�룺����+�ռ�
//Ҳ����Ͱ������������������ɸ����ӣ����ؼ���Ϊk�ļ�¼�����k�����ӣ�Ȼ���ٰ���Ž��ǿյ�����
//���������������з�Χ�ģ� ����0-9��ʮ��������ɣ���ֻ������ʮ�����ӣ���̰�����ʮ���١���������
//������O��O(n+m)  ������O(k*(n+m)) ƽ�������O(k*(n+m)) k���ؼ��ָ���   m���ؼ���ȡֵ��ΧΪm��ֵ
//�ռ�Ч�ʣ�O(n+m)
//�ȶ��ԣ��ȶ�
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
	printf("����ǰ��\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	jishu(arr, sz);
	printf("\n�����\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}