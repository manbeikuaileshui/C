//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//��forѭ������Ļ�ϴ�ӡ1-10
//int main()
//{
	//int i = 0;
	//for (i = 1;//ѭ�������ĳ�ʼ�� i <= 10;//ѭ���������жϲ��� i++//ѭ�������ĵ�������)
	//for (i = 1; i <= 10; i++)
	//{
		
		//if (i == 5)
			    // break;//��������ֱ������forѭ��
			//continue;//��ֹ����ѭ����֮����䲻��ִ�У����ر����жϲ���
		//printf("%d ", i);
    // }  

	//int i = 0;
	//for (i = 1; i <= 10; i++)
		//��������forѭ���ڲ��޸�ѭ������,��ֹforѭ��ʧȥ���ơ�
		//if(i = 5)
		//����Ǵ���ģ���Ҫ��ӡhaha��Ӧ��Ϊ��
	//{
		//if (i == 5)
			//printf("haha ");
		//printf("%d ", i);
	//}

		//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
		//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		//int i = 0;
		//for (i = 0; i < 10; i++)
		// {
			//printf("%d ", arr[i]);
		// }
	//return 0;
//}


//forѭ���ı���1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	///for (;;)//��ѭ����ӡhehe
//	//forѭ���ĳ�ʼ�����жϡ�����������ʡ�ԣ�Ҳ�ɵ���ʡ��ĳһ���֡�����Ҫ�����ʡ�ԣ����ܸı�ԭ���������˼�����鲻Ҫ���ʡ��
//		//����жϲ��ֱ�ʡ�ԣ����ж��������Ǻ�Ϊ��
//	//{
//		//printf("hehe");
//
//	int i = 0;
//	int j = 0;
//	//for(i=0;i<10;i++)
//	for(;i<10;i++)//ʡ�Ժ�ֻ��ӡ��ʮ��hehe
//	{
//		//for (j = 0; j < 10; j++)
//		for(;j<10;j++)//ʡ�Ըı���ԭ������˼�����Բ������ʡ��
//		{
//			printf("hehe\n");//iѭ��һ�Σ�jѭ��ʮ�Ρ��ܹ�100��hehe
//		}
//	}
//	return 0;
//}


//forѭ���ı���2
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//��ӡ������hehe
//	}
//	return 0;
//}


//�����������Ҫѭ�����Σ�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�жϲ���k=0Ϊֱ�Ӹ�ֵ����Ϊ0������Ϊ�٣�����ѭ������ȥ������ѭ��0��
//		k++;
//	return 0;
//}


//ʹ��do...whileѭ����Ļ�ϴ�ӡ1-10
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//			//break;//��ֹѭ����ֻ��ӡ1234
//		//continue;//��ӡ1234��Ȼ����ѭ���ж�
//		printf("%d ", i);
//		i++;
//	}
//		while (i <= 10);
//	return 0;
//}


//����n�Ľ׳�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
	//forѭ������
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
		//ret = ret * i;
	//}
	//printf("%d\n", ret);

	//whileѭ������
	/*int i = 1;
	int n = 0;
	scanf("%d", &n);
	int ret = 1;
	while (i <= n)
	{
		ret = ret * i;
		i++;
	}
	printf("%d\n", ret);
	return 0;
}*/


//����1!+2!+3!+
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
	//��forѭ������
	/*int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{*/
		//int ret = 1;
		//for (i = 1; i <= n; i++)
		//{
			//ret = ret * i;   //����161-166�����167-168���Ż�forѭ��
		//}
		//sum = sum + ret;
		/*ret = ret * n;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);*/

	//��whileѭ������
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	while (i <= 3)
//	{
//		ret = ret * i;
//			sum = sum + ret;
//			i++;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������n
//��дint binsearch(int x, int v[], int n)
//����:��v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	////int k = 17;
	//int i = 0;
	////дһ�����룬��arr���飨����ģ����ҵ�7
	//int sz = sizeof(arr) / sizeof(arr[0]);//����������ж��ٸ�����
	////sizeof()    �󣨣�������ַ�ռ�ж����ֽ�
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//	printf("�Ҳ���\n");

	//�۰�����㷨�����ֲ����㷨��  Ҫ��log2 n�Σ�ȡ����
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//		if (right < left)
//		{
//			printf("�Ҳ���\n");
//		}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//		int dim = (left + right) / 2;
//		if (arr[dim] > k)
//		{
//			right = right - 1;
//		}
//		else if (arr[dim] < k)
//		{
//			left = left + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", dim);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <string>
//int main()
//{
//	//welcome to bit!!!!!!
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	// ...
//	//welcome to bit!!!!!!
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;//���±�
//	//int right = sizeof(arr1) / sizeof(arr1[0]);//�������Ԫ�ظ���
//	//int right = sizeof(arr1) / sizeof(arr1[0])-1;//�����һ���ǡ�\0��Ԫ�ص��±꣨������������ַ���������������Ǵ����
//	                                              //��Ϊ������ߵ��ַ�����������һ����\0����
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//�������ȷ��
//	//int right = strlen(arr1);//��arr1�ĳ��ȣ���ʵ����\0��ǰ��Ԫ�صĸ���
//	int right = strlen(arr1)-1;//���±�
//	//strlen():���ַ������ȵģ���߲�������\0��
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//
//		Sleep(1000);//ÿ��ӡһ��ͣ��1��,������ͷ�ļ�#include <windows.h>
//		//system();//ִ��ϵͳ�����һ������
//		system("cls");//�����Ļ,������ͷ�ļ�#include <stdlib.h>
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���
//������ξ�����������˳�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		//if (password == "123456")//�����  //==���������Ƚ������ַ����Ƿ����
		//Ӧ��ʹ��һ���⺯��--strcmp(������ͷ�ļ�#include <string.h>)
	if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
		if(i==3)
		{
			printf("��������������˳�����\n");
		}
		return 0;
}