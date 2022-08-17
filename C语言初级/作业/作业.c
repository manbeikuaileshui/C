//#define _CRT_SECURE_NO_WARNINGS 1
//创建一个数组，完成对数组的操作
//1、实现 Print（）打印数组的每个元素
//2、实现Reverse（）函数完成数组元素的逆置
//3、实现函数Init（）初始化数组为全0
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
//	Print(arr, sz);//打印每一个元素
//	Reverse(arr, sz);//逆置数组 
//	Print(arr, sz);//打印逆置的数组
//	Init(arr, sz);//初始化为0
//	Print(arr, sz);//打印初始化为0的数组
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
////将数组A的内容与数组B的内容交换（数组一样大）
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
//	int a = 0x11223344;//44 33 22 11  十六进制数
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);//11 22 33 00
//	return 0;
//}


//#include <stdio.h>
//int i;//未初始化，若i为局部变量则为随机值，若为全局变量则为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof()----计算变量/类型所占内存的大小(返回的值>=0,且为无符号数)
//		//当有符号数与无符号数比较大小时，都当做无符号数比较，所以程序走else
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


//写一个涵数求a的二进制（补码）表示中有几个1
//#include <stdio.h>
//int count_bit_one(unsigned int a)//unsigned int a 把a变成了无符号数
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

//int ass(int a)            //利用n = n & (n-1)
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
//	//int count = count_bit_one(a);//方法1 取模+除法
//	//int count = COUNT_BIT_ONE(a);//方法2  按位与+右移操作
//	int count = ass(a);//方法3 利用n = n & (n-1)
//	printf("count=%d\n", count);
//	return 0;
//}


//两个int整数m和n的二进制数表达式中，有多少个位不同
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


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(unsigned int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf(" %d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
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


//不允许创建临时变量，交换两个整数的内容
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("更改前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("更改后：a=%d b=%d\n", a, b);
//	return 0;
//}


//使用指针打印数组
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


//实现一个函数u，打印乘法口诀表，如输入9，输出9*9口诀表，输入12，输出12*12口诀表
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
//			printf("%-2d*%-2d=%-2d  ", i, j, i * j);//-3调整对齐
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


//编写一个函数 reverse_string(char* string)(递归实现）
//实现：将参数字符串中的字符反向排序
//要求：不能使用C函数中的字符串操作函数
//#include <stdio.h>//普通方法
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
//#include <stdio.h>//递归方法
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


//写一个函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//例：输入1234，输出10
//#define _CRT_SECURE_WARNINGS 1
//#include <stdio.h>
//int DigitSum(unsigned int n)
//{
//	//普通办法
//	/*int sum = 0;
//	while (n)
//	{
//		sum = sum + n % 10;
//		n = n / 10;
//	}
//	return sum;*/
//	//递归方法
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


//使用递归的方法编写一个函数实现n的k次方
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