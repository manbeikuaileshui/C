//#define _CRT_SECURE_NO_WARNINGS 1
//����һ�����飬��ɶ�����Ĳ���
//1��ʵ�� Print������ӡ�����ÿ��Ԫ��
//2��ʵ��Reverse���������������Ԫ�ص�����
//3��ʵ�ֺ���Init������ʼ������Ϊȫ0
//#include <stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{/*
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		j = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = j;
//	}*/
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);//��ӡÿһ��Ԫ��
//	Reverse(arr, sz);//�������� 
//	Print(arr, sz);//��ӡ���õ�����
//	Init(arr, sz);//��ʼ��Ϊ0
//	Print(arr, sz);//��ӡ��ʼ��Ϊ0������
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
////������A������������B�����ݽ���������һ����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int A[5] = { 5,4,3,2,1 };
//    int B[5] = { 1,2,3,4,5 };
//	int sz = sizeof(A) / sizeof(A[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//    return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;//44 33 22 11  ʮ��������
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);//11 22 33 00
//	return 0;
//}


//#include <stdio.h>
//int i;//δ��ʼ������iΪ�ֲ�������Ϊ���ֵ����Ϊȫ�ֱ�����Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof()----�������/������ռ�ڴ�Ĵ�С(���ص�ֵ>=0,��Ϊ�޷�����)
//		//���з��������޷������Ƚϴ�Сʱ���������޷������Ƚϣ����Գ�����else
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;// b = b + a++ + c
//	printf("a= %d b= %d c= %d\n", a, b, c);// 9 23 8
//	return 0;
//}


//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//#include <stdio.h>
//int count_bit_one(unsigned int a)//unsigned int a ��a������޷�����
//{
//	int count = 0;
//	while (a)
//	{
//	  if (a % 2 == 1)
//	   {
//		 count++;
//	   }
//	   a = a / 2;
//	}
//	return count;
//}

//int COUNT_BIT_ONE(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1 ) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int ass(int a)            //����n = n & (n-1)
//{                         //n = 1101 = 13
//	int count = 0;        //n = 1101
//	while (a)             //n-1 = 1100
//	{                     //n = n & (n-1) = 1100
//		a = a & (a - 1);  //n-1 = 1011
//		count++;          //n = n & (n-1) = 1000
//	}                     //n-1 = 0111
//	return count;         //n = n & (n-1) = 0000
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//int count = count_bit_one(a);//����1 ȡģ+����
//	//int count = COUNT_BIT_ONE(a);//����2  ��λ��+���Ʋ���
//	int count = ass(a);//����3 ����n = n & (n-1)
//	printf("count=%d\n", count);
//	return 0;
//}


//����int����m��n�Ķ����������ʽ�У��ж��ٸ�λ��ͬ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int ass(int m, int n)
//{
//	int count = 0;
//	int M = m ^ n;
//	while (M)
//	{
//		M = M & (M - 1);
//		count++;
//
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = ass(m, n);
//	printf("%d\n", count);
//	return 0;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(unsigned int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf(" %d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//����������ʱ������������������������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("���ĺ�a=%d b=%d\n", a, b);
//	return 0;
//}


//ʹ��ָ���ӡ����
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//ʵ��һ������u����ӡ�˷��ھ���������9�����9*9�ھ�������12�����12*12�ھ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void printf_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-2d  ", i, j, i * j);//-3��������
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf_table(n);
//	return 0;
//}


//��дһ������ reverse_string(char* string)(�ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ���������
//Ҫ�󣺲���ʹ��C�����е��ַ�����������
//#include <stdio.h>//��ͨ����
//#include <string.h>
//void reverse_string(char* arr)
//{
//	int right = strlen(arr) - 1;
//	int left = 0;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>//�ݹ鷽��
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	int right = my_strlen(arr) - 1;
//	int left = 0;
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[right] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//дһ������DigitSum(n),����һ���Ǹ����������������������֮��
//��������1234�����10
//#define _CRT_SECURE_WARNINGS 1
//#include <stdio.h>
//int DigitSum(unsigned int n)
//{
//	//��ͨ�취
//	/*int sum = 0;
//	while (n)
//	{
//		sum = sum + n % 10;
//		n = n / 10;
//	}
//	return sum;*/
//	//�ݹ鷽��
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//ʹ�õݹ�ķ�����дһ������ʵ��n��k�η�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
// double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 /( Pow(n, k + 1) * n));//return (1.0 / (Pow(n, -k)));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	return Pow(n, k - 1) * n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double mus = Pow(n, k);
//	printf("mus=%lf\n", mus);
//	return 0;
//}