//                                         ��������
//��һ�˱Ƚ�ǰ���������ѵڶ���������С����
//�ڶ��˰ѵ���������ǰ�������Ƚϣ��ѵ�����������С����
//�Դ����ƣ������ˣ�n-1�����������
//ʱ�临�Ӷȣ���������O(n)��������O(n^2)��ƽ�������O(n^2)
//�ռ临�Ӷȣ�O(1)
//�ȶ��ԣ��ȶ�
//                                   ֱ�Ӳ�������˳�򷨶�λ����λ�ã�
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])//ֱ������ǰ�������Ԫ��
//		{
//			x = str[i];
// 
//		//����1��for��whileʵ��
//			/*j = i - 1;
//			while (j >= 0 && str[j] > x)
//			{
//				str[j + 1] = str[j];
//				j--;
//			}*/
//		//����2��for�� forʵ��
//			str[i] = str[i - 1];
//			for (j = i - 2; j >= 0 && x < str[j]; j--)
//			{
//				str[j + 1] = str[j];
//			}
// 
//			str[j + 1] = x;
//		}
//	}
//}
//int main()
//{
//	char str[] = { 5,65,34,23,53,23,21,12,28,4 };
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("����ǰ��\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n�����\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}	
//	return 0;
//}

//                                   ���ڱ���ֱ�Ӳ�������˳�򷨶�λ����λ�ã�
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])
//		{
//			str[0] = str[i];
//			//����1��for�� forʵ��
//			for (j = i - 1; str[j] > str[0]; j--)
//			{
//				str[j + 1] = str[j];
//			}
//			//����2��for��whileʵ��
//			/*j = i - 1;
//			while (str[j] > str[0])
//			{
//				str[j + 1] = str[j];
//				j--;
//			}*/
//
//			str[j + 1] = str[0];
//		}
//	}
//}
//int main()
//{
//	char str[] = { 0,5,65,34,23,53,23,21,12,28,4 };//str[0]��ʱ�����ռ䣬���ݴ�str[1]
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("����ǰ��\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n�����\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	return 0;
//}

//                                   ���ֲ������򣨶��ַ���λ����λ�ã�
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])
//		{
//			char x = str[i];
//			int left = 0;
//			int right = i - 1;
//			while (left <= right)
//			{
//				int mid = (left + right) / 2;
//				if (str[mid] < x)
//				{
//					left = mid + 1;
//				}
//				else
//				{
//					right = mid - 1;
//				}
//			}
//			//����1
//		/*	for (j = i; j > left; j--)
//			{
//				str[j] = str[j - 1];
//			}*/
//			//����2
//			j = i;
//			while (j > left)
//			{
//				str[j] = str[j - 1];
//				j--;
//			}
//	
//			str[left] = x;
//		}
//	}
//}
//int main()
//{
//	char str[] = { 5,65,34,23,53,23,21,12,28,4 };
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("����ǰ��\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n�����\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}	
//	return 0;
//}

//                               ���ڱ��Ķ��ֲ������򣨶��ַ���λ����λ�ã�
//#include <stdio.h>
//void insert_sort(char str[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < sz; i++)
//	{
//		if (str[i] < str[i - 1])
//		{
//			str[0] = str[i];
//			int left = 1;
//			int right = i - 1;
//			while (left <= right)
//			{
//				int mid = (left + right) / 2;
//				if (str[mid] < str[0])
//				{
//					left = mid + 1;
//				}
//				else
//				{
//					right = mid - 1;
//				}
//			}
//			//����1
//			/*for (j = i - 1; j >= right + 1; j--)
//			{
//				str[j + 1] = str[j];
//			}*/
//			//����2
//			j = i - 1;
//			while (j >= right + 1)
//			{
//				str[j + 1] = str[j];
//				j--;
//			}
//
//			str[right + 1] = str[0];
//		}
//	}
//}
//int main()
//{
//	char str[] = { 0,5,65,34,23,53,23,21,12,28,4 };//str[0]��ʱ�����ռ䣬���ݴ�str[1]
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("����ǰ��\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	insert_sort(str, sz);
//	printf("\n�����\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//}
//                                                    ϣ������
//1.�Ƚ��������ż�¼���зָ��n����ϵ��
//2.ÿ�������е�Ԫ�طֱ����ֱ�Ӳ�������
//3.�ٷָ� n /= 2 �������У�n��������1��n֮�以Ϊ������
//4.�ٽ�ÿ�������е�Ԫ�طֱ����ֱ�Ӳ�������
//5.�����������еļ�¼����������ʱ
//6.�ٶ�ȫ���¼����һ��ֱ�Ӳ�������
//ʱ�临�Ӷȣ���������O(n)��������O(n^2)��ƽ�������O(n^1.3)
//�ռ临�Ӷȣ�O(1)
//�ȶ��ԣ����ȶ�
//                                             �����ڱ���ϣ������
//#include <stdio.h>
//void Shell_sort(char arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int k = sz / 2;
//	int ret = 0;
//	while (k = k / 2)
//	{
//		for (i = k; i < sz; i++)
//		{
//			if (arr[i] < arr[i - k])
//			{
//				ret = arr[i];
//				for (j = i - k; j >= 0 && ret < arr[j]; j = j - k)
//				{
//					arr[j + k] = arr[j];
//				}
//				arr[j + k] = ret;
//			}
//		}
//	}
//
//}
//int main()
//{
//	char arr[] = { 0,81,94,11,96,12,35,17,95,28,58,41,75,15 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ��\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	Shell_sort(arr, sz);
//	printf("\n�����\n");
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//                                    ���ڱ���ϣ��������С�����������
#include <stdio.h>
void Shell_sort(char arr[], int sz)
{
	int i = 0;
	int j = 0;
	int k = sz / 2;
	while (k = k / 2)
	{
		for (i = k + 1; i < sz; i++)
		{
			if (arr[i] < arr[i - k])
			{
				arr[0] = arr[i];
				for (j = i - k; j > 0 && arr[0] < arr[j]; j = j - k)
				{
					arr[j + k] = arr[j];
				}
				arr[j + k] = arr[0];
			}
		}
	}
	
}
int main()
{
	char arr[] = { 0,81,94,11,96,12,35,17,95,28,58,41,75,15 };//14
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("����ǰ��\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	Shell_sort(arr, sz);
	printf("\n�����\n");
	for (i = 1; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
